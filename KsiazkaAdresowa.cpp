#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
      adresatMenedzer = new AdresatMenedzer (NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
   uzytkownikMenedzer.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = metodyPomocnicze.wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
   // cout << "2. Wyszukaj po imieniu" << endl;
   // cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "2. Wyswietl adresatow" << endl;
   // cout << "5. Usun adresata" << endl;
   // cout << "6. Edytuj adresata" << endl;
    //cout << "---------------------------" << endl;
    cout << "3. Zmien haslo" << endl;
    cout << "4. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = metodyPomocnicze.wczytajZnak();

    return wybor;
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::wyczyscWektorAdresaci()
{
    adresatMenedzer->wyczyscWektorAdresaci();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
          adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout << "Aby doda� adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}
