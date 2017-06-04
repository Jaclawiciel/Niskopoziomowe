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
#include "ZamianaWartosciZmiennych.h"


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
    double tabDouble[] = {3.5, 4, 0.2, 1, 7, 8, 2, 5.8, 6.0, 9};
    int tabInt[] = {3, 4, 0, 1, 7, 8, 2, 5, 6, 9};
    int tabIntSort[] = { 0, 1, 2, 4, 8, 16, 32, 64, 128, 256 };
    
    // 1.
    // a.
    printf("Największa wartość w tablicy: %.1f\n", maxWTablicy(tabDouble, 10));
    
    // b.
    printf("Indeks największej wartości w tablicy: %d\n", indeksMaxWTablicy(tabDouble, 10));
    
    // c.
    printf("Wskaznik na największą wartość w tablicy: %d, wartosc pod wskaznikiem: %.1f\n", wskaznikNaMaxWTablicy(tabDouble, 10), *wskaznikNaMaxWTablicy(tabDouble, 10));
    
    // 2.
    // a.
    printf("Indeks wartości wyszukanej w tablicy: %d\n", indeksSzukanejWTablicy(tabInt, 10, 0));
    
    // b.
    printf("Wskaznik na szukana wartosc w tablicy: %d, wartosc pod wskaznikiem: %d\n", wskaznikNaSzukanaWTablicy(tabInt, 10, 0), *wskaznikNaSzukanaWTablicy(tabInt, 10, 0));
    
    // 3.
    // a.
    printf("Indeks szukanej wartości w posortowanej tablicy: %d\n", indeksSzukanejWPosortTablicy(tabIntSort, 10, 4));
    
    // b.
    printf("Wskaznik na szukana wartosc w posortowanej tablicy: %d, wartosc pod wskaznikiem: %d\n", wskaznikNaSzukanaWTabSort(tabIntSort, 10, 8), *wskaznikNaSzukanaWTabSort(tabIntSort, 10, 8));
    
    // 4.
    printf("Liczba wystapien najmniejszej wartosci w tablicy: %d\n", liczbaWystapienMinWTab(tabInt, 10));
}



int main(int argc, const char * argv[]) {
    
    // 2.1. Wymagania wstępne
    //wymaganiaWstepne();
    
    // 2.2. Najmniejsza wartość w tablicy
    najmniejszaWTablicy();
    
    printf("\n************************************\n\n");
    return 0;
}
