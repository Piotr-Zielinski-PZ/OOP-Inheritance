#include "Firma.h"
#include "Pracownicy.h"

Firma::Firma(const std::string & nazwa, double stawka){
    this->nazwa = nazwa;
    this->stawka_godzinowa = stawka;
}

void Firma::zatrudnij(const Pracownik &p) {
    pracownicy.push_back(p);
}

void Firma::zwolnij(const Pracownik &p) {
    pracownicy.erease(p);
}

void Firma::wyswietl_liste_plac() const {
    for(size_t i = 0; i<pracownicy.size(); i++)
    {
        std::cout<<pracownicy[i].get_imie()<<pracownicy[i].get_liczba_godzin() * stawka_godzinowa<<std::endl;
    }
}

double Firma::get_koszty_pracy() const {
    double count = 0;
    for(size_t i = 0; i<pracownicy.size(); i++)
    {
        count += pracownicy[i].get_liczba_godzin() * stawka_godzinowa;
    }
    return count;
}