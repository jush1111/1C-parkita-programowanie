#include <iostream>

/*
Operatory warunkowe:
> -  wi�ksze
< - mniejsze 
>= - wi�ksze b�d� r�wne 
<= - mniejsze b�d� r�wne 
== - r�wne 
!= - r�ne 

Operatory logiczne:
&& - AND 
|| - OR 
! - NOT 

a	b	a&&b	a||b	!a
F	F	  F		  F		 T
F	T	  F		  T		 F
T	F	  F		  T		 F
T	T	  T		  T		 F

F - false
T - true 
*/


//napisz program, kt�ry wy�wietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "podaj liczbe:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "liczba jest ujemna\n";

	if (number == 0)
		std::cout << "liczba jest r�wna zero\n";

	std::cout << "kolejna instrukcja\n";
}
//Napisz program, kt�ry wy�wietli informacje czy liczba jest parzysta czy nieparzysta.
void task2()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	int rest = number % 2; 
/*
	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";

	if (rest != 0) // rest == 1
		std::cout << "liczba jest nieparzysta\n";
*/

	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "liczba jest nieparzysta\n";
} 

//napisz program, kt�ry wy�witli informacje czy liczba jest z zakresu <1 ; 10).
void task3()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1) //NUMBER > 0
	{
		if (number < 10) //NUMBER <= 9
			std::cout << "liczba jest w przedziale\n";
		else
			std::cout << "liczba z poza zakresu\n";
	}
	else
		std::cout << "liczba z poza zakresu\n";

	//wersja 2
	if (number >= 1) 
		if (number < 10)
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "liczba z poza zakres\n";
	else 
		std::cout << "liczba z poza zakresu\n";

	//wersja 3
	if (number < 1 || number >= 10)
		std::cout << "liczba z poza zakresu";
	else
		std::cout << "Liczba jest w przedziale\n";

	//wersja 4
	if (!(number >= 1 && number < 10))
			std::cout << "liczba z poza zakresu";
	else
			std::cout << "Liczba jest w przedziale\n";

	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";

}

void task4()
{
	int firstNumber, secondNumber;
	std::cout << "podaj liczbe:\n";
	std::cin >> firstNumber;
	std::cout << "podaj liczbe:\n";
	std::cin >> secondNumber; 

	if (secondNumber != 0)
	{
		int quoitent = firstNumber / secondNumber;
		std::cout << "wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "dzielenie przez zero!!!\n"; 
}
 

/*
*. Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
*/

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne.Wy�wietl odpowiedni komunikat.
void task5()
{
	int number1, number2;
	std::cout << "podaj pierwsza liczbe:\n";
	std::cin >> number1;
	std::cout << "podaj durga liczbe:\n";
	std::cin >> number2;

	if (number1 == number2)
		std::cout << "te liczby sa r�wne\n";
	else
		std::cout << "te liczby nie sa r�wne\n";
}
//Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
void task6()
{
	int age;
	std::cout << "podaj swoj wiek\n";
	std::cin >> age; 

	if (age >= 18)
		std::cout << "ta osoba jest pelnoletnia\n";
	else
		std::cout << "wiek to tylko liczba";
}
// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
void task7()
{
	int numberFromUser, absoluteNumber;
	std::cout << "podaj liczbe calkowita\n";
	std::cin >> numberFromUser;

	if (numberFromUser > 0)
		absoluteNumber = numberFromUser;
	else
		absoluteNumber = numberFromUser * -1;
	std::cout << absoluteNumber;
} 
//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task8()
{
	int numberDay;
	std::cout << "podaj liczbe do 1 do 7\n";
	std::cin >> numberDay;

	if (numberDay == 1);
		std::cout << "to jest poniedzialek\n";
	if (numberDay == 2);
		std::cout << "to jest wtorek\n";
	if (numberDay == 3);
		std::cout << "to jest sroda\n";
	if (numberDay == 4);
		std::cout << "to jest czwartek\n";
	if (numberDay == 5);
		std::cout << "to jest piatek\n";
	if (numberDay == 6);
		std::cout << "to jest sobota\n";
	if (numberDay == 7);
		std::cout << "to jest niedziela\n";
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
	task8();
}