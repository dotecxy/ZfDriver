#ifndef _IOCTL_UTILS_H_
#define _IOCTL_UTILS_H_

#include <ntifs.h>

// Code
#define IOCTL_CODE_TEST  CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_CODE_READ  CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_CODE_WRITE  CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_CODE_FORCE_DELETE  CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS)

// Trans Struct
struct IOCTL_TRANS_READ
{
	DWORD pid;
	PVOID address;
	DWORD size;
};

#endif // !_IOCTL_UTILS_H_
