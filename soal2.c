#include <stdio.h>

int hitungPanjangString(const char *str) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

void cariKataTerpanjang(const char *kalimat) {
    int panjangMaksimal = 0;
    int panjangSaatIni = 0;
    const char *awalKata = kalimat;
    const char *kataTerpanjang = NULL;

    int indeks = 0;
    while (kalimat[indeks] != '\0') {
        if (kalimat[indeks] == ' ' || kalimat[indeks] == '\0') {
            if (panjangSaatIni > panjangMaksimal) {
                panjangMaksimal = panjangSaatIni;
                kataTerpanjang = awalKata;
            }
            panjangSaatIni = 0;
            awalKata = kalimat + indeks + 1;
        } else {
            panjangSaatIni++;
        }
        indeks++;
    }

    if (panjangSaatIni > panjangMaksimal) {
        panjangMaksimal = panjangSaatIni;
        kataTerpanjang = awalKata;
    }

    if (kataTerpanjang != NULL) {
        printf("Kata terpanjang: ");
        for (int i = 0; i < panjangMaksimal; i++) {
            putchar(kataTerpanjang[i]);
        }
        printf(": %d karakter\n", panjangMaksimal);
    }
}

int main() {
    char kalimat[256];

    printf("Masukkan kalimat rendom : ");
    gets(kalimat);

    int panjang = hitungPanjangString(kalimat);
    if (panjang > 0 && kalimat[panjang - 1] == '\n') {
        kalimat[panjang - 1] = '\0';
    }

    cariKataTerpanjang(kalimat);

    return 0;
}
