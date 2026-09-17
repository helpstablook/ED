using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Primeiro
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Botão_Click(object sender, EventArgs e)
        {
            string bemvindo = "\n Seja bem vindo(a)!";
            string ola = "Olá, ";
            MessageBox.Show(ola+textBox1.Text+bemvindo);
        }
    }
}
