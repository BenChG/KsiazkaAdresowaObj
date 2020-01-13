#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

using namespace std;

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

class AdresatMenedzer
{
vector <Adresat> adresaci;


public:
int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika);

};




#endif
