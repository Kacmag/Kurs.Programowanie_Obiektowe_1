#ifndef STATYSTYKATESTU_HH
#define STATYSTYKATESTU_HH

#include <iostream>

using namespace std;

struct StatystykaTestu {
    int Accurate;
    int failure;
    double procent;

};

void reset(StatystykaTestu &nowe);
void Accurate(StatystykaTestu &nowe);
void failure(StatystykaTestu &nowe);
void Wyswietl( StatystykaTestu  StatTestu );
#endif

