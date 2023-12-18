#include <stdio.h>

void multiplyRows(int n, int row1[n], int row2[n], int result[n]) {
    for (int i = 0; i < n; ++i) {
        result[i] = row1[i] * row2[i];
    }
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int data[2 * n1];
        for (int i = 0; i < n1; ++i) {
            scanf("%d", &data[i]);
        }
        for (int i = n1; i < 2 * n1; ++i) {
            scanf("%d", &data[i]);
        }

        int result[n1];
        multiplyRows(n1, data, data + n1, result);

        for (int i = 0; i < n1; ++i) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}