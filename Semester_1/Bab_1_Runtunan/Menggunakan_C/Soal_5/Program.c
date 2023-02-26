// Algoritma "konversi jarak"
// {Algoritma ini digugnakan untuk mengkonversikan jarak tempuh seekor semut dalam satuan cm}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI Variable
int jarakSemut = 261341;
int km;
int m;
int cm;
int sisaJarak;

// ALGORITMA
void main () {

    km = jarakSemut / 100000;
    sisaJarak = jarakSemut % 100000;
    m = sisaJarak / 100;
    cm = sisaJarak % 100;
    printf("x = %i, ini berarti semut menempuh jarak %i + %i + %i\n", jarakSemut, km, m, cm);

}