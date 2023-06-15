#include <stdio.h>

int main() {
    int i;
    while (scanf("%d", &i) != EOF) {
        if (i % 2 == 0) {
            printf("Even\n");
        }
        else {
            printf("Odd\n");
        }
    }
    return 0;
}