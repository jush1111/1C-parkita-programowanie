

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

}


int main()
{
	task1();
}
