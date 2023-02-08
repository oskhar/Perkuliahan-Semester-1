// PROGRAM konversi waktu
// {Algoritma ini dibuat untuk mengkonversikan waktu dari detik ke dalam hari, jam, menit, dan detik}

// DEKLARASI pustaka
#include <stdio.h>

// DEKLARASI variable
int waktu;
int hari;
int jam;
int menit;
int detik;

// ALGORITMA
int main() {

    // Proses input
    printf("Masukan waktu: ");scanf("%i", &waktu);

    // Mengkonversi data waktu
    hari = waktu / 86400;
    jam = waktu / 3600;
    menit = waktu / 60;
    detik = waktu;

    // Proses output
    printf("waktu %i detik = %i hari \n", waktu, hari);
    printf("waktu %i detik = %i jam \n", waktu, jam);
    printf("waktu %i detik = %i menit \n", waktu, menit);
    printf("waktu %i detik = %i detik \n", waktu, detik);

    return 0;

}