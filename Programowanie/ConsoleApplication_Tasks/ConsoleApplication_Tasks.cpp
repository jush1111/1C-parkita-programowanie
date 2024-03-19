#include <iostream>

/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, który bêdzie dzia³a³ jako prosty kalkulator
i bêdzie umo¿liwia³ u¿ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dwóch liczbach.
Instrukcje:
Poproœ u¿ytkownika o podanie dwóch liczb oraz wybór operacji (dodawanie, odejmowanie, mno¿enie lub dzielenie).
W zale¿noœci od wyboru u¿ytkownika, wykonaj odpowiedni¹ operacjê arytmetyczn¹.
Wyœwietl wynik operacji.
Przyk³adowe dzia³anie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno¿enie
4. Dzielenie


Wybierz operacjê (1/2/3/4): 3
Podaj pierwsz¹ liczbê: 5
Podaj drug¹ liczbê: 3
Wynik mno¿enia: 15
*/



void task1()
{
    int actionVariable, firstNumber, secondNumber, result;
    std::cout << "aby odejmowaæ wybierz 1 \n";
    std::cout << "aby dodawaæ wybierz 2 \n";
    std::cout << "aby mno¿yæ wybierz 3 \n";
    std::cout << "aby dzieliæ wybierz 4 \n";
    std::cin >> actionVariable;
    if (actionVariable == 0)
        return;
    std::cout << "podaj pierwsza liczbe \n";
    std::cin >> firstNumber;
    std::cout << "podaj drug¹ liczbe \n";
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

