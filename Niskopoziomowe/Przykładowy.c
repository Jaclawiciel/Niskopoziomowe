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

// 22.
char *second_word(char text[]) {
    int i;
    for (i = 0; text != 0; i++) {
        if ((int)text[i] == 32 || (int)text[i] == 9) {
            return text + i + 1;
        }
    }
    return NULL;
}

int czySpacjaLubTabLubKoniec(char chr) {
    if ((int)chr == 32 || (int)chr == 9 || chr == 0) {
        return 1;
    } else {
        return 0;
    }
}


void reverse_word(char text[]) {
    int i = 0;
    int dlugoscSlowa = 0;
    
    char *drugieSlowo = second_word(text);
    
    while (!czySpacjaLubTabLubKoniec(*(drugieSlowo + i))) {
        dlugoscSlowa++;
        i++;
    }
    printf("Dlugosc drugiego slowa: %d\n", dlugoscSlowa);
    
    char tempChar[dlugoscSlowa];
    for (i = 0; i < dlugoscSlowa; i++) {
        tempChar[i] = *(drugieSlowo + i);
    }
    
    for (i = 0; i < dlugoscSlowa; i++) {
        *(drugieSlowo + i) = *(tempChar + (dlugoscSlowa - 1) - i);
    }
}

// 19.
char *second_word19(char text[]) {
    int rozmiar;
    char ostatniZnak;
    for (rozmiar = 0; text[rozmiar] != 0; rozmiar++) {
        ostatniZnak = text[rozmiar];
    }
    int i;
    for (i = 0; i < rozmiar; i++) {
        text[i] = ostatniZnak;
    }
    return text;
}

// 20.
char *second_word20(char text[]) {
    char *ptr = NULL;
    int i;
    for (i = 0; text[i] != ' '; i++);
    ptr = text + i + 1;
    return ptr;
}

// 21.
int palindrom(char text[]) {
    int rozmiar;
    for (rozmiar = 0; text[rozmiar] != 0; rozmiar++);
    int i;
    for (i = 0; i < rozmiar; i++) {
        if (text[i] != text[rozmiar - i - 1]) {
            return 0;
        }
    }
    return 1;
}












