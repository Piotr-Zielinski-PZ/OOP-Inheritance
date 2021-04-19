#ifndef SAPER_OSOBA_H
#define SAPER_OSOBA_H
#include <iostream>


class Osoba {
    std::string imie;
    std::string nazwisko;
    std::string pesel;
public:
    Osoba(const std::string & im, const std::string & na, const std::string & pe);
    std::string get_imie() const;
    std::string get_nazwisko() const;
    std::string get_pesel() const;
};
#endif //SAPER_OSOBA_H
