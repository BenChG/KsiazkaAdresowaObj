#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idZalogowanegoUzytkownika;
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata (string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami (string daneAdresataOddzielonePionowymiKreskami);
    //bool czyPlikJestPusty();
    int pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {};
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    //void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //vector <Adresat> AdresatowZPliku();
    //vector <Adresat> zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};

#endif
