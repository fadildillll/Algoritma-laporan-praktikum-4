#include <stdio.h>

int main(void) {
 int baris, kolom;

 /* Proses pengulangan pertama */
 for (baris = 1; baris <= 10; baris++) {

 /* Proses pengulangan kedua yang terdapat
dalam pengulangan pertama */
 for (kolom = 1; kolom <= 10; kolom++) {
 printf("%3d ", baris * kolom);
 }

 printf("\n");
 }

 return 0;
}