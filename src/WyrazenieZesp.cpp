#include <iostream>
#include "WyrazenieZesp.hh"

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

bool WczytajWyrazenieZesp(WyrazenieZesp &rWyrZ, std::istream &rStrmWe)
{
  char znak;

  Wczytaj(rWyrZ.Arg1, rStrmWe);
  rStrmWe >> znak;

  switch (znak)
  {
  case '+':
    rWyrZ.Op = Dodawanie;
    break;
  case '-':
    rWyrZ.Op = Odejmowanie;
    break;
  case '*':
    rWyrZ.Op = Mnozenie;
    break;
  case '/':
    rWyrZ.Op = Dzielenie;
    break;
  default:
    return false;
    break;
  }

  Wczytaj(rWyrZ.Arg2, rStrmWe);
  return rStrmWe.fail() == false;
}

void Wyswietl(WyrazenieZesp WyrZ)
{
  Wyswietl(WyrZ.Arg1);
  switch (WyrZ.Op)
  {
  case Dodawanie:
  {
    cout << " + ";
  }
  break;
  case Dzielenie:
  {
    cout << " / ";
  }
  break;
  case Mnozenie:
  {
    cout << " * ";
  }
  break;
  case Odejmowanie:
  {
    cout << " - ";
  }
  break;
  }
  Wyswietl(WyrZ.Arg2);
  

  


}

LZespolona Oblicz(WyrazenieZesp WyrZ)
{
  LZespolona Wynik;
  switch (WyrZ.Op)
  {
  case Dodawanie:
  {
    Wynik = WyrZ.Arg1 + WyrZ.Arg2;
  }
  break;
  case Dzielenie:
  {
    Wynik = WyrZ.Arg1 / WyrZ.Arg2;
  }
  break;
  case Mnozenie:
  {
    Wynik = WyrZ.Arg1 * WyrZ.Arg2;
  }
  break;
  case Odejmowanie:
  {
    Wynik = WyrZ.Arg1 - WyrZ.Arg2;
  }
  break;
  }

  return Wynik;
}


ostream & operator <<(ostream &Wyj, WyrazenieZesp WyrZ)
{
  Wyj<<WyrZ.Arg1;
switch (WyrZ.Op)
  {
  case Dodawanie:
  {
    Wyj << " + ";
  }
  break;
  case Dzielenie:
  {
    Wyj << " / ";
  }
  break;
  case Mnozenie:
  {
    Wyj << " * ";
  }
  break;
  case Odejmowanie:
  {
    Wyj << " - ";
  }
  break;
  }
    Wyj<<WyrZ.Arg2;

    return Wyj;
}

istream & operator >>(istream &Wej, WyrazenieZesp &WyrZ)
{
  char znak;
  Wej>>WyrZ.Arg1;
  Wej >> znak;

  switch (znak)
  {
  case '+':
    WyrZ.Op = Dodawanie;
    break;
  case '-':
    WyrZ.Op = Odejmowanie;
    break;
  case '*':
    WyrZ.Op = Mnozenie;
    break;
  case '/':
    WyrZ.Op = Dzielenie;
    break;
  default:
    Wej.setstate(ios::failbit);
    break;
  }
   Wej>>WyrZ.Arg2;

 return Wej;
}