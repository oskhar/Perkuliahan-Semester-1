// Algoritma "konversi detik"
// {Algoritma ini digunakan untuk mengkonversikan detik ke dalam hari, jam, menit, dan detik}

// DEKLARASI pustaka
#include <stdio.h>

// DEKLARASI variable
int detik;
int menit;
int jam;
int hari;
int sisaDetik;

// ALGORITMA
void main() {

    // Proses input
    printf("Masukan detik: ");scanf("%i", &detik);

    // Konversikan waktu detik
    hari = detik / 86400;
    sisaDetik  = detik % 86400;
    jam  = sisaDetik / 3600;
    sisaDetik = sisaDetik % 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;

    // Proses output
    printf("%i hari, %i jam, %i menit, %i detik \n", hari, jam, menit, detik);
}