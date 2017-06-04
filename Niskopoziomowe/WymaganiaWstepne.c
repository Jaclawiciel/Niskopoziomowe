//
//  WymaganiaWstepne.c
//  Niskopoziomowe
//
//  Created by Jacek Gałka on 04.06.2017.
//  Copyright © 2017 Jacek Gałka. All rights reserved.
//

#include "WymaganiaWstepne.h"

// 1.
int sprawdzPodzielnosc(unsigned int liczba1, unsigned int liczba2) {
    if (liczba1 % liczba2) {
        return 0;
    }
    return 1;
}

// 2.
int czyLiczbaPierwsza(unsigned int liczba) {
    int i;
    for (i = 2; i < (liczba / 2); i++) {
        if (sprawdzPodzielnosc(liczba, i)) {
            return 0;
        }
    }
    return 1;
}

// 3.
int liczbaPodzielnikowWlasciwych(unsigned int liczba) {
    int i;
    int licznik = 0;
    for (i = 1; i <= (liczba / 2); i++) {
        if (sprawdzPodzielnosc(liczba, i)) {
            licznik++;
        }
    }
    return licznik;
}

// 4.
int sumaPodzielnikowWlasciwych(unsigned int liczba) {
    int i;
    int suma = 0;
    for (i = 1; i <= (liczba / 2); i++) {
        if (sprawdzPodzielnosc(liczba, i)) {
            suma += i;
        }
    }
    return suma;
}

// 5.
int czyLiczbaDoskonala(unsigned int liczba) {
    int suma = sumaPodzielnikowWlasciwych(liczba);
    if (liczba == suma) {
        return 1;
    }
    return 0;
}

// 6.
int czyLiczbyZaprzyjaznione(unsigned int liczba1, unsigned int liczba2) {
    int sumaLiczby1 = sumaPodzielnikowWlasciwych(liczba1);
    int sumaLiczby2 = sumaPodzielnikowWlasciwych(liczba2);
    if (sumaLiczby1 == liczba2 && sumaLiczby2 == liczba1) {
        return 1;
    }
    return 0;
}

// 7.
int czyWzgledniePierwsze(unsigned int liczba1, unsigned int liczba2) {
    int i;
    for (i = 2; i < (liczba1 / 2); i++) {
        if (sprawdzPodzielnosc(liczba1, i) && sprawdzPodzielnosc(liczba2, i)) {
            return 0;
        }
    }
    return 1;
}

// 8.
int ntyFibonacci(unsigned int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return ntyFibonacci(n - 1) + ntyFibonacci(n - 2);
}

// 9.
int czyLiczbaKwadratowa(unsigned int liczba) {
    int i = 0;
    int kwadrat;
    do {
        kwadrat = i * i;
        if (kwadrat == liczba) {
            return 1;
        }
        i++;
    } while (kwadrat < liczba);
    return 0;
}

// 10.
int liczbaLiczbKwadratowychWZakresie(unsigned int lewa, unsigned int prawa) {
    int i = 0, licznik = 0;
    do {
        if (i >= lewa && i <= prawa) {
            if (czyLiczbaKwadratowa(i)) {
                licznik++;
            }
        }
        i++;
    } while (i < prawa);
    return licznik;
}
