

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

}


int main()
{
	//task1();
	//task2();
	task3();
}
