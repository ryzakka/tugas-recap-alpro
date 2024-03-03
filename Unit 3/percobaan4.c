#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

//pada baris awal, ada pendefinisian aturan pada #define dengan definisi pertama sebagai batas maksimal data orang sebanyak 3 orang, dan definisi ke dua untuk batas maksimal panjang nama sepanjang 20 karakter.
//kemudian, didefinisikan variabel char dengan mengampu dua aturan definisi batas maksimal orang dan batas maksimal panjang nama. sehingga, setiap data yang dimasukkan dibatasin aturan tadi.
//setelahnya, pendefinisian untuk usia dengan aturan definisi batas maksimal orang. 
//berikutnya melakukan pencetakkan "Name" dengan spasi panjang (tab horizontal) dan "Age" diikuti pencetakkan strip untuk memisah judul dan isi data nantinya.
//selanjutnya, perintah for memeriksa nilai variabel i dimulai dengan menetapkan nilai awal = 0 dan membatasi nilai i supaya tidak lebih dari jumlah batas maksimal orang, kemudian nilai i bertambah satu-satu tiap for dijalankan ulang.
//masuk pada perintah for yang akan mencetak nama bertipe string dan usia untuk integer.
