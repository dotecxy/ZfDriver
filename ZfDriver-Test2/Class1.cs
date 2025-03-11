using System;
using System.Runtime.InteropServices;

namespace ZfDriver_Test2
{
    public class ZfDriver
    {
        private const string DllPath = "ZfDriver.dll";

        // 基础功能
        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool Install();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern void Uninstall();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern uint Test(uint num);

        // 读取内存
        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ReadBytes(uint pid, ulong address, uint size, byte[] data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ReadByte(uint pid, ulong address, out byte data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ReadShort(uint pid, ulong address, out short data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ReadInt(uint pid, ulong address, out int data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ReadLong(uint pid, ulong address, out long data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ReadFloat(uint pid, ulong address, out float data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ReadDouble(uint pid, ulong address, out double data);

        // 写入内存
        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WriteBytes(uint pid, ulong address, uint size, byte[] data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WriteByte(uint pid, ulong address, byte data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WriteShort(uint pid, ulong address, short data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WriteInt(uint pid, ulong address, int data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WriteLong(uint pid, ulong address, long data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WriteFloat(uint pid, ulong address, float data);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WriteDouble(uint pid, ulong address, double data);

        // 键盘鼠标
        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool KeyDown(ushort keyCode);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool KeyUp(ushort keyCode);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseLeftButtonDown();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseLeftButtonUp();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseRightButtonDown();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseRightButtonUp();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseMiddleButtonDown();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseMiddleButtonUp();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseMoveRelative(int dx, int dy);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool MouseMoveAbsolute(int dx, int dy);

        // GDI绘图
        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawInit(IntPtr drawLoop, int fontSize);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawDestroy();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawFps();

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawText(int x, int y, [MarshalAs(UnmanagedType.LPWStr)] string str, uint color, int fontSize);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawLine(int x1, int y1, int x2, int y2, int lineWidth, uint color);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawRect(int x, int y, int width, int height, int lineWidth, uint color);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawRectFill(int x, int y, int width, int height, uint color);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool GDIDrawCircle(int x, int y, int r, uint color, int lineCount, int lineWidth);

        // 工具函数
        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ForceDeleteFile([MarshalAs(UnmanagedType.LPWStr)] string filePath);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern ulong GetModuleBase(uint pid, [MarshalAs(UnmanagedType.LPWStr)] string moduleName);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool ProcessHide(uint pid, bool hide);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool WindowHide(IntPtr hwnd);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern uint GetProcessIdByName([MarshalAs(UnmanagedType.LPWStr)] string processName);

        [DllImport(DllPath, CallingConvention = CallingConvention.StdCall)]
        public static extern bool InjectDll(uint pid, [MarshalAs(UnmanagedType.LPWStr)] string dllPath);
    }
}