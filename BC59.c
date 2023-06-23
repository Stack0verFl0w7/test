#include <stdio.h>

int main()
{
    int n = 0, a;
    for (int i = 0; i < 4; ++i)
    {
        scanf("%d", &a);
        if (a > n)
            n = a;
    }
    printf("%d", n);
    return 0;
}