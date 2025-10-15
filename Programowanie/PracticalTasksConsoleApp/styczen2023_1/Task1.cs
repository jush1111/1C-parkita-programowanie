using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.styczen2023_1
{
    internal class Task1
    {
        public void task()
        {

            int NWD(int a, int b)
            {
                while (a != b)
                {
                    if (a > b)
                    {
                        a = a - b;
                    }
                    else b = b - a;
                }
                return a;
            } 
            Console.Write("Podaj a: ");
            int a = int.Parse(Console.ReadLine());

            Console.Write("Podaj b: ");
            int b = int.Parse(Console.ReadLine());

            if (a > 0 && b > 0)
            {
                Console.WriteLine(NWD(a,b));
            }
            else
            {
                Console.WriteLine("Bład, obie liczby musza byc dodatnie");
                return;
            }
          
               
            }
        }
    }
}

/*
nazwa funkcji: task
opis funkcji: funckja pobiera dwie liczby calkowite a i b  a nastepnie oblicza i wyswietla NWD
parametry: nie przyjmuje zadnych parametrow 
zwracamy typ i opis: void, funkcja nie zwraca wartosci, zamiast tego wyswietla NWD
autor: Filip 
 */

