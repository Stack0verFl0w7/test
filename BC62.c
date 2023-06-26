#include <stdio.h>

int main() {
    int i = 0;
    int a = 0;
    int b = 0;
    int arr[10] = { 0 };
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            a++;
        }
        else {
            b++;
        }
    }
    printf("positive:%d\nnegative:%d\n", a, b);
    return 0;
}