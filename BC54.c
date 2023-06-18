#include <stdio.h>

int main() {
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x >= l && x <= r) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    return 0;
}