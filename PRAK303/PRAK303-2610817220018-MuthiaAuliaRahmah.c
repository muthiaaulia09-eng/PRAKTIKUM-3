#include <stdio.h>

int main() {
    int nilai;

    scanf("%d", &nilai);

    if (nilai > 0) {
        printf("positif\n");
    } else if (nilai < 0) {
        printf("negatif\n");
    } else {
        printf("nol\n");
    }
}