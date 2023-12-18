#include <stdio.h>
#include <string.h>

int main() {
    char simbol[100], pesan[100];
    int bintang = 0, pagar = 0;

    scanf("%[^\n]%*c %[^\n]%*c", simbol, pesan);
    
    int len = strlen(simbol);

    if (len != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; i < len; i++){
        printf("%c", (simbol[i] == pesan[i]) ? (simbol[i] == ' ' ? ' ' : '*') : '#');
        bintang += (simbol[i] == pesan[i]) && (simbol[i] != ' ');
        pagar += (simbol[i] != pesan[i]);
    }

    printf("\n* = %d\n# = %d\n%s\n", bintang, pagar, bintang >= pagar ? "Pesan Asli": "Pesan Palsu");

    return 0;
}