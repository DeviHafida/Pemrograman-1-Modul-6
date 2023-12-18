#include <stdio.h>

void calculateZetsu(int n, int zetsuCount[n]) {
    for (int i = 0; i < n; ++i) {
        zetsuCount[i] *= (i + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int zetsuCount[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &zetsuCount[i]);
    }
    calculateZetsu(n, zetsuCount);
    for (int i = 0; i < n; ++i) {
        printf("%d ", zetsuCount[i]);
    }

    return 0;
}