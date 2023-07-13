#include <stdio.h>

int main() {
    long long n = 0;
    int i = 0;
    scanf("%d", &i);
    while (i > 0) {
        n = n + i;
        i--;
    }
    printf("%ld", n);
    return 0;
}