#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;


class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;


public:
    UzytkownikMenedzer (string nazwaPlikuZUzytkownikami, int IDZALOGOWANEGOUZYTKOWNIKA=0) : plikZUzytkownikami (nazwaPlikuZUzytkownikami),
    idZalogowanegoUzytkownika(IDZALOGOWANEGOUZYTKOWNIKA){
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
        };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    string wczytajLinie();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    char wczytajZnak();
    int pobierzIdZalogowanegoUzytkownika();


};
#endif
