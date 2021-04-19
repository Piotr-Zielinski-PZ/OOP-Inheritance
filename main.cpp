#include "Osoba.h"
#include "Firma.h"
#include "Pracownik.h"
int main()
{
    Osoba nowa1 = Osoba("Jan","Kowalski","123456");
    Osoba nowa2 = Osoba("Maria", "Nowak", "9876543");
    Firma firma1 = Firma("Firma1", 13);
    Pracownik nowy1 = Pracownik(nowa1,8);
    Pracownik nowy2 = Pracownik(nowa2,9);
    firma1.zatrudnij(nowy1);
    firma1.zatrudnij(nowy2);
    firma1.zwolnij(nowy1);
    firma1.wyswietl_liste_plac();
    firma1.get_koszty_pracy();

    return 0;
}