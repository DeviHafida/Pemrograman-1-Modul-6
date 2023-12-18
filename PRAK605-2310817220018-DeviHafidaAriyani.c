#include <stdio.h>
#include <string.h>

void cek_pesan(char kode[], char pesan[]) {
    char pesan_hasil[300];  // Sesuaikan ukuran array jika diperlukan
    int bintang_count = 0;
    int pagar_count = 0;

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return;
    }

    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == pesan[i]) {
            pesan_hasil[i] = '*';
            bintang_count += 1;
        } else {
            pesan_hasil[i] = '#';
            pagar_count += 1;
        }
    }
    pesan_hasil[strlen(kode)] = '\0';  // Akhiri string dengan null

    printf("%s\n", pesan_hasil);
    printf("* = %d\n", bintang_count);
    printf("# = %d\n", pagar_count);

    if (bintang_count >= pagar_count) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
}

int main() {
    char kode[300];  // Sesuaikan ukuran array jika diperlukan
    char pesan_diterima[300];  // Sesuaikan ukuran array jika diperlukan

    // Input
    printf("Masukkan kode Shikamaru: ");
    scanf("%s", kode);
    printf("Masukkan pesan yang diterima: ");
    scanf(" %[^\n]s", pesan_diterima);  // Membaca seluruh baris, termasuk spasi

    // Proses dan Output
    cek_pesan(kode, pesan_diterima);

    return 0;
}