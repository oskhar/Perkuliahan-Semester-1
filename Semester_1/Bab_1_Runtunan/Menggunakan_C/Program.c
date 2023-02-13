// ALGORITMA "Konversi detik"
// {Algoritma ini berguna untuk mengkonversikan detik ke dalam hari, jam, menit, detik}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI Variable
int hari;
int jam;
int menit;
int detik;
int sisaDetik;

// ALGORITMA
void main() {

    // Proses input
    printf("Masukan detik: ");scanf("%i", &detik);
    
    // Mengkonversikan waktu
    hari = detik / 86400;
    sisaDetik = detik % 86400;
    jam = sisaDetik / 3600;
    sisaDetik = sisaDetik % 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;

    // Proses output
    printf("%i Hari, %i Jam, %i Menit, %i Detik \n", hari, jam, menit, detik);

}
