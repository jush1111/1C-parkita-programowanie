#include <iostream>


//napisz program który pobierze znak od uzytkownika i wyswietli go 
void task1()
{
	char characterFromUser;
	std::cout << "podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "poda³eœ znak:" << characterFromUser << "\n";
}

//napisz program ktory wczyta znak  z klawiatury i sprawdzi czy jest to mala litera alfabetu
void task2()
{
	char characterFromUser;
	std::cout << "podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "jest to mala litera alfabetu\n";
	else
		std::cout << "nie jest to mala litera alfabetu\n";

	/*
	char x = 'a';
	std::cout << x;
	x = 'g' + 1
	std::cout << x;
	x = 100;
	std::cout << x;
	*/
}




int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

/*
typy znakowe:
*char - 1bajt calkowitoliczbowa ze znakiem <- 128; 127>
*	`
*/
