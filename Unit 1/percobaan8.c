#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

//fungsi definisi %f yang disertai titik dan angka adalah menampilkan nilai dari tipe data
//float diikuti dengan nilai dibelakang koma atau menandai berapa digit desimal yang akan ditampilkan.
//misalnya, %.6f, maka akan menghasilkan tipe data float dengan 6 digit angka dibelakang koma.
