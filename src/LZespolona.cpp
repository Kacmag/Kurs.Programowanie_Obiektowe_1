#include "LZespolona.hh"
#include <iostream>

using namespace std;

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = (Skl1.re * Skl2.re) - (Skl1.im * Skl2.im);
  Wynik.im = (Skl1.re * Skl2.im) - (Skl1.im * Skl2.re);
  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

LZespolona  operator/(LZespolona  Skl1,  double  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re/Skl2;
  Wynik.im = Skl1.im/Skl2;
  return Wynik;
}






LZespolona Sprzezenie(LZespolona Skl)
{
  LZespolona Wynik;
  Wynik.re = Skl.re;
  Wynik.im = Skl.im *-1;
  return Wynik;
}


double modul (LZespolona Skl)
{
  double Wynik;
  Wynik = (sqrt(Skl.re*Skl.re+Skl.im*Skl.im));

  Wynik=Wynik*Wynik;
  return Wynik;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik=Skl1*Sprzezenie(Skl2);
  return Wynik;
}

/*
void Wyswietl (LZespolona Skl)
{
  if(Skl.im<0)
  {
   
    cout<<"("<<Skl.re<<Skl.im<<"i)";
  }
  else
  {
  cout<<"("<<Skl.re<<"+"<<Skl.im<<"i)";
  }
}
*/