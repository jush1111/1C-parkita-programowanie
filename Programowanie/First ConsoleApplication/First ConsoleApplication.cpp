#include <iostream>
/*
*. Program obliczaj¹cy pole prostok¹ta.
*. Program obliczaj¹cy objêtoœæ sto¿ka.
*. Program obliczaj¹cy pole ko³a.
*. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
*. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
*. Program obliczaj¹cy objêtoœæ kuli o promieniu r
*. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
*. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
*. Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
*/


//Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
void task1()
{

    int numberFromUser;
    std::cout << "Podaj liczbe\n";
    std::cin >> numberFromUser;

    std::cout << "Podales " << numberFromUser << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task2()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz¹ liczbê\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug¹ liczbê\n";
    std::cin >> secondNumber;

    int average;
    average = (firstNumber + secondNumber) / 2;

    std::cout << "Œrednia to: " << average << "\n";
}



int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
}

/*
Algotytm - skoñczony zbiór instrukcji,
który rozwi¹zuje zadany problem.