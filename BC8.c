//描述
//尝试用键盘读入一个字符，然后在屏幕上显示一个用这个字符填充的对角线长5个字符，倾斜放置的菱形。
//输入描述：
//输入一个char类型字符
//输出描述：
//输出一个用这个字符填充的对角线长5个字符，倾斜放置的菱形

#include <stdio.h>
#include<math.h>

int main() {
	char a;
	int i; //行
	int j; //列
	scanf("%c", &a);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i < 3) {
				if (abs(j - 3 + 1) <= i) {
					printf("%c", a);
				}
				else {
					printf(" ");
				}
			}
			else {
				if (abs(j - 3 + 1) <= (5 - (i + 1))) {
					printf("%c", a);
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
