//
//  MinWTablicy.c
//  Niskopoziomowe
//
//  Created by Jacek Gałka on 04.06.2017.
//  Copyright © 2017 Jacek Gałka. All rights reserved.
//

#include "MinWTablicy.h"

// 1.
// a.
double maxWTablicy(double tab[], int rozmiar) {
    double max = tab[0];
    int i;
    for (i = 1; i < rozmiar; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

// b.
int indeksMaxWTablicy(double tab[], int rozmiar) {
    int indeksMax = 0;
    int i;
    for (i = 1; i < rozmiar; i++) {
        if(tab[i] > tab[indeksMax]) {
            indeksMax = i;
        }
    }
    return indeksMax;
}

// c.
double *wskaznikNaMaxWTablicy(double tab[], int rozmiar) {
    return tab + indeksMaxWTablicy(tab, 10);
}

// 2.
// a.
int indeksSzukanejWTablicy(int tab[], int rozmiar, int szukana) {
    int i;
    for (i = 0; i < rozmiar; i++) {
        if (tab[i] == szukana) {
            return i;
        }
    }
    
    return -1;
}

// b.
int *wskaznikNaSzukanaWTablicy(int tab[], int rozmiar, int szukana) {
    int i;
    for (i = 0; i < rozmiar; i++) {
        if (tab[i] == szukana) {
            return tab + i;
        }
    }
    return NULL;
}
