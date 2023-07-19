#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int j = 0;
    int sum = 0;
    int flag = 1;
    scanf("%d", &n);
    while (flag) {
        if (n % 2 == 0) {
            j = i + 1;
            sum = sum + i - j;
            i = j + 1;
        }
        else {
            sum = sum + i - j;
            j = i + 1;
            i = j + 1;
        }
        if (i > n || j > n) {
            flag = 0;
        }
    }
    printf("%d", sum);
    return 0;
}