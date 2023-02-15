// ALGORITMA "Konversi Hari"
// {Algoritma ini berguna untuk mengkonversikan hari ke dalam tahun, bulan, hari}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI Variabel
int tahun;
int bulan;
int hari = -2147483647;
int sisaHari;

// ALGORITMA
void main () {
    
    // Mengkonversikan hari
    tahun = hari / 365;
    sisaHari = hari % 365;
    bulan = sisaHari / 30;
    hari = sisaHari % 30;

    // Proses output
    printf("%i tahun, %i bulan, %i hari \n", tahun, bulan, hari);

}