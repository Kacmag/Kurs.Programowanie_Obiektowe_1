#include "StatystykaTestu.hh"

void reset(StatystykaTestu &nowe)
{
    nowe.Accurate = 0;
    nowe.failure = 0;
    nowe.procent = 0;
}

void Accurate(StatystykaTestu &nowe)
{
    nowe.Accurate++;
}

void failure(StatystykaTestu &nowe)
{
    nowe.failure++;
}

void Wyswietl(StatystykaTestu StatTestu)
{
    double procenty = 100.0 * StatTestu.Accurate / (StatTestu.Accurate + StatTestu.failure);
    cout << "Ilosc dobrych odpowiedzi: " << StatTestu.Accurate << endl;
    cout << "Ilosc blednych odpowiedzi: " << StatTestu.failure << endl;
    cout << "Wynik procentowy poprawnych odpowiedzi: " << procenty <<"%"<< endl;
}
