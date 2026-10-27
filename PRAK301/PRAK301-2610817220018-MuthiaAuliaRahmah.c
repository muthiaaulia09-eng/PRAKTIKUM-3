#include <stdio.h>
int main() {
    int angka1, angka2;

    scanf("%d %d", &angka1, &angka2);

    if (angka1 < angka2) {
        printf("%d %d\n", angka1, angka2);
    } else {
        printf("%d %d\n", angka2, angka1);
    }
}