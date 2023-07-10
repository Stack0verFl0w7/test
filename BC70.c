#include <stdio.h>

int main() {
    int arr[3];
    int i;
    while (scanf("%d", &arr[i]) != EOF) {
        getchar();
        if (arr[i] > 0) {
            printf("1\n");
        }
        if (arr[i] == 0) {
            printf("0.5\n");
        }
        if (arr[i] < 0) {
            printf("0\n");
        }
        i++;
    }
    return 0;
}