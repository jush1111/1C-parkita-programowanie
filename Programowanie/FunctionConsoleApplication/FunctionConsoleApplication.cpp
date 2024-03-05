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


//Napisz program, ktory przetestuje zachowanie sie przekazywanych danych przez parametr
void task4(int number)
{
    std::cout << "zmienna number w funkcji task4 : " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task4 : " << number << "\n";
}

//napisz program ktory wykorzysta przekazywanie parametru przez referernecje
void task5(int& number)
{
    std::cout << "zmienna number w funkcji task5 : " << number << "\n";
    number--;
    std::cout << "zmienna number w funkcji task5 : " << number << "\n";
}

//Napisz funkcje ktora pobierze od uzytkownika liczbe
void task6_GetNumber(int& number)
{
    std::cout << "podaj liczbe: \n";
    std::cin >> number;
}

int sumOfNumbers(int fn, int sn)
{
    int s;
    s = fn + sn;
    return s;
}

//napisz funkcje ktora obliczy wartosc silni i ja zwroci
long long calculateFactorial(long long n)
{
    long long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

long long calculateFactorialV2(long long n)
{
    if (n <= 1)
        return 1;
    else
        return n * calculateFactorialV2(n - 1);
}

void task7()
{
    int number;
    std::cout << "podaj liczbe: \n";
    std::cin >> number;
    
    long long factorial = calculateFactorialV2(number);

    std::cout << "silnia jest rowna " << factorial << "\n";
}





int main()
{
    setlocale(LC_CTYPE, "polish");

    /*
    task1();
    task1();
    */

    /*
    task2("witaj swiecie!!");
    task2("ala ma kota");
    std::string text = "uczyc sie programowania!!";
    task2(text);
    */

    /*
    task3("jan", 35);
    task3("ala", 17);
    */

    /*
    int number = 5;
    std::cout << "zmienna number w funkcji main : " << number << "\n";
    task4(number);
    std::cout << "zmienna number w funkcji main : " << number << "\n";

    task4(9);
    const int NUMBER = 9;
    task4(NUMBER);
    */

    /*
    int number = 5;
    const int NUMBER = 9;
    std::cout << "zmienna number w funkcji main : " << number << "\n";
    task5(number);
    std::cout << "zmienna number w funkcji main : " << number << "\n";

    //task5(9); //B£AD - przez parametr mozna przekazac tylko zmienna
    //task5(NUMBER); //B£¥D - przez parametr mozna przekazac tylko zmienna
    */

    /*
    int numberFromUser = 5;
    task6_GetNumber(numberFromUser);
    std::cout << "Uzytkownik podal liczbe " << numberFromUser << "\n"; 
    */

    int numberFromUser = 16;

    double result = sqrt(numberFromUser);

    int firstNumber, secondNumber, sum;
    firstNumber = 9;
    secondNumber = 1;
    sum = sumOfNumbers(firstNumber, secondNumber);
    std::cout << sum << "\n";
}

