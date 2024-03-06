#include <iostream>


void task1()
{
    int firstNumber = 48;
    int secondNumber = 697;
    int tab[2] = { 15, 87 };

    std::cout << "wartosc pierwszej zmiennej " << firstNumber << "\n";
    std::cout << "adres pierwszej zmiennej " << &firstNumber << "\n";
    std::cout << "wartosc drugiej zmiennej " << secondNumber << "\n";
    std::cout << "adres drugiej zmiennej " << &secondNumber << "\n";
    *(&secondNumber) = 741;
    std::cout << "wartosc drugiej zmiennej " << secondNumber << "\n";

    std::cout << "zawartosc zerowej komórki " << tab[0] << "\n";
    std::cout << "zawartosc pierwszej komórki " << tab[1] << "\n";
    std::cout << "adres zerowej komórki " << &tab[0] << "\n";
    std::cout << "adres pierwszej komórki " << &tab[1] << "\n";
    std::cout << "adres tablicy " << tab << "\n";
    std::cout << "zawartosc zerowej komórki " << *(tab + 0) << "\n";
    std::cout << "zawartosc pierwszej komórki " << *(tab + 1 ) << "\n";
}





int main()
{
    task1();
}


