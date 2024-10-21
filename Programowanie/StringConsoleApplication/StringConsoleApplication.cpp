// StringConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string text;

    text = "Hello";

    std::cout << "Nasz tekst na poczotku:" << text << "\n";
    std::cout << "dlugosc lancucha to;" << text.length() << "\n";
    std::cout << "czy zmienna jest pusta " << text.empty() << "\n";
}


