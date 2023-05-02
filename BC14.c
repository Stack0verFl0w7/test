#include <stdio.h>

int main() {
    int a, b, i;
    scanf("a=%d,b=%d", &a, &b);
    i = a;
    a = b;
    b = i;
    printf("a=%d,b=%d", a, b);
    return 0;
}