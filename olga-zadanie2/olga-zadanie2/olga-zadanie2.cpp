#include <iostream>
/*ZADANIE 2*/
/*TEMAT: kontynuacja operacji arytmetycznych i zmiennych. Wykorzystanie funkcji warunkowej o wielu warunkach*/

int main()
{
	/*PRZYKŁAD 2*/
	/*przykładowe menu z wykorzystanie else if*/
	{
		int u_input = 0;

		std::cout << "#############################" << "\n";
		std::cout << "######## MENU GLOWNE ########" << "\n";
		std::cout << "#############################" << "\n";
		std::cout << "# 1. Opcja 1                #" << "\n";
		std::cout << "# 2. Opcja 2                #" << "\n";
		std::cout << "#############################" << "\n";
		std::cout << "\n";
		std::cout << "Podaj opcje z menu:";

		std::cin >> u_input;

		if (u_input == 1) //jeśli
		{
			std::cout << "Tresc opcji 1" << "\n";
		}
		else if (u_input == 2) //w przeciwnym wypadku, jeśli
		{
			std::cout << "Tresc opcji 2" << "\n";
		}
		else  //w przeciwnym wypadku
		{
			std::cout << "Wybrano nieistniejaca opcje!" << "\n";
		}

		std::cout << "#############################" << "\n";
		std::cout << "########## KONIEC ###########" << "\n";
		std::cout << "#############################" << "\n";
	}
	/*KONIEC PRZYKŁAD 2*/


	/*ZADANIE 2*/
	//Stwórz "kalkulator" pozwalający dodawać, mnożyć, odejmować i dzielić dwie liczby.
	//1. Wyświetl menu
	//2. Pobierz od uzytkownika opcje z menu
	//3. Pobierz dwie liczby
	//4. Wykonaj odpowiednie działanie
	//5. Wyświetl wynik
	//NOTATKA: liczby możesz też pobrać przed wyświetleniem menu. Zrób to tak, jak według Ciebie będzie lepszy User Experience ;)
	//NOTATKA 2: Tak, to jest rehash pierwszego programu jaki napisaliśmy, tylko że na sterydach XD
	{

	}
	/*KONIEC ZADANIE 2*/
}
