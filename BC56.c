#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}