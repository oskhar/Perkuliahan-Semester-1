// PROGRAM mengitung durasi
// {Algoritma ini digunakan untuk menghitung berapa hari suatu proyek dikerjakan}

// DEKLARASI pustaka
#include <stdio.h>

// DEKLARASI variabel
int xHari = 800;
int tahun;
int bulan;
int hari;

// ALGORITMA
int main () {

    // Menghitung hari
    tahun = xHari / 365;
    bulan = (xHari % 356) / 30;
    hari = (xHari % 356) % 30;

    // Proses output
    printf("%i tahun, %i bulan, %i hari \n", tahun, bulan, hari);

}