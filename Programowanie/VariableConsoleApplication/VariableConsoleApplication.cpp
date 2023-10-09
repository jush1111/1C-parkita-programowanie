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
//Program obliczaj¹cy pole prostok¹ta
void task3()
{
	int first_side, second_side;
	std::cout << "podaj pierwszy bok\n";
	std::cin >> first_side;
	std::cout << "podaj drugi bok\n";
	int secondnumber;
	std::cin >> second_side;
	int area;
	area = first_side * second_side;
	std::cout << "pole wynosi:";
	std::cout << area;
}
//Program obliczaj¹cy pole sto¿ka 
void task4()
{
	double high, r, V;

	std::cout << "Podaj wysokoœæ sto¿ka: ";
	std::cin >> high;
	std::cout << "Podaj promieñ ko³a w sto¿ku: ";
	std::cin >> r;
	V = 1 / 3.0 * 3.14 * (r * r) * high;
	std::cout << "Objêtoœæ sto¿ka wynosi: " << V << " cm3";
}
//Program obliczaj¹cy pole ko³a
void task5()
{
	double area, promien;
	std::cout << "Podaj promieñ ko³a: ";
	std::cin >> promien;
	area = 3.14 * (promien * promien);
	std::cout << "Pole ko³a wynosi: " << area << " cm2";
}






int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	task3(); 
	//task4();
	//task5();
}

/*
Algotytm - skoñczony zbiór instrukcji,
który rozwi¹zuje zadany problem.


/*
algorytm- skoñczony zbiór instrukcji, który rozwi¹zuje zadany problem. Okreœla te¿ kolejnoœæ wykonywanych instrukcji.
Zapis algorytmu:
* rysunki
* opis s³owny
* w punktach
* schemat blokowy
* kod Ÿród³owy danego jêzyka programowania
* pseudokod

Zmienna- pewien obszar w pamieci operacyjnej, w której mo¿na w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

typ zmiennej- wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów
int - liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - to samo co int
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru pamiêci, identyfikator
Warunki niezbêdne:
* dozwolone znaki:
	-alfabet angielski aA-zZ
	-cyfry arabskie 0-9
	-podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* je¿eli nazwa sk³ada siê z wielu wyrazów w miejscu spacij podkreœlenie lub zaczynaj¹c od durgiego s³owa piszemy je
z du¿ej litery
* piszemy po angielsku
*/