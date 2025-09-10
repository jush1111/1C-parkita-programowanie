using System.ComponentModel;

Console.Write("hello, world:\n");
Console.WriteLine("Hello, World!");

string name = "jan";
string surname = "kowalski";
Console.WriteLine("witaj " + name + "  " + surname + " tutaj!!!!");
Console.WriteLine("Witaj {0} {1} tutaj!!!!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!!!!");

Console.WriteLine("predkosc to km\\h");
Console.WriteLine(@"predkosc to km\h");

int firstNumber = 5;
int secondNumber = firstNumber;
secondNumber++;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga liczba to {secondNumber}");


//przekazywanie przez wartosc 


void ParametrTest_v1(int p)
{
    Console.WriteLine($"parametr w parametrtest_v1  {p}");
        p++;
    Console.WriteLine($"parametr w parametrtest_v1  {p}");
}

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"firstnumber po {firstNumber}");
```
