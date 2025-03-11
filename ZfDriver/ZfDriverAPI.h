#pragma once



extern "C" {


	__declspec(dllexport) bool  __stdcall Install();
	__declspec(dllexport) void  __stdcall Uninstall();
	__declspec(dllexport) DWORD __stdcall Test(IN DWORD num);
	__declspec(dllexport) bool  __stdcall ReadBytes(IN DWORD pid, IN DWORD64 address, IN DWORD size, OUT BYTE* data);
	__declspec(dllexport) bool  __stdcall ReadByte(IN DWORD pid, IN DWORD64 address, OUT BYTE* data);
	__declspec(dllexport) bool  __stdcall ReadShort(IN DWORD pid, IN DWORD64 address, OUT SHORT* data);
	__declspec(dllexport) bool  __stdcall ReadInt(IN DWORD pid, IN DWORD64 address, OUT INT* data);
	__declspec(dllexport) bool  __stdcall ReadLong(IN DWORD pid, IN DWORD64 address, OUT LONGLONG* data);
	__declspec(dllexport) bool  __stdcall ReadFloat(IN DWORD pid, IN DWORD64 address, OUT FLOAT* data);
	__declspec(dllexport) bool  __stdcall ReadDouble(IN DWORD pid, IN DWORD64 address, OUT DOUBLE* data);
	__declspec(dllexport) bool  __stdcall WriteBytes(IN DWORD pid, IN DWORD64 address, IN DWORD size, IN BYTE* data);
	__declspec(dllexport) bool  __stdcall WriteByte(IN DWORD pid, IN DWORD64 address, IN BYTE data);
	__declspec(dllexport) bool  __stdcall WriteShort(IN DWORD pid, IN DWORD64 address, IN SHORT data);
	__declspec(dllexport) bool  __stdcall WriteInt(IN DWORD pid, IN DWORD64 address, IN INT data);
	__declspec(dllexport) bool  __stdcall WriteLong(IN DWORD pid, IN DWORD64 address, IN LONGLONG data);
	__declspec(dllexport) bool  __stdcall WriteFloat(IN DWORD pid, IN DWORD64 address, IN FLOAT data);
	__declspec(dllexport) bool  __stdcall WriteDouble(IN DWORD pid, IN DWORD64 address, IN DOUBLE data);
	__declspec(dllexport) bool  __stdcall KeyDown(IN USHORT keyCode);
	__declspec(dllexport) bool  __stdcall KeyUp(IN USHORT keyCode);
	__declspec(dllexport) bool  __stdcall MouseLeftButtonDown();
	__declspec(dllexport) bool  __stdcall MouseLeftButtonUp();
	__declspec(dllexport) bool  __stdcall MouseRightButtonDown();
	__declspec(dllexport) bool  __stdcall MouseRightButtonUp();
	__declspec(dllexport) bool  __stdcall MouseMiddleButtonDown();
	__declspec(dllexport) bool  __stdcall MouseMiddleButtonUp();
	__declspec(dllexport) bool  __stdcall MouseMoveRelative(IN LONG dx, IN LONG dy);
	__declspec(dllexport) bool  __stdcall MouseMoveAbsolute(IN LONG dx, IN LONG dy);
	__declspec(dllexport) bool  __stdcall GDIDrawInit(IN void* drawLoop, IN INT fontSize);
	__declspec(dllexport) bool  __stdcall GDIDrawDestroy();
	__declspec(dllexport) bool  __stdcall GDIDrawFps();
	__declspec(dllexport) bool  __stdcall GDIDrawText(IN LONG x, IN LONG y, IN LPCWSTR str, IN COLORREF color, IN INT fontSize);
	__declspec(dllexport) bool  __stdcall GDIDrawLine(IN LONG x1, IN LONG y1, IN LONG x2, IN LONG y2, IN LONG lineWidth, IN COLORREF color);
	__declspec(dllexport) bool  __stdcall GDIDrawRect(IN LONG x, IN LONG y, IN LONG width, IN LONG height, IN LONG lineWidth, IN COLORREF color);
	__declspec(dllexport) bool  __stdcall GDIDrawRectFill(IN LONG x, IN LONG y, IN LONG width, IN LONG height, IN COLORREF color);
	__declspec(dllexport) bool  __stdcall GDIDrawCircle(IN LONG x, IN LONG y, IN LONG r, IN COLORREF color, IN LONG lineCount, IN LONG lineWidth);
	__declspec(dllexport) bool  __stdcall ForceDeleteFile(IN PCWSTR filePath);
	__declspec(dllexport) DWORD64  __stdcall GetModuleBase(IN DWORD pid, IN PCWSTR moduleName);
	__declspec(dllexport) bool  __stdcall ProcessHide(IN DWORD pid, IN BOOL hide);
	__declspec(dllexport) bool  __stdcall WindowHide(IN HWND hwnd);
	__declspec(dllexport) DWORD  __stdcall GetProcessIdByName(IN PCWSTR processName);
	__declspec(dllexport) bool  __stdcall InjectDll(IN DWORD pid, IN PCWSTR dllPath);
}

