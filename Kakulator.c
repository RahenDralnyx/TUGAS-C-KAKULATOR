#include <stdio.h>

int main() {
    int a,b,c; //Data variable a= angka pertama b=angka kedua c=oprasi bilangan
    
    printf("++++++++++Selamat datang Kakulator Sederhana++++++++++");
    getchar();

    printf("\nMasukan angka Pertama =" );
    scanf("%d", &a);
   
    printf("\nMasukan angka Kedua =" );
    scanf("%d", &b);
   
    printf("\noprasi yang di pilih\n");
   
    printf("1.(+)\n");
    printf("2.(-)\n");
    printf("3.(X)\n");
    printf("4.(:)\n");
   
    printf("Pilih operasi (1-4):");
    scanf("%d", &c );
    
    printf("\n\n");

    if (c == 1) {
        c = a + b;
        printf("\nHasil = %d\n", c);
    } 
    else if (c == 2) {
        c = a - b;
        printf("\nHasil = %d\n", c);
    } 
    else if (c == 3) {
        c = a * b;
        printf("\nHasil = %d\n", c);
    } 
    else if (c == 4) {
        if (b != 0) {
            c = a / b;   
            printf("\nHasil = %d\n", c);
        } else {
            printf("Tidak bisa dibagi");
            printf("\nError: Tidak bisa dibagi dengan nol!\n");
        }
    } 
    else {
        printf("\nPilihan tidak valid!\n");
    }    
return 0;
}