#include <iostream>
/*
*. Program obliczaj�cy pole prostok�ta.
*. Program obliczaj�cy obj�to�� sto�ka.
*. Program obliczaj�cy pole ko�a.
*. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
*. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
*. Program obliczaj�cy obj�to�� kuli o promieniu r
*. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
*. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.
*. Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
*/


//Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli
void task1()
{

    int numberFromUser;
    std::cout << "Podaj liczbe\n";
    std::cin >> numberFromUser;

    std::cout << "Podales " << numberFromUser << "\n";
}

//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
void task2()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz� liczb�\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug� liczb�\n";
    std::cin >> secondNumber;

    int average;
    average = (firstNumber + secondNumber) / 2;

    std::cout << "�rednia to: " << average << "\n";
}



int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
}

/*
Algotytm - sko�czony zbi�r instrukcji,
kt�ry rozwi�zuje zadany problem.