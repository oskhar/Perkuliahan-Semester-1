// Algoritma "konfigurasi satuan"
// {Algoritma ini digunakan untuk mengkonversikan nilai masukan berupa meter ke dalam satuan ichi, kaki dan yard}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI
float meter;
float inchi;
float kaki;
float yard;

// ALGORITMA
void main() {

    printf("Masukan panjang dalam satuan meter: ");scanf("%f", &meter);
    inchi = meter * 0.0254;
    kaki = meter * 0.3048;
    yard = meter * 0.9144;
    printf("%.2f meter = %.2f inchi, %.2f kaki, %.2f yard", meter, inchi, kaki, yard);

}