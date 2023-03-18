using System;
namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            // Console.Title = "Aplikasi Kalkulator";
            Console.WriteLine("Pilih Menu Kalkulator");
            Console.WriteLine(" ");
            Console.WriteLine("1. Penambahan");
            Console.WriteLine("2. Pengurangan");
            Console.WriteLine("3. Perkalian");
            Console.WriteLine("4. Pembagian");
            Console.WriteLine(" ");
            Console.WriteLine("Input nomor menu (1-4) : ");
            int MenuKalkulator = Convert.ToInt32(Console.ReadLine());
            if(MenuKalkulator == 1)
            {
                MenuKalkulatorPenambahan();
            }
            else if(MenuKalkulator == 2)
            {
                MenuKalkulatorPengurangan();
            }
            else if(MenuKalkulator == 3)
            {
                MenuKalkulatorPerkalian();
            }
            else if(MenuKalkulator == 4)
            {
                MenuKalkulatorPembagian();
            }
            else
            {
                Console.WriteLine("Maaf, Menu yang anda pilih tidak tersedia");
                Console.WriteLine("");
                Console.WriteLine("Tekan sembarang tombol untuk keluar");
                Console.ReadKey();
            }
            
        }
        static void MenuKalkulatorPenambahan()
        {
          Console.WriteLine("Inputkan nilai a = ");
          int a = int.Parse(Console.ReadLine());
          Console.WriteLine("Inputkan nilai b = ");
          int b = int.Parse(Console.ReadLine());
          Console.WriteLine("Hasil Penambahan " + a + " + " + b + " = " + Penambahan(a, b));
                          Console.WriteLine("Tekan sembarang tombol untuk keluar");
                Console.ReadKey();
        }
        static int Penambahan(int a, int b)
        {
            return a + b;
        }
        static void MenuKalkulatorPengurangan()
        {
          Console.WriteLine("Inputkan nilai a = ");
          int a = int.Parse(Console.ReadLine());
          Console.WriteLine("Inputkan nilai b = ");
          int b = int.Parse(Console.ReadLine());
          Console.WriteLine("Hasil Pengurangan " + a + " - " + b + " = " + Pengurangan (a, b));
                          Console.WriteLine("Tekan sembarang tombol untuk keluar");
                Console.ReadKey();
        }
        static int Pengurangan(int a, int b)
        {
            return a - b;
        }
        static void MenuKalkulatorPerkalian()
        {
          Console.WriteLine("Inputkan nilai a = ");
          int a = int.Parse(Console.ReadLine());
          Console.WriteLine("Inputkan nilai b = ");
          int b = int.Parse(Console.ReadLine());
          Console.WriteLine("Hasil Perkalian " + a + " * " + b + " = " + Perkalian(a, b));
                          Console.WriteLine("Tekan sembarang tombol untuk keluar");
                Console.ReadKey();
        }
        static int Perkalian(int a, int b)
        {
            return a * b;
        }
        static void MenuKalkulatorPembagian()
        {
          Console.WriteLine("Inputkan nilai a = ");
          int a = int.Parse(Console.ReadLine());
          Console.WriteLine("Inputkan nilai b = ");
          int b = int.Parse(Console.ReadLine());
          Console.WriteLine("Hasil Pembagian " + a + " / " + b + " = " + Pembagian(a, b));
                          Console.WriteLine("Tekan sembarang tombol untuk keluar");
                Console.ReadKey();
        }
        static int Pembagian(int a, int b)
        {
            return a / b;
        }
    }
}
