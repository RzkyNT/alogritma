#include <stdio.h>
void hariini(char* hari_besok);

int main() {
    printf("%s \n", hariini(hari_besok));
    return 0;
}

void hariini(char* hari_besok) {
    if (hariini == "senin") {
        printf("selasa\n");
    } else if (hariini == "selasa") {
        printf("Hari ini adalah hari selasa\n");
    } else if (hariini == "rabu") {
        printf("Hari ini adalah hari rabu\n");
    } else if (hariini == "kamis") {
        printf("Hari ini adalah hari kamis\n");
    } else if (hariini == "jumat") {
        printf("Hari ini adalah hari jumat\n");
    } else if (hariini == "sabtu") {
        printf("Hari ini adalah hari sabtu\n");
    } else if (hariini == "minggu") {
        printf("Hari ini adalah hari minggu\n");
    } else {
        printf("Input tidak valid\n");
    }
}