// ALGORITMA "Selisih tanggal"
// {Algoritma berguna untuk menghitung selisih kedua tanggal yang dimasukan}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI Variable
int hariA;
int hariB;
int bulanA;
int bulanB;
int tahunA;
int tahunB;
int akumulasiHariA;
int akumulasiHariB;
int hasilAkhir;

// ALGORITMA
void main () {
    
    // Proses input
    printf("Masukan hari A: ");
    scanf("%i", & hariA);
    printf("Masukan hari B: ");
    scanf("%i", & hariB);

    printf("Masukan bulan A: ");
    scanf("%i", & bulanA);
    printf("Masukan bulan B: ");
    scanf("%i", & bulanB);

    printf("Masukan tahun A: ");
    scanf("%i", & tahunA);
    printf("Masukan tahun B: ");
    scanf("%i", & tahunB);

    // Mengkonversikan tanggal ke hari
    akumulasiHariA = hariA + bulanA * 30 + tahunA * 365;
    akumulasiHariB = hariB + bulanB * 30 + tahunB * 365;
    hasilAkhir = akumulasiHariA - akumulasiHariB;

    // Proses output
    printf("%i \n", hasilAkhir);

}
