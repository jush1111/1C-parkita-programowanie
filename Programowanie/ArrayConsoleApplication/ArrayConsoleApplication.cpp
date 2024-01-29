
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

//Napisz program obliczający średnią arytmetyczną elementów w tablicy liczb całkowitych.
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

//Napisz program, który uzupełni tablicę liczbami losowymi a następnie znajdzie minimum oraz maksimum.
void task3()
{
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

	int max = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];

	}
	std::cout << "max to:" << max << "\n";

	int min = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];

	}
	std::cout << "min to:" << min  << "\n";
}


//Napisz program, który wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu. Metoda sito Eratostenesa.
void task4()
{
	const long long UPPER_RANGE = 1000000;

	//wersja 1

	for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
	{
		bool isPrime = true;
		for (long long i = 2; i <= numberToCheck / 2; i++)
		{
			if (numberToCheck % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			std::cout << numberToCheck << ", ";
	}
	std::cout << "\n";

	//wersja 2
	bool sieveOfEratosthenes[UPPER_RANGE + 1];

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		sieveOfEratosthenes[i] = true;
	}

	for (unsigned long long number = 2; number <= UPPER_RANGE; number++)
	{
		if (sieveOfEratosthenes[number] /*== true*/)
		{
			for (long long numberToCrossOut = number + number; numberToCrossOut <= UPPER_RANGE; numberToCrossOut = numberToCrossOut + number)
				sieveOfEratosthenes[numberToCrossOut] = false;
		}
	}

	for (unsigned long long i = 2; i <= UPPER_RANGE; i++)
	{
		if (sieveOfEratosthenes[i] /*== true*/)
			std::cout << i << ", ";
	}
	std::cout << "\n";
}


//Napisz program, który wczyta numer dnia tygodnia a nastepnie wyswietli nazee tego dnia lub komunikat bledu
void task5()
{
	int numberOfWeek;
	std::cout << "podaj numer dnia tygodnia\n";
	std::cin >> numberOfWeek;

	std::string dayNames[] = { "Poniedziałek", "Wtorek", "środa", "czwartek", "piatek", "sobota", "niedziela" };
	//dayNames[0] = "poniedzialek";
	//dayNames[1] ="wtorek';
	//kontynukacja dni

	if (numberOfWeek >= 0 && numberOfWeek <= 6)
		std::cout << "ten dzien to" << dayNames[numberOfWeek] << "\n";
	else
		std::cout << "niepoprawany dzien\n";
}

//napisz program ktory posortuje podane elementy
void task6()
{
	const unsigned short LOWER_RANGE = 1;
	const unsigned short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(0));
	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//--------------------------------------------------------------------------------------------------------------

	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (numbers[j] < numbers[minIndex])
				minIndex = j;
		}
		int tmp = numbers[minIndex];
		numbers[minIndex] = numbers[i];
		numbers[i] = tmp;
	}

	std::cout << "posortowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}

//napisz program ktory posortuje tablcie liczb sposobem przez wstawianie
void task7()
{
	const unsigned short LOWER_RANGE = 1;
	const unsigned short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(0));
	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//--------------------------------------------------------------------------------------------------------------

	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		int pom = numbers[i];

		int j;
		for (j = i - 1; j >= 0 && numbers[j] > pom; j--)
		{
			numbers[j + 1] = numbers[j];
		}
		numbers[j + 1] = pom;
	}

	std::cout << "posortowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
}


//napisz program ktory posortuje tablcie liczb sposobem babelkowym
void task8()
{
	const unsigned short LOWER_RANGE = 1;
	const unsigned short UPPER_RANGE = 70;

	const unsigned short ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//--------------------------------------------------------------------------------------------------------------

	for(int i = 0; i < ARRAY_SIZE - 1; i++)
		for (int j = 0; i < ARRAY_SIZE - 1; i++)
			if (numbers[j] > numbers[j + 1])
			{
				int tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = tmp;
			}
	
	std::cout << "posortowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << numbers[i] << ",";
	}
	std::cout << "\n";
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
