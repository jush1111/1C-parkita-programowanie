#include <iostream>
#include <fstream>

using namespace std;


int reverseNumbers(int n)
{
	int reversed = 0;
	while (n > 0) {
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	return  reversed;
} 

int main()
{
	ifstream in("liczby.txt");
	
	if (!in.is_open())
	{
		cerr << "nie udalo sie otworzyc pliku.txt" << "/n";
		return 1;
	}

	int number;
	int evenCounters = 0;
	int oddCounters = 0;

	while (in >> number) 
	{
		int reversed = reverseNumbers(number);

		cout << number << " => " << reversed << "/n";

		if (reversed % 2 == 0)
		{
			evenCounters++;
		}
		else {
			oddCounters++;
		}
	}


}

