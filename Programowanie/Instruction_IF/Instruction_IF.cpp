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

	if (numberDay == 1)
		std::cout << "to jest poniedzialek\n";
	if (numberDay == 2)
		std::cout << "to jest wtorek\n";
	if (numberDay == 3)
		std::cout << "to jest sroda\n";
	if (numberDay == 4)
		std::cout << "to jest czwartek\n";
	if (numberDay == 5)
		std::cout << "to jest piatek\n";
	if (numberDay == 6)
		std::cout << "to jest sobota\n";
	if (numberDay == 7)
		std::cout << "to jest niedziela\n";

}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
void task9()
{
	int numberOne, numberTwo;
	std::cout << "Podaj pierwsza liczbe ca�kowita\n";
	std::cin >> numberOne;
	std::cout << "podaj druga liczbe calkowita\n";
	std::cin >> numberTwo;

	if (numberOne > numberTwo)
		std::cout << numberOne;
	else
		std::cout << numberTwo;
}

// Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny.Wy�wietl odpowiedni komunikat.
void task10()
{
	int numberYear;
	std::cout << "podaj rok\n";
	std::cin >> numberYear;

	if (numberYear % 4 == 0 && numberYear % 100 != 0 || numberYear % 400 == 0)
		std::cout << "jest to rok przestepny\n";
	else
		std::cout << "to nie jest rok przestepny\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
void task11()
{
	int number;
	std::cout << "podaj liczbe calkowita\n";
	std::cin >> number;

	if (number % 3 == 0)
		if (number % 5 == 0)
			std::cout << "liczba jest podzielna przez 3 i 5\n";
		else
			std::cout << "liczba nie dzieli si� na 5\n";
	else
		std::cout << "liczba nie dzieli si� na 3\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach). Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
void task12()
{
	float bodyWeight, height, BMI;
	std::cout << "podaj swoja waga w kg\n";
	std::cin >> bodyWeight;
	std::cout << "podaj swoj wzrost w metrach\n";
	std::cin >> height;
	BMI = bodyWeight / (height * height);

	if (BMI < 16)
		std::cout << "jestes wyglodzony\n";
	if (BMI < 17 && BMI >= 16)
		std::cout << "jestes wychudzony\n";
	if (BMI < 18.5 && BMI >= 17)
		std::cout << "masz niedowage\n";
	if (BMI < 25 && BMI >= 18.5)
		std::cout << "twoja waga jest prawidlowa\n";
	if (BMI < 30 && BMI >= 25)
		std::cout << "masz nadwage\n";
	if (BMI < 35 && BMI >= 30)
		std::cout << "masz otylosc I stopnia\n";
	if (BMI < 40 && BMI >= 35)
		std::cout << "masz otylosc II stopnia\n";
	if (BMI > 40)
		std::cout << "masz skrajna otylosc\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
void task13()
{
	int firstSide, secondSide, thirdSide;
	std::cout << "podaj pierwsza dlugosc\n";
	std::cin >> firstSide;
	std::cout << "podaj druga dlugosc\n";
	std::cin >> secondSide;
	std::cout << "podaj trzecia dlugosc\n";
	std::cin >> thirdSide;

	if (firstSide == 0 || secondSide == 0 || thirdSide == 0)
		std::cout << "bok jest rowny zero\n";
	else
		if (firstSide + secondSide > thirdSide && secondSide + thirdSide > firstSide && firstSide + thirdSide > secondSide)
			std::cout << "da sie zbudowac trojkat\n";
		else
			std::cout << "nie da sie zrbudowac trojkata\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
void task14()
{
	int firstNumber;
	std::cout << "podaj dodatnia liczba\n";
	std::cin >> firstNumber;

	if (firstNumber < 0)
		std::cout << "nie da sie obbliczyc pierwiastak z loiczby ujemnej\n";
	else
	{
		float result = sqrt(firstNumber);
		std::cout << result; 
	}
}

// Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
void task15()
{
	int day, month, year;
	std::cout << "podaj dzien\n";
	std::cin >> day;
	std::cout << "podaj miesiac\n";
	std::cin >> month;
	std::cout << "podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31

		
		

	{
		std::cout << "data" << day << "." << month << "." << year << " jest poprawna\n";
	}
	else
	{
		std::cout << "data nie jest poprawna\n";
	}
		
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
	//task13();
	task14();
	//task15();
}