// LooPWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



//napisz program ktory policzy sume cyfr podanej przez uzytkownika 
void task1()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	while (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}

	std::cout << "Suma " << sum << "\n";
	//4125
}

//Napisz program, który policzy NWD dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe\n";
	std::cin >>  firstNumber;
	std::cout << "podaj druga liczba\n";
	std::cin >> secondNumber;

	int nwd;

	if (firstNumber < secondNumber)
		nwd = firstNumber;
	else
		nwd = secondNumber;

	nwd = (firstNumber < secondNumber) ? firstNumber : secondNumber;

	/*
	if (secondNumber % nwd != 0 || firstNumber % nwd != 0)
	{
		nwd--;
		if (secondNumber % nwd != 0 || firstNumber % nwd != 0)
		{
			nwd--;
			if (secondNumber % nwd != 0 || firstNumber % nwd != 0)
			{
				nwd--;
				//if...
			}
		}
	}
	*/

	while (secondNumber % nwd != 0 || firstNumber % nwd != 0)
	{
		nwd--;
	} 
	std::cout << "NWD = " << nwd << "\n";



	//wersja 2
	nwd = 1;
	int dividend = 2;
	int tmpFirstNumber = firstNumber, tmpSecondNumber = secondNumber;
	while (tmpFirstNumber >= dividend
		&& tmpSecondNumber >= dividend)
	{
		if (tmpFirstNumber % dividend == 0
			&& tmpSecondNumber % dividend == 0)
		{
			tmpFirstNumber = tmpFirstNumber / dividend;
			tmpSecondNumber /= dividend;
			nwd *= dividend;
		}
		else
			dividend++;
	}
	std::cout << "NWD = " << nwd << "\n";



	//wersja 3
	//NWD(a, b) = a				jesli b = 0
	//NWD(a, b) = NWD(b, a %  b) jesli b != 0 

	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
		
	}
	nwd = a;
	std::cout << "NWD = " << nwd << "\n";
		
}

//Sprawdzanie czy liczba jest palindromem
void task3()
{
	int number;
	std::cout << "podaj liczbe \n";
	std::cin >> number;
	
	//wersja 1

	//obliczam iloœæ cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczê 10 do potêgi numberOfDigit - 1
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}

	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	while (leftNumber > 10)
	
		,
	
}


	int main()
	{
		//task1();
		//task2();
		task3();
	}