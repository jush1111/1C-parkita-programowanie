#include <iostream>

//Napisz program, kt�ry obliczy odleg�o�� punktu 2D
//Od �rodka uk�adu wsp�rzednych
void task1()
{
	double x, y;
	std::cout << "Podaj x\n";
	std::cin >> x;

	std::cout << "Podaj y\n";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);
	std::cout << "Odleg�o�� tp " << distance << "\n";
}