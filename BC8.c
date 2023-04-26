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
	int i1; //上3行
	int i2; //下2行
	int j;  //列
	scanf("%c", &a);
	for (i1 = 0; i1 < 3; i1++) {
		for (j = 0; j < 5; j++) {
			if (abs(j - 3 + 1) <= i1) {
				printf("%c", a);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for (i2 = 3; i2 < 5; i2++) {
		for (j = 0; j < 5; j++) {
			if (abs(j - 3 + 1) <= (5 - (i2 + 1))) {
				printf("%c", a);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
