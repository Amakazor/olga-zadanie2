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




	

	int main()
	{

		int liczba_jeden = 0;
		int liczba_dwa = 0;
		int u_input = 0;
		int suma = 0;


		std::cout << "Podaj pierwsza liczbe" << "\n\n";

		std::cin >> liczba_jeden;

		std::cout << "\n";

		std::cout << "#1. Dodawanie                   #" << "\n\n";
		std::cout << "#2. Odejmowanie                 #" << "\n\n";
		std::cout << "#3. Mnozenie                    #" << "\n\n";
		std::cout << "#4. Dzielenie                   #" << "\n\n";
		std::cout << "Podaj numer opcji" << "\n\n";

		std::cin >> u_input;

		std::cout << "\n";

		std::cout << "Podaj druga liczbe" << "\n\n";

		std::cin >> liczba_dwa;

		std::cout << "\n";

		if (u_input == 1)
		{
			suma = liczba_jeden + liczba_dwa;
			std::cout << "Twoj wynik wynosi: " << suma;

		}

		else if (u_input == 2)
		{
			suma = liczba_jeden - liczba_dwa;
			std::cout << "Twoj wynik wynosi: " << suma;
		}

		else if (u_input == 3)
		{
			suma = liczba_jeden * liczba_dwa;
			std::cout << "Twoj wynik wynosi: " << suma;
		}

		else (u_input == 4)
		{
			if (liczba_dwa != 0)
			{
				suma = liczba_jeden / liczba_dwa;
				std::cout << "Twoj wynik to: " << suma;
			}

			else (liczba_dwa == 0);
			{
				std::cout << "\n";
				std::cout << "Nie mozna dzielic przez 0, wybierz inną liczbe" << "\n";
				std::cin >> liczba_dwa;
				std::cout << "\n";
				suma = liczba_jeden / liczba_dwa;
				std::cout << "Twoj wynik to: " << suma;
			}
		}

		std::cout << "\n";

		std::cout << "Dziekuje";

	}