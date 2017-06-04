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
