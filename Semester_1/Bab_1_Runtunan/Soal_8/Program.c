// Algoritma "Jumlah Penduduk Tahunan"
// {Algoritma ini digunakan untuk menghitung jumlah penduduk suatu negara di tahun tertentu}

// DEKLARASI Pustaka
#include <stdio.h>

// DEKLARASI Variable
int jumlahPenduduk;
int jumlahKelahiran = 100;
int jumlahKematian = 10;
int imigrasiMasuk = 100;
int imigrasiKeluar = 90;
int tahun = 1292;

// ALGORITMA
void main () {

    jumlahPenduduk = (jumlahKelahiran + imigrasiMasuk) - (jumlahKematian + imigrasiKeluar);
    printf("Jumla penduduk di negara A pada tahun %i adalah %i \n", tahun, jumlahPenduduk);

}