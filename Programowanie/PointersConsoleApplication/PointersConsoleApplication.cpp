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

void task2()
{
    int firstNumber = 48;
    int secondNumber = 697;

    int* ptr = &firstNumber;

    std::cout << "Adres pierwszej zmiennej \t" << &firstNumber << "\n";
    std::cout << "Adres zmiennej \t\t\t" << ptr << "\n";
    std::cout << "Zawartoœæ pierszej zmiennej \t" << firstNumber << "\n";
    std::cout << "Zawartoœæ pierszej zmiennej \t" << *ptr << "\n";

    ptr = &secondNumber;
    std::cout << "Zawartoœæ drugiej zmiennej \t" << *ptr << "\n";

    ptr = &secondNumber;
    std::cout << "Zawartoœæ drugiej zmiennej \t" << *ptr << "\n";

    ptr = new int;

    std::cout << "Adres nowego obszaru \t\t\t" << ptr << "\n";
    *ptr = 5;
    //std::cin >> *ptr;
    std::cout << "Zawartoœæ w nowym obszarze \t" << *ptr << "\n";

    delete ptr;
    ptr = NULL;

    /*
    while (true)
        new long long;
    */
}
}



int main()
{
    task1();
    //task2();
}


