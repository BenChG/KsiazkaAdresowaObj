#include <iostream>
#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
 KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");
//ksiazkaAdresowa.wczytajUzytkownikowZPliku();

char wybor;
    while (true)
    {
        cout << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }

        //ksiazkaAdresowa.wczytajUzytkownikowZPliku();
        //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
        //ksiazkaAdresowa.rejestracjaUzytkownika();
        // ksiazkaAdresowa.rejestracjaUzytkownika();
        //ksiazkaAdresowa.logowanieUzytkownika();
        //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
        //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
        //ksiazkaAdresowa.idZalogowanegoUzytkownika = 0;

        return 0;
    }
}
