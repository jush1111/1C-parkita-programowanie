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

    std::cout << "zawartosc zerowej kom�rki " << tab[0] << "\n";
    std::cout << "zawartosc pierwszej kom�rki " << tab[1] << "\n";
    std::cout << "adres zerowej kom�rki " << &tab[0] << "\n";
    std::cout << "adres pierwszej kom�rki " << &tab[1] << "\n";
    std::cout << "adres tablicy " << tab << "\n";
    std::cout << "zawartosc zerowej kom�rki " << *(tab + 0) << "\n";
    std::cout << "zawartosc pierwszej kom�rki " << *(tab + 1 ) << "\n";
}





int main()
{
    task1();
}


