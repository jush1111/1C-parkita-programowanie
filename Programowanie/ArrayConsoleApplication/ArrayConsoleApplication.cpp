
#include <iostream>

//Napisz program, który wczyta np. 5 liczb
//a nastêpnie wyœwietli je w odwrotnej kolejnoœæi.
void task1()
{
	const unsigned short ARRAY_SIZE = 5;
	int number[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Hive a number";
		std::cin >> number[i];
	}
	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		std::cout << number[i] << ", ";
	}
	std::cout << "\n";
}

void task2()
{
	//LOWER_RANGE; UPPER_RANGE > przy założeniu, że LOWER_RANGE <= UPPER_RANGE
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	const unsigned short ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];
	
	srand(time(0));
	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";

	int sum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		sum = sum + numbers[i];
	}

	double avg = sum * 1.0 / ARRAY_SIZE;
	std::cout << "srdnia wynosi: " << avg << "\n";
}


int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
	task2();
}
