#include <iostream>

//Napisz program, który obliczy odleg³oœæ punktu 2D
//Od œrodka uk³adu wspó³rzednych
void task1()
{
	double x, y;
	std::cout << "Podaj x\n";
	std::cin >> x;

	std::cout << "Podaj y\n";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);
	std::cout << "Odleg³oœæ tp " << distance << "\n";
}