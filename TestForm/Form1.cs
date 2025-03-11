using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TestForm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            var intPtr = Marshal.AllocHGlobal(Marshal.SizeOf<int>());
            var addr = "0x" + intPtr.ToString("x2").PadLeft(8, '0');
            textBox1.Text = addr;
            Marshal.WriteInt32(intPtr, 10086);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            var i = Convert.ToInt64(textBox1.Text, 16);
            var value = Marshal.ReadInt32(new IntPtr(i));
            textBox2.Text = value + "";
        }
    }
}
