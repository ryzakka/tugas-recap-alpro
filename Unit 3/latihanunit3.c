#include <stdio.h>

int main() {
    int jumlahElemenArray, array[100], i, hasil;

    printf("Berapa jumlah elemen yang diinginkan? \n");
    scanf("%d", &jumlahElemenArray);

    printf("Masukkan nilai untuk tiap-tiap elemen: \n");
    for (i = 0; i < jumlahElemenArray; i++) {
        scanf("%d", &array[i]);
    }

    hasil = 0;
    for (i = 0; i < jumlahElemenArray; i++) {
        hasil += array[i];
    }

    printf("Hasil keseluruhan elemen pada array adalah: %d\n", hasil);

    return 0;
}
