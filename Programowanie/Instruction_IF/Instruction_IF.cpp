#include <iostream>

/*
Operatory warunkowe:
> -  wi�ksze
< - mniejsze 
>= - wi�ksze b�d� r�wne 
<= - mniejsze b�d� r�wne 
== - r�wne 
!= - r�ne 

*/


//napisz program, kt�ry wy�wietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "podaj liczbe:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "liczba jest ujemna\n";

	if (number == 0)
		std::cout << "liczba jest r�wna zero\n";

	std::cout << "kolejna instrukcja\n";
}

int main()
{
	task1();
}