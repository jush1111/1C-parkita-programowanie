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
//Program obliczaj�cy pole prostok�ta
void task3()
{
	int first_side, second_side;
	std::cout << "podaj pierwszy bok\n";
	std::cin >> first_side;
	std::cout << "podaj drugi bok\n";
	std::cin >> second_side;
	int area;
	area = first_side * second_side;
	std::cout << "pole wynosi:";
	std::cout << area;
}
//Program obliczaj�cy pole sto�ka 
void task4()
{
	double high, r, V;

	std::cout << "Podaj wysoko�� sto�ka: ";
	std::cin >> high;
	std::cout << "Podaj promie� ko�a w sto�ku: ";
	std::cin >> r;
	V = 1 / 3.0 * 3.14 * (r * r) * high;
	std::cout << "Obj�to�� sto�ka wynosi: " << V << " cm3";
}
//Program obliczaj�cy pole ko�a
void task5()
{
	double area, radius;
	std::cout << "Podaj promie� ko�a: ";
	std::cin >> radius;
	area = 3.14 * (radius * radius);
	std::cout << "Pole ko�a wynosi: " << area << " cm2";
}
//Program obliczaj�cy warto�� wyra�enia a^2 + b^2
void task6()
{
	int a, b;
	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> a; 
	std::cout << "podaj druga liczbe\n";
	std::cin >> b;

	int sum;
	sum = a*a + b*b;
	std::cout << "suma wynosi " << sum << "\n";
}
//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task7()
{
	int b, h, area;
	std::cout << "podaj pierwszy bok\n";
	std::cin >> b;
	std::cout << "podaj wysoksc\n";
	std::cin >> h;
	area = b * h / 2;
	std::cout << "pole tr�jk�ta to:";
	std::cout << area;
}
//Program obliczaj�cy obj�to�� kuli o promieniu r
void task8()
{
	double size, ray;
	std::cout << "Podaj promie�: ";
	std::cin >> ray;
	size = 4 / 3.0 * (3.14 * (ray * ray * ray));
	std::cout << "Wynik to: " << size << " cm3";
}
//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h*/
void task9()
{
	double firstBase, secondBase, high, radius;
	std::cout << "Podaj pierwsz� podstawe: ";
	std::cin >> firstBase;
	std::cout << "Podaj drug� podstawe: ";
	std::cin >> secondBase;
	std::cout << "Podaj wysoko��: ";
	std::cin >> high;
	radius = ((firstBase + secondBase) * high) / 2.0;
	std::cout << "Pole trapezu wynosi: " << radius << " cm2";

}
//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.*/
void task10()
{
	double firstRate, secondRate, thirdRate, firstWeight, secondWeight, thirdWeight, weightedAverage;
	std::cout << "Podaj pierwsz� ocen�: ";
	std::cin >> firstRate;
	std::cout << "Podaj jej wag�: ";
	std::cin >> firstWeight;
	std::cout << "Podaj drug� ocen�: ";
	std::cin >> secondRate;
	std::cout << "Podaj jej wag�: ";
	std::cin >> secondWeight;
	std::cout << "Podaj trzeci� ocen�: ";
	std::cin >> thirdRate;
	std::cout << "Podaj jej wag�: ";
	std::cin >> thirdWeight;
	weightedAverage = ((firstRate * firstWeight) + (secondRate * secondWeight) + (thirdRate * thirdWeight)) / (firstWeight + secondWeight + thirdWeight);
	std::cout << "Wynik to: " << weightedAverage;
}
//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik
void task11()
{
	int lengthM, lengthCM, lengthMM;
	std::cout << "Podaj d�ugo�� w metrach: ";
	std::cin >> lengthM;
	lengthCM = lengthM * 100;
	lengthMM = lengthCM * 10;
	std::cout << "D�ugo�� w centymetrach wynosi: " << lengthCM << " cm, a w milimetrach wynosi: " << lengthMM << " mm.";
}
//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
void task12()
{
	double userMoney, resultMoney;
	std::cout << "Podaj kwot� w z�ot�wkach: ";
	std::cin >> userMoney;
	resultMoney = userMoney * 0.22;
	std::cout << "Twoja kwota w dolarach wynosi: " << resultMoney;
}







int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3(); 
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
}

/*
Algotytm - sko�czony zbi�r instrukcji,
kt�ry rozwi�zuje zadany problem.


/*
algorytm- sko�czony zbi�r instrukcji, kt�ry rozwi�zuje zadany problem. Okre�la te� kolejno�� wykonywanych instrukcji.
Zapis algorytmu:
* rysunki
* opis s�owny
* w punktach
* schemat blokowy
* kod �r�d�owy danego j�zyka programowania
* pseudokod

Zmienna- pewien obszar w pamieci operacyjnej, w kt�rej mo�na w danej chwili przechowa� tylko jedn� dan�.

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

typ zmiennej- wielko�� obszaru pami�ci, interpretacja ci�gu bit�w
int - liczba ca�kowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba ca�kowita ze znakiem <-32 768, 32 767>
long - to samo co int
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok�adno�� 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok�adno�� 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok�adno�� 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru pami�ci, identyfikator
Warunki niezb�dne:
* dozwolone znaki:
	-alfabet angielski aA-zZ
	-cyfry arabskie 0-9
	-podkre�lenie (pod�oga) _
* pierwszym znakiem nie mo�e by� cyfra
* unikalny w swoim zakresie widoczno�ci
* nie mo�e to by� s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w:
* nazwa zmiennej powinna oddawa� charakter przechowywanych danych
* je�eli nazwa sk�ada si� z wielu wyraz�w w miejscu spacij podkre�lenie lub zaczynaj�c od durgiego s�owa piszemy je
z du�ej litery
* piszemy po angielsku
*/