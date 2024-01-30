#include <iostream>

/*
Funkcja
    - zbiór instrukcji realizujacy zadanie
    - podprogram

Budowa funkcji:
    * nag³ówek 
    * cia³o funkcji - instrukcje ograniczone nawiasami klamrowymi
Nag³ówek:
    typ_zwracanej_danej nazwa_funkcji(parametry)


*/

//napisz funkcje, która wyswietli na konsoli "Hello World!"
void task1()
{
    std::cout << "Hello World!\n";
}


//Napisz funckje uniwersalna ktora pozwala wyswietlic dowolny tekst
void task2(std::string textParam)
{
    std::cout << textParam << "\n";
}

//Napisz funkcje uniwersalna ktora wyswietli imie oraz informacje czy ktos
// jest pelnoletni czy nie
void task3(std::string name, int age)
{
    if (age >= 18)
        std::cout << name << "jest plenoletni\pelnoletnia\n";
    else
        std::cout << name << "jest niepelnoletni\niepelnoletnia\n";
}

int main()
{
    task1();
    task1();

    task2("witaj swiecie!!");
    task2("ala ma kota");
    std::string text = "uczyc sie programowania!!";
    task2(text);

    task3("jan", 35);
    task3("ala", 17);
}

