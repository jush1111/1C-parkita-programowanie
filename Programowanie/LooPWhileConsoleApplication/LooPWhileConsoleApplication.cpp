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
}



	int main()
	{
		//task1();
		task2();
		//task3();
	}