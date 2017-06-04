//
//  MinWTablicy.h
//  Niskopoziomowe
//
//  Created by Jacek Gałka on 04.06.2017.
//  Copyright © 2017 Jacek Gałka. All rights reserved.
//

#ifndef MinWTablicy_h
#define MinWTablicy_h

#include <stdio.h>

// 1.
// a.
double maxWTablicy(double tab[], int rozmiar);

// b.
int indeksMaxWTablicy(double tab[], int rozmiar);

// c.
double *wskaznikNaMaxWTablicy(double tab[], int rozmiar);

// 2.
// a.
int indeksSzukanejWTablicy(int tab[], int rozmiar, int szukana);

// b.
int *wskaznikNaSzukanaWTablicy(int tab[], int rozmiar, int szukana);

#endif /* MinWTablicy_h */
