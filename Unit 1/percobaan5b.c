#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

//perbedaan keluaran pada dua program tersebut terletak pada hasil yang ditampilkan.
//yang mana pada program pertama keluaran hanya menghasilkan satu kata sebelum spasi.
//sementara pada program kedua, menghasilkan sebaris utuh dari masukkan yang dimasukkan pengguna.
