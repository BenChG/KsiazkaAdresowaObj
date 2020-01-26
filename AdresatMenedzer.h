#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include "Adresat.h"
#include "PlikZAdresatami.h"
using namespace std;

class AdresatMenedzer
{
  const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
  Adresat adresat;
  vector <Adresat> adresaci;
  PlikZAdresatami plikZAdresatami;

  Adresat podajDaneNowegoAdresata();

public:
    AdresatMenedzer (string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami (nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
   // void dodajAdresata();
   void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
};

#endif
