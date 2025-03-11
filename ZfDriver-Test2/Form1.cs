using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ZfDriver_Test2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            bool ok = ZfDriver.Install();

            byte[] buffer = new byte[sizeof(int)];
            //ZfDriver.ReadBytes(8308, 0x2139947d310ul, sizeof(int), buffer);
            //var result = BitConverter.ToInt32(buffer, 0);

            //textBox1.Text = result.ToString();

            ZfDriver.ProcessHide(8308, false); 

            ZfDriver.Uninstall();
        }
    }


}
