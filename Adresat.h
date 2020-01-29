#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int id;
    int idUzytkownika;
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;

public:
    Adresat (int=0, int idUzykownika=0, string imie="", string nazwisko="", string numerTelefonu="", string email="", string adres="")
    {
     this->id = id;
     this->idUzytkownika = idUzytkownika;
     this->imie = imie;
     this->nazwisko = nazwisko;
     this->numerTelefonu = numerTelefonu;
     this->email = email;
     this->adres = adres;
    }

    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail (string nowyEmial);
    void ustawAdres (string nowyAdres);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
};

#endif