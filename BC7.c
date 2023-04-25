//描述
//尝试用键盘读入一个字符，然后在屏幕上显示用这个字符组成的 3*3 的矩形。
//输入描述：
//一行读入一个 char 类型的字符。
//输出描述：
//输出这个字符组成的 3*3 矩形。

#include <stdio.h>

int main() {
   char a;
   int i;
   int b;
   scanf("%c",&a);
   for(i=0;i<3;i++){
    for(b=0;b<3;b++){
        printf("%c",a);
    }
    printf("\n");
   }
   return 0;
}
