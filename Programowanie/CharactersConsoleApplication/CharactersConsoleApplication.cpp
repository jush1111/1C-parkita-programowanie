#include <iostream>


//napisz program kt�ry pobierze znak od uzytkownika i wyswietli go 
void task1()
{
	char characterFromUser;
	std::cout << "podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "poda�e� znak:" << characterFromUser << "\n";
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

//Napisz program, ktory poprosi cie o twoje imie i cie przywita
void task3()
{
	std::string userName;
	std::cout << "podaj swoje imie\n";
	std::cin >> userName;

	std::cout << "witaj " << userName << "tutaj \n";
}

//Napisz program sprawdzaj�cy czy podane haslo jest poprawne
//(np jeslihaslo jest "abc123" program powinien wyswietlic "haslo poprawne"
//jesli jest inne powinien wyswietlic "haslo niepoprawne")
void task4()
{
	std::string password;
	std::cout << "podaj haslo\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "haslo poprawne\n";
	else
		std::cout << "haslo niepoprawne\n";
}

//napisz program ktory wczyta lancuch znakow i policzy ile jest malych liter 'a'
void task5()
{
	std::string textFromUser;
	std::cout << "podaj lancuhc nzsakow \n";
	std::cin >> textFromUser;

	int numberOfCharacters = 0;

	//std::cout << "pierwszy znak to " << textFromUser[0] << "\n";
	//textFromUser[1] = 'x';
	//std::cout << "ilosc znakow " <<  textFromUser.length() << "\n";

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			numberOfCharacters++;
	}
	std::cout << "malych liter 'a' jest " << numberOfCharacters << "\n";
}


/*
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

// Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
	std::string password;
		do
		{
			std::cout << "podaj haslo\n";
			std::cin >> password;
			
		}while (password != "abc123");
		std::cout << "gratulacje dobre chaslo";
}

//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{
	std::string charactersFromUser;
	std::cout << "podaj ciag znakow";
	std::cin >> charactersFromUser;

	int numberOfVowel = 0; //samog�oska
	int numberOfConsonant = 0; //sp�g�oska

	for (int i = 0; i < charactersFromUser.length(); i++)
	{
		if (charactersFromUser[i] == 'a'
			|| charactersFromUser[i] == '�'
			|| charactersFromUser[i] == 'e'
			|| charactersFromUser[i] == '�'
			|| charactersFromUser[i] == 'i'
			|| charactersFromUser[i] == 'o'
			|| charactersFromUser[i] == 'i'
			|| charactersFromUser[i] == 'y')
			numberOfVowel++;
		else if (charactersFromUser[i] >= 'a' && charactersFromUser[i] <= 'z')
			numberOfConsonant++;
	}
	std::cout << "w tym ciagu jest " << numberOfVowel << " samogloski                                                                                                                                                                                                                                                                                                      i " << numberOfConsonant << " spo�g�oski \n";
}

//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.
//Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
void task8()
{
	int numberFromUser;
	int tmpNumber;
	std::string tmpNumberInBin;
	std::string numberInBin;
	std::cout << "Podaje liczbe: \n";
	std::cin >> numberFromUser;
	tmpNumber = numberFromUser;

	do
	{
		tmpNumberInBin = tmpNumber / 2;
		numberInBin = numberInBin + tmpNumberInBin;
	} while (tmpNumber == 0);

	std::cout << numberInBin << "\n";

	
	
} 


// Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem 
// (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task9()
{
	std::string textFromUser;
	std::cout << "podaj tekst\n";
	std::cin >> textFromUser;

	//wersja 1
	std::string reverseText = "";
	
	for (int i = textFromUser.length() - 1; i >= 0; i--)
	{
		reverseText = reverseText + textFromUser[i];
	}

	/*
	for (int i = 0; i < textFromUser.length(); i++)
	{
		reverseText = reverseText[i] + textFromUser;
	}
	*/

	if (textFromUser == reverseText)
		std::cout << "ten tekst jest palindromem\n";
	else
		std::cout << "ten tekst nie jest palindromem\n";

	//wersja 2
	bool isPalindrome = true;

	for (int signFromBegining = 0, signFromEnd = textFromUser.length() - 1; signFromBegining < signFromEnd; signFromBegining++, signFromEnd--)
	{
		if (textFromUser[signFromBegining] != textFromUser[signFromEnd])
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome /*== true*/)
		std::cout << "Ten tekst jest palindromem\n";
	else
		std::cout << "Ten tekst nie jest palindromem\n";
}


 

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3()
	//task4()
	//task5();
	//task6();
	//task7();
	//task8();
	task9();
}

/*
typy znakowe:
*char - 1bajt calkowitoliczbowa ze znakiem <- 128; 127>
*	`
*/
