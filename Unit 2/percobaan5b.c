#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

//pada perintah while pertama, diperiksa kondisi yang mana nilai i harus kurang dari sama dengan 3. jika sesuai, maka perintah while akan menjalankan perintah cetak "Bilangan utama" dengan mencetak nilai i = 2.
//kemudian akan masuk kepada while kedua, diperiksa kondisi yang mengharuskan nilai j kurang dari sama dengan 2. maka perintah akan mencetak "Bilangan pengali" dengan nilai j, dan mencetak hasil operasi dari nilai j dikali nilai i. 
//lalu, kembali while ke-2 berjalan karena kondisi pada while ke-2 masih terpenuhi. sampai saatnya kondisi while-2 tidak terpenuhi, maka akan keluar dari while ke-2 tadi dan akan menambahkan nilai i pada dirinya sendiri, serta kembali menetapkan nilai j = 1.
//setelahnya, akan mengulangi while pertama karena kondisi masih sesuai dan masuk ke while kedua, sampai keduanya tidak sesuai hingga program akan berakhir.
