#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//pada bagian perulangan for, pada for induk, diketahui nilai i adalah 2,dan for induk akan berjalan
//selama dan jika nilai i kurang dari sama dengan 3, maka nilai i menambahkan dirinya sendiri.
//pada for turunan, diketahui nilai j adalah 1, dan for akan terus berjalan jika dan selama nilai j
//kurang dari sama dengan 2, maka nilai j akan menambahkan dirinya sendiri.
//pada for induk, nilai i sama dengan 2, nilai 2 kurang dari 3, maka for akan berjalan dengan mencetak
//pesan keluaran "bilangan utama: (nilai dari i) 2" kemudian akan masuk ke for turunan. setelah
//masuk forturunan dan diketahui kondisinya sesuai, maka program akan menjalankan perintah cetak 
//"bilangan pengali: (nilai j) 1" dan mencetak "hasil perkalian: (nilai i dikali nilai j) 2".
//selama kondisi pada for turunan masih sesuai, maka program akan kembali menjalankan for turunan
//tersebut sampai kondisinya mustahil.
//jika for turunan sudah tidak sesuai kondisinya, maka akan keluar dan memeriksa kondisi indukkan. jika
//for indukkan kondisinya sesuai, maka akan berjalan kembali.
//sehingga for indukkan berjalan dua kali di dalamnya juga berjalan for turunan 2 kali. Jadi terdapat 2
//for turunan setiap for indukkan berjalan.
