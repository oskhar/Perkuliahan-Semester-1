// Algoritma "Berat Ideal"
// {Algoritma ini digunakan untuk menentukan berat badan ideal seseorang berdasarkan tinggi badan}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI Variable
float tinggiBadan = 170;
float beratIdeal;

// ALGORITMA
void main () {

    beratIdeal = (tinggiBadan - 100);
    beratIdeal = beratIdeal - (beratIdeal / 10);
    printf("Berat badan ideal = %f", beratIdeal);

}