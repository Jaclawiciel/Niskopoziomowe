//
//  Przykładowy.c
//  Niskopoziomowe
//
//  Created by Jacek Gałka on 04.06.2017.
//  Copyright © 2017 Jacek Gałka. All rights reserved.
//

#include "Przykładowy.h"

// 26.
void mx_tab(float tab[], int size, float *min, float *max) {
    int i;
    // Wyszukiwanie min
    *min = tab[0];
    for (i = 1; i < size; i++) {
        if (tab[i] < *min) {
            *min = tab[i];
        }
    }
    
    //Wyszukiwanie max
    *max = tab[0];
    for (i = 1; i < size; i++) {
        if (tab[i] > *max) {
            *max = tab[i];
        }
    }
}

// 25.
float *copy_tab(float tab[], int size) {
    float *newTab = malloc(size);
    int i;
    for (i = 0; i < size; i++) {
        newTab[i] = tab[i];
    }
    return newTab;
}

// 24.
double *copy_var(double v) {
    double *ptr = malloc(5);
    *ptr = v;
    return ptr;
}

// 23.
void zero_tab(int tab[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(tab + i) = 0;
    }
}
