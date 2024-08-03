#include <stdio.h>
#include <string.h>

// Fungsi buat  menghitung jumlah kemunculan kata dalam INPUT
int hitungKemunculan(char input[][10], int dataInput, char *kata) {
    int hitung = 0;
    for (int a = 0; a < dataInput; a++) {
        if (strcmp(input[a], kata) == 0) {
            hitung++;
        }
    }
    return hitung;
}

int main() {
    // Input dan Query
    char input[][10] = {"xc", "dz", "bbb", "dz"};
    char query[][10] = {"bbb", "ac", "dz"};
    int dataInput = 4; // Jumlah kata dalam input
    int dataQuery = 3; // Jumlah kata dalam query

    // Output array untuk menyimpan hasil
    int output[dataQuery];

    // Menghitung kemunculan setiap kata dalam query
    for (int j = 0; j < dataQuery; j++) {
        output[j] = hitungKemunculan(input, dataInput, query[j]);
    }


    // Menampilkan hasil
    printf("\n");
    printf(" -- kata yang  muncul dalam QUERY terdapat pada array INPUT yaitu -- \n");
    printf(" OUTPUT = [");
    for (int b = 0; b <dataQuery; b++) {
        printf("%d", output[b]);
        if (b < dataQuery - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
