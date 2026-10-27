#include <stdio.h>

int main() {
    int total_detik;
    int hari, jam, menit, detik, sisa_detik;

    scanf("%d", &total_detik);

    hari = total_detik / 86400;
    sisa_detik = total_detik % 86400;

    jam = sisa_detik / 3600;
    sisa_detik %= 3600;

    menit = sisa_detik / 60;
    detik = sisa_detik % 60;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }
}