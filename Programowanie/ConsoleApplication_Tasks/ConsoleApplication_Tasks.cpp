#include <iostream>

/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.
Instrukcje:
Popro� u�ytkownika o podanie dw�ch liczb oraz wyb�r operacji (dodawanie, odejmowanie, mno�enie lub dzielenie).
W zale�no�ci od wyboru u�ytkownika, wykonaj odpowiedni� operacj� arytmetyczn�.
Wy�wietl wynik operacji.
Przyk�adowe dzia�anie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno�enie
4. Dzielenie


Wybierz operacj� (1/2/3/4): 3
Podaj pierwsz� liczb�: 5
Podaj drug� liczb�: 3
Wynik mno�enia: 15
*/



void task1()
{
    int actionVariable, firstNumber, secondNumber, result;
    std::cout << "aby odejmowa� wybierz 1 \n";
    std::cout << "aby dodawa� wybierz 2 \n";
    std::cout << "aby mno�y� wybierz 3 \n";
    std::cout << "aby dzieli� wybierz 4 \n";
    std::cin >> actionVariable;
    if (actionVariable == 0)
        return;
    std::cout << "podaj pierwsza liczbe \n";
    std::cin >> firstNumber;
    std::cout << "podaj drug� liczbe \n";
    std::cin >> secondNumber;
    if (actionVariable == 1)
        result = firstNumber - secondNumber;
    if (actionVariable == 2)
        result = firstNumber + secondNumber;
    if (actionVariable == 3)
        result = firstNumber * secondNumber;
    if (actionVariable == 4)
        result = firstNumber / secondNumber;

    std::cout << result;


 

}

int main()
{
    task1();
}

