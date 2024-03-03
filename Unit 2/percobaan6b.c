#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

//pada bagian pertama, didefinisikan bahwa nilai i sama dengan 2, namun nilai j belum didefinisikan. 
//perintah do, samadengan "lakukan (a) ketika (b)" maka, pada do pertama, lakukan (pencetakan "Bilangan utama (nilai i)" dan jalankan [perintah do kedua] serta tambahkan nilai i pada dirinya sendiri) ketika nilai i kurang dari sama dengan 3"
//sementara pada do kedua, "lakukan (pencetakkan "Bilangan pengali (nilai j)" dan pencetakkan "Hasil perkalian (nilai j dikali i)" serta tambahkan nilai j pada dirinya sendiri) ketika nilai j kurang dari sama dengan 2
