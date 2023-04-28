#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 100 && a >= 0 && b <= 100 && b >= 0 && c <= 100 && c >= 0) {
        printf("score1=%d,score2=%d,score3=%d", a, b, c);
    }
    else {
        printf(" ‰»Î¥ÌŒÛ\n");
    }
    return 0;
}