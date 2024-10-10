// ReadAndWriteToFilesConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

//zapis do pliku
void task1()
{
	std::string name;
	int age;

	std::cout << "podaj imie\n";
	std::cin >> name;

	std::cout << "podaj wiek\n";
	std::cin >> age;

	std::ofstream writeToFile;
	writeToFile.open("c;\\plik2C.txt", std::ios_base::app);

	if (writeToFile.is_open() == true)
		//praca na pliki
		writeToFile << name << "\n" << age << "\n";
		writeToFile.flush()
		//writeToFile << age;

		writeToFile.close();
}
int main()
{
	task1();
}

