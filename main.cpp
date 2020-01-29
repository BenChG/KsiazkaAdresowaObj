#include <iostream>
#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt","Adresaci.txt");
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

        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            //case '1':
            //    idOstatniegoAdresata = dodajAdresata(adresaci, idZalogowanegoUzytkownika, idOstatniegoAdresata);
            //    break;
            /*case '2':
                wyszukajAdresatowPoImieniu(adresaci);
                break;
            case '3':
                wyszukajAdresatowPoNazwisku(adresaci);
                break;*/
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            /*case '5':
                idUsunietegoAdresata = usunAdresata(adresaci);
                idOstatniegoAdresata = podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(idUsunietegoAdresata, idOstatniegoAdresata);
                break;
            case '6':
                edytujAdresata(adresaci);
                break;
            case '7':
                zmianaHaslaZalogowanegoUzytkownika(uzytkownicy, idZalogowanegoUzytkownika);
                break;
                */
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                ksiazkaAdresowa.wyczyscWektorAdresaci();
                break;
            }
        }
    }
    return 0;
}

//ksiazkaAdresowa.wczytajUzytkownikowZPliku();
//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//ksiazkaAdresowa.rejestracjaUzytkownika();
// ksiazkaAdresowa.rejestracjaUzytkownika();
//ksiazkaAdresowa.logowanieUzytkownika();
//ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
//ksiazkaAdresowa.idZalogowanegoUzytkownika = 0;
