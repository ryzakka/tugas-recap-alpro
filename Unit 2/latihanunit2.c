#include <stdio.h>

int main() {
    int jumlahTransaksi, besaranNominal, total, i;
    printf("Berapa kali Anda melakukan transaksi hari ini? ");
    scanf("%d", &jumlahTransaksi);
    total = 0;
    printf("Berapa yang Anda habiskan pada transaksi\n");

    for (i = 0; i < jumlahTransaksi; i++) {
        printf("Ke-%d: ", i + 1);
        scanf("%d", &besaranNominal);
        total += besaranNominal;
    }

    if (jumlahTransaksi > 0) {
        printf("Total pengeluaran hari ini: %d\n", total);
    } else {
        printf("Tidak ada transaksi hari ini\n");
    }
  
    return 0;
}
