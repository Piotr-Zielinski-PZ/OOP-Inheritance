#include "Osoba.h"

Osoba::Osoba(const std::string & im, const std::string & na, const std::string & pe){
    imie = im;
    nazwisko = na;
    pesel = pe;
}

string Osoba::get_imie() const {
    return imie;
}

string Osoba::get_nazwisko() const {
    return nazwisko;
}

string Osoba::get_pesel() const {
    return pesel;
}