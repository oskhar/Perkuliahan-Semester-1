// Algoritma "membaca nilai uang"
// {Algoritma ini digunakan untuk menentukan berapa nilai tukar pecahan uang dalam kelipatan 25 (Rp1000, Rp500, Rp100, Rp50, Rp25)}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI Variable
int uangInput;
int uangSisa;
int uangA;
int uangB;
int uangC;
int uangD;
int uangE;

// ALGORITMA
void main () {

    printf("Masukan nominal uang kelipatan 25: ");scanf("%i", &uangInput);
    uangA = uangInput / 1000;
    uangSisa = uangInput % 1000;
    uangB = uangSisa / 500;
    uangSisa = uangSisa % 500;
    uangC = uangSisa / 100;
    uangSisa = uangSisa % 100;
    uangD = uangSisa / 50;
    uangSisa = uangSisa % 50;
    uangE = uangSisa / 25;
    printf("Rp%i setara dengan %i buah pecahan Rp1000 ditambah %i buah pecahan Rp500 ditambah %i buah pecahan Rp100 ditambah %i pecahan Rp50 ditambah %i pecahan Rp25\n", uangInput, uangA, uangB, uangC, uangD, uangE);

}