#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
  const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
  Adresat adresat;
  vector <Adresat> adresaci;
  PlikZAdresatami plikZAdresatami;
  MetodyPomocnicze metodyPomocnicze;

  Adresat podajDaneNowegoAdresata();

public:
    AdresatMenedzer (string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami (nazwaPlikuZAdresatami),ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
   void dodajAdresata();
   void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyczyscWektorAdresaci();

};

#endif
