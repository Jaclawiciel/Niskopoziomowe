//
//  main.c
//  Niskopoziomowe
//
//  Created by Jacek Gałka on 22.05.2017.
//  Copyright © 2017 Jacek Gałka. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#include "WymaganiaWstepne.h"
#include "MinWTablicy.h"


//*********************************************************************************************************

// 2.1. Wymagania wstępne
void wymaganiaWstepne() {
    // 1.
    printf("Czy podzielna: %d\n", sprawdzPodzielnosc(5, 2));
    
    // 2.
    printf("Czy liczba pierwsza: %d\n", czyLiczbaPierwsza(13));
    
    // 3.
    printf("Liczba podzielnikow wlasciwych: %d\n", liczbaPodzielnikowWlasciwych(15));
    
    // 4.
    printf("Suma podzielnikow wlasciwych: %d\n", sumaPodzielnikowWlasciwych(15));
    
    // 5.
    printf("Czy liczba jest doskonala: %d\n", czyLiczbaDoskonala(28));
    
    // 6.
    printf("Czy liczby sa zaprzyjaznione: %d\n", czyLiczbyZaprzyjaznione(220, 284));
    
    // 7.
    printf("Czy liczy są względnie pierwsze: %d\n", czyWzgledniePierwsze(8, 15));
    
    // 8.
    printf("N-ty wyraz ciagu Fibonacciego: %d\n", ntyFibonacci(8));
    
    // 9.
    printf("Czy liczba jest kwadratowa: %d\n", czyLiczbaKwadratowa(36));
    
    // 10.
    printf("Liczba liczb kwadratowych w przedziale: %d\n", liczbaLiczbKwadratowychWZakresie(5, 20));
}

// 2.2. Najmniejsza wartość w tablicy
void najmniejszaWTablicy() {
    double tab[] = {3.5, 4, 0.2, 1, 7, 8, 2, 5.8, 6.0, 9};
    
    // 1.
    // a.
    printf("Największa wartość w tablicy: %.1f\n", maxWTablicy(tab, 10));
    
    // b.
    printf("Indeks największej wartości w tablicy: %d\n", indeksMaxWTablicy(tab, 10));
    
    // c.
    printf("Wskaznik na największą wartość w tablicy: %d, wartosc pod wskaznikiem: %.1f\n", wskaznikNaMaxWTablicy(tab, 10), *wskaznikNaMaxWTablicy(tab, 10));
}


int main(int argc, const char * argv[]) {
    
    // 2.1. Wymagania wstępne
    //wymaganiaWstepne();
    
    // 2.2. Najmniejsza wartość w tablicy
    najmniejszaWTablicy();
    
    printf("\n************************************\n\n");
    return 0;
}
