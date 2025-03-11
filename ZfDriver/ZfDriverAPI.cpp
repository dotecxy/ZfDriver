#include "ZfDriver.h"
#include "ZfDriverAPI.h"

// 基础功能
bool __stdcall Install()
{
    return ZfDriver::Install();
}

void __stdcall Uninstall()
{
      ZfDriver::Uninstall();
}

DWORD __stdcall Test(IN DWORD num) {
    return ZfDriver::Test(num);
}

// 读取内存
bool __stdcall ReadBytes(IN DWORD pid, IN DWORD64 address, IN DWORD size, OUT BYTE* data) {
    return ZfDriver::ReadBytes(pid, address, size, data);
}

bool __stdcall ReadByte(IN DWORD pid, IN DWORD64 address, OUT BYTE* data) {
    return ZfDriver::ReadByte(pid, address, data);
}

bool __stdcall ReadShort(IN DWORD pid, IN DWORD64 address, OUT SHORT* data) {
    return ZfDriver::ReadShort(pid, address, data);
}

bool __stdcall ReadInt(IN DWORD pid, IN DWORD64 address, OUT INT* data) {
    return ZfDriver::ReadInt(pid, address, data);
}

bool __stdcall ReadLong(IN DWORD pid, IN DWORD64 address, OUT LONGLONG* data) {
    return ZfDriver::ReadLong(pid, address, data);
}

bool __stdcall ReadFloat(IN DWORD pid, IN DWORD64 address, OUT FLOAT* data) {
    return ZfDriver::ReadFloat(pid, address, data);
}

bool __stdcall ReadDouble(IN DWORD pid, IN DWORD64 address, OUT DOUBLE* data) {
    return ZfDriver::ReadDouble(pid, address, data);
}

// 写入内存
bool __stdcall WriteBytes(IN DWORD pid, IN DWORD64 address, IN DWORD size, IN BYTE* data) {
    return ZfDriver::WriteBytes(pid, address, size, data);
}

bool __stdcall WriteByte(IN DWORD pid, IN DWORD64 address, IN BYTE data) {
    return ZfDriver::WriteByte(pid, address, data);
}

bool __stdcall WriteShort(IN DWORD pid, IN DWORD64 address, IN SHORT data) {
    return ZfDriver::WriteShort(pid, address, data);
}

bool __stdcall WriteInt(IN DWORD pid, IN DWORD64 address, IN INT data) {
    return ZfDriver::WriteInt(pid, address, data);
}

bool __stdcall WriteLong(IN DWORD pid, IN DWORD64 address, IN LONGLONG data) {
    return ZfDriver::WriteLong(pid, address, data);
}

bool __stdcall WriteFloat(IN DWORD pid, IN DWORD64 address, IN FLOAT data) {
    return ZfDriver::WriteFloat(pid, address, data);
}

bool __stdcall WriteDouble(IN DWORD pid, IN DWORD64 address, IN DOUBLE data) {
    return ZfDriver::WriteDouble(pid, address, data);
}

// 键盘鼠标
bool __stdcall KeyDown(IN USHORT keyCode) {
    return ZfDriver::KeyDown(keyCode);
}

bool __stdcall KeyUp(IN USHORT keyCode) {
    return ZfDriver::keyUp(keyCode);
}

bool __stdcall MouseLeftButtonDown() {
    return ZfDriver::MouseLeftButtonDown();
}

bool __stdcall MouseLeftButtonUp() {
    return ZfDriver::MouseLeftButtonUp();
}

bool __stdcall MouseRightButtonDown() {
    return ZfDriver::MouseRightButtonDown();
}

bool __stdcall MouseRightButtonUp() {
    return ZfDriver::MouseRightButtonUp();
}

bool __stdcall MouseMiddleButtonDown() {
    return ZfDriver::MouseMiddleButtonDown();
}

bool __stdcall MouseMiddleButtonUp() {
    return ZfDriver::MouseMiddleButtonUp();
}

bool __stdcall MouseMoveRelative(IN LONG dx, IN LONG dy) {
    return ZfDriver::MouseMoveRelative(dx, dy);
}

bool __stdcall MouseMoveAbsolute(IN LONG dx, IN LONG dy) {
    return ZfDriver::MouseMoveAbsolute(dx, dy);
}

// GDI绘图
bool __stdcall GDIDrawInit(IN void* drawLoop, IN INT fontSize) {
    return ZfDriver::GDIDrawInit((DRAW_LOOP)drawLoop, fontSize);
}

bool __stdcall GDIDrawDestroy() {
    return ZfDriver::GDIDrawDestroy();
}

bool __stdcall GDIDrawFps() {
    return ZfDriver::GDIDrawFps();
}

bool __stdcall GDIDrawText(IN LONG x, IN LONG y, IN LPCWSTR str, IN COLORREF color, IN INT fontSize) {
    return ZfDriver::GDIDrawText(x, y, str, color, fontSize);
}

bool __stdcall GDIDrawLine(IN LONG x1, IN LONG y1, IN LONG x2, IN LONG y2, IN LONG lineWidth, IN COLORREF color) {
    return ZfDriver::GDIDrawLine(x1, y1, x2, y2, lineWidth, color);
}

bool __stdcall GDIDrawRect(IN LONG x, IN LONG y, IN LONG width, IN LONG height, IN LONG lineWidth, IN COLORREF color) {
    return ZfDriver::GDIDrawRect(x, y, width, height, lineWidth, color);
}

bool __stdcall GDIDrawRectFill(IN LONG x, IN LONG y, IN LONG width, IN LONG height, IN COLORREF color) {
    return ZfDriver::GDIDrawRectFill(x, y, width, height, color);
}

bool __stdcall GDIDrawCircle(IN LONG x, IN LONG y, IN LONG r, IN COLORREF color, IN LONG lineCount, IN LONG lineWidth) {
    return ZfDriver::GDIDrawCircle(x, y, r, color, lineCount, lineWidth);
}

// 工具函数
bool __stdcall ForceDeleteFile(IN PCWSTR filePath) {
    return ZfDriver::ForceDeleteFile(filePath);
}

DWORD64 __stdcall GetModuleBase(IN DWORD pid, IN PCWSTR moduleName) {
    return ZfDriver::GetModuleBase(pid, moduleName);
}

bool __stdcall ProcessHide(IN DWORD pid, IN BOOL hide) {
    return ZfDriver::ProcessHide(pid, hide);
}

bool __stdcall WindowHide(IN HWND hwnd) {
    return ZfDriver::WindowHide(hwnd);
}

DWORD __stdcall GetProcessIdByName(IN PCWSTR processName) {
    return ZfDriver::GetProcessId(processName);
}

bool __stdcall InjectDll(IN DWORD pid, IN PCWSTR dllPath) {
    return ZfDriver::InjectDll(pid, dllPath);
}
