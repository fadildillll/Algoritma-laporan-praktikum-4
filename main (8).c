#include <stdio.h>
int main(void) {
int j;
printf("Statemen sebelum blok pengulangan\n");
j = 10;
while (j < 5) {
printf("Statemen di dalam blok pengulangan\n");
j++;
}
printf("Statemen setelah blok pengulangan\n");
return 0;
}