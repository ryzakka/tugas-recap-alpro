#include <stdio.h>

int kelilingPersegi(int pjsisi) {
    return 4 * pjsisi;}
int luasPersegi(int pjsisi) {
    return pjsisi * pjsisi;}
int volumeKubus(int pjsisi) {
    return pjsisi * pjsisi * pjsisi;}

int main() {
    int pjsisi, keliling, luas, volume;
    printf("Berapa panjang sisinya? \n");
    scanf("%d", &pjsisi);

    keliling = kelilingPersegi(pjsisi);
    luas = luasPersegi(pjsisi);
    volume = volumeKubus(pjsisi);

    printf("Berikut hasil perhitungan dari sebuah kubus dengan sisi %d cm:\n", pjsisi);
    printf("Keliling  : %d cm\n", keliling);
    printf("Luas      : %d cm^2\n", luas);
    printf("Volume    : %d cm^3\n", volume);

    return 0;
}
