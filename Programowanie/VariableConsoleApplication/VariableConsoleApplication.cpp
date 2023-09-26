
#include <iostream>

int main() 
{
    //napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli 

    std::cout << "give me a number\n";
    int numberFromUser;
    std::cin >> numberFromUser; 

    std::cout << "you gave " << numberFromUser << "\n"; 

}


/*
algorytm- skoñczony zbiór instrukcji, który rozwi¹zuje zadany problem. Okreœla te¿ kolejnoœæ wykonywanych instrukcji.
Zapis algorytmu:
* rysunki
* opis s³owny
* w punktach 
* schemat blokowy 
* kod Ÿród³owy danego jêzyka programowania 
* pseudokod 

Zmienna- pewien obszar w pamieci operacyjnej, w której mo¿na w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej; 

typ zmiennej- wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów 
int - liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - to samo co int 
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku 
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku 
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku 

Nazwa zmiennej - nazwa obszaru pamiêci, identyfikator 
Warunki niezbêdne:
* dozwolone znaki:
    -alfabet angielski aA-zZ
    -cyfry arabskie 0-9 
    -podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra 
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka 

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych 
* je¿eli nazwa sk³ada siê z wielu wyrazów w miejscu spacij podkreœlenie lub zaczynaj¹c od durgiego s³owa piszemy je
z du¿ej litery
* piszemy po angielsku 
*/