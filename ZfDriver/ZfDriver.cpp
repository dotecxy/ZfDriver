#include "ZfDriver.h"
#include "Utils.h"
#include "Resource.h"
#include "DriverController.h"
#include "IoctlUtils.h"

#define DRIVER_FILE_NAME L"ZfDriver-R0.sys"
#define DRIVER_SERVICE_NAME L"ZfDriver"
#define DRIVER_SYMLINK_NAME L"\\\\.\\ZfDriver"

DriverController gDriverController;
BOOL gIsZfDriverInstalled = FALSE;

BOOL ZfDriver::Install()
{
	if (gIsZfDriverInstalled == TRUE)
		return TRUE;
	wchar_t sysPath[MAX_PATH] = { 0 };
	Utils::GetAppPath(sysPath);
	wcscat_s(sysPath, DRIVER_FILE_NAME);
	if (
		!Utils::ReleaseResource(IDR_SYS1, L"SYS", DRIVER_FILE_NAME) ||
		!gDriverController.Install(sysPath, DRIVER_SERVICE_NAME, DRIVER_SERVICE_NAME) ||
		!gDriverController.Start() ||
		!gDriverController.Open(DRIVER_SYMLINK_NAME)
		)
	{
		return FALSE;
	}
	gIsZfDriverInstalled = TRUE;
	return TRUE;
}

VOID ZfDriver::Uninstall()
{
	if (gIsZfDriverInstalled == FALSE)
		return;
	gDriverController.Close();
	gDriverController.Stop();
	gDriverController.Uninstall();
	gIsZfDriverInstalled = FALSE;
}

DWORD ZfDriver::Test(IN DWORD num)
{
	if (gIsZfDriverInstalled == FALSE)
		return num;
	DWORD ret = num;
	gDriverController.IoControl(IOCTL_CODE_TEST, &num, sizeof(DWORD), &ret, sizeof(DWORD), NULL);
	return ret;
}

BOOL ZfDriver::ReadBytes(IN DWORD pid, IN DWORD64 address, IN DWORD size, INOUT BYTE* res)
{
	if (gIsZfDriverInstalled == FALSE)
		return FALSE;
	IOCTL_TRANS_READ trans = { pid,(PVOID)address,size };
	if (!gDriverController.IoControl(IOCTL_CODE_READ, &trans, sizeof(IOCTL_TRANS_READ), res, size, NULL))
		return FALSE;
	return TRUE;
}