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
    text.append("World!");
    //text = text + ", World1";
    //text +=", World!";
    std::cout << "Nasz tekst na: " << text << "\n";
    //"hello, wrold";
    std::string subText = text.substr(7, 5);
    std::cout << "skopiowany podtekst:  " << subText << "\n";

    text = "Ala ma kota";
    text.replace(0, 3, "Ola");
    std::cout << "Nasz tekst na:  " << text << "\n";

    //text = text.substr(0, 3) + " nie" + text.substr(3, text.length() - 3);
    text.insert(3, " nie");
    std::cout << "Nasz tekst na: " << text << "\n";
}


