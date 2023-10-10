#include <iostream>

/*
Operatory warunkowe:
> -  wiêksze
< - mniejsze 
>= - wiêksze b¹dŸ równe 
<= - mniejsze b¹dŸ równe 
== - równe 
!= - ró¿ne 

*/


//napisz program, który wyœwietli informacje czy liczba jest dodatnia czy nie.
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
		std::cout << "liczba jest równa zero\n";

	std::cout << "kolejna instrukcja\n";
}

int main()
{
	task1();
}