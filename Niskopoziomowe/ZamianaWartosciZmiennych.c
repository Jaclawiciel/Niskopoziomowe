//
//  ZamianaWartosciZmiennych.c
//  Niskopoziomowe
//
//  Created by Jacek Gałka on 04.06.2017.
//  Copyright © 2017 Jacek Gałka. All rights reserved.
//

#include "ZamianaWartosciZmiennych.h"

// 1.
void zamienJesliPierwszaWieksza(double *liczba1, double *liczba2) {
    if (*liczba1 > *liczba2) {
        double tmp = *liczba1;
        *liczba1 = *liczba2;
        *liczba2 = tmp;
    }
}

// 2.
void ustawMaxMozliwaUInt(unsigned int *liczba) {
    *liczba = 0;
    *liczba = *liczba - 1;
}

// 3.
void zerowanieTablicy(int tab[], int rozmiar) {
    int i;
    for (i = 0; i < rozmiar; i++) {
        tab[i] = 0;
    }
}

// 4.
void wypelnijTablicePierwszymElementem(int tab[], int rozmiar) {
    int i;
    for (i = 1; i < rozmiar; i++) {
        tab[i] = tab[0];
    }
}

// 5.

int ntyfibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return ntyfibonacci(n - 1) + ntyfibonacci(n - 2);
}

void wypelnijFibonaccim(int tab[], int rozmiar) {
    int i;
    for (i = 0; i < rozmiar; i++) {
        tab[i] = ntyfibonacci(i);
    }
}
