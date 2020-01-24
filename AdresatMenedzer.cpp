#include "AdresatMenedzer.h"

void AdresatMenedzer::wyswietlDaneAdresata()
{
    cout << endl << "Id:         " << adresat.pobierzId << endl;
    cout << "Imie:               " << adresat.pobierzImie << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu << endl;
    cout << "Email:              " << adresat.pobierzEmail << endl;
    cout << "Adres:              " << adresat.pobierzAdres << endl;
}

void AdresatMenedzer::wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}
