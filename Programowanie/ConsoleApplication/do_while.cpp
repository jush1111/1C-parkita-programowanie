

#include <iostream>

void task1()
{
	int numberFromUser;
	std::cout << "podaj liczbe dodatnia:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "podaj liczbe dodatnia:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "podaj liczbe dodatnia:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "podaj liczbe dodatnia:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "podaj liczbe dodatnia:\n";
					std::cin >> numberFromUser;
					//wklejamy calego IF'a
				}
			}
		}
	}

	std::cout << "liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "podaj liczbe dodatnia:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "liczba dodatnia pobrana od uzytkownika" << numberFromUser << "\n";

}

//napisz program ktory wylosuje liczbe a nastepnie uzytkownik bedzie musial ja zgadnac.
void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "podaj liczbe:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "podaj liczbe:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "podaj liczbe:\n";
			std::cin >> numberFromUser;
			//...
		}
	}*/

	do
	{
		std::cout << "podaj liczbe:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "za duza liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "za mala liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "gratulacje!!!!!!!!\n";
}

//napisz program wyswietlajacy liczby calkowite z przedzialu <1,x>
//gdzie x podaje uzytkownik
void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6\n";
	unsigned long long upperRange;
	std::cout << "podaj gorny zakres wiekszy badz rowny 1\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if ( upperRange > 1)
	{
		std::cout << "2, ";
		if (upperRange > 2)
		{
			std::cout << "3, ";
			if (upperRange > 3)
			{
				std::cout << "4, ";
				//....
			}
		}
	}
	*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber ++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}


//napisz program ktory policzy sume cyfr podanej przez uzytkownika 
void task5()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	rest = number % 10;
	sum = sum + rest;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
	//4125
}
//Poproœ u¿ytkownika o podawanie liczb, a¿ wporwadzi liczbe zero.
//oblicz sumeo raz srednia arytmetyczna wprowadzonych liczb
void task6()
{
	int number;
	int sum = 0;
	int numberOfNumbers = 0;
	/*
		std::cout << "podaj liczbe:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
		if (number != 0)
		{
			std::cout << "podaj liczbe:\n";
			std::cin >> number;
			sum = sum + number;
			numberOfNumbers++;
			if (number != 0)
			{
				std::cout << "podaj liczbe:\n";
				std::cin >> number;
				sum = sum + number;
				numberOfNumbers++;
				if (number != 0)
					//if....
			}
		}
	 */

	do
	{

		std::cout << "podaj liczbe:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
	} while (number != 0);
	std::cout << "podaj liczbe:\n" << sum << "\n";
	double avg = sum * 1.0 / numberOfNumbers;
	std::cout << "srednia" << avg << "\n";

}

//Napisz program, ktory poprosi uzytkownika o wporwadzenie dowolnej liczby calkowitej.
//Nastepnie program powinien obliczyc i wyswietlic liczbe cyfr
void task7()
{
	int number, rest;
	std::cout << "podaj liczbe calkowita:\n";
	std::cin >> number;	

	/*
	rest = number % 10;
	std::cout << rest << ", ";
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		std::cout << rest << ", ";
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			std::cout << rest << ", ";
			number = number / 10;
			//if ...
		}
	}
	*/

	do
	{
		rest = number % 10;
		std::cout << rest << ",";
		number = number / 10;
	} while (number != 0);
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
}
