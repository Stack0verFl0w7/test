#include <stdio.h>
int main()
{
    int x, y, x1, y1;
    scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
    if (x1 - x == 0 && y1 > y)
        printf("u");
    else if (x1 - x == 0 && y1 < y)
        printf("d");
    else if (x1 > x && y1 - y1 == 0)
        printf("r");
    else if (x1 < x && y1 - y1 == 0)
        printf("l");
    return 0;
}
