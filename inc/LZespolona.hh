#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>
#include <math.h>

using namespace std;

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */



LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  double Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona Sprzezenie(LZespolona Skl) ;
double modul(LZespolona Skl);


void Wyswietl(LZespolona Skl);


bool Wczytaj(LZespolona &Skl, std::istream &rStrmWe);


ostream & operator <<(ostream &Wyj, LZespolona Skl);
istream & operator >>(istream &Wej, LZespolona &Skl);

bool operator == (LZespolona  Skl1,  LZespolona  Skl2);
bool operator != (LZespolona  Skl1,  LZespolona  Skl2);

#endif