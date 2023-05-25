#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    j = 1;
    for (i = 0; i < n; i++) {
        j = j * 2;
    }
    printf("%d", j);
    return 0;
}