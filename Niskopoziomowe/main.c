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
}



int main(int argc, const char * argv[]) {
    
    // 2.1. Wymagania wstępne
    wymaganiaWstepne();
    
    printf("\n************************************\n\n");
    return 0;
}
