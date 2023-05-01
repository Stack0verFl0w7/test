//第一版，答案错误
#include <stdio.h>

int main() {
	int b[8] = { 0 };
	int i, y, m, d;
	for (i = 0; i < 8; i++) {
		scanf("%d", &b[i]);
	}
	y = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];
	m = b[4] * 10 + b[5];
	d = b[6] * 10 + b[7];
	if (y <= 2015 && y >= 1990 && m <= 12 && m >= 1 && d <= 30 && d >= 1) {
		printf("year=%d\nmonth=%d%d\ndate=%d\n", y, b[4], b[5], d);
	}
	else {
		printf("输入错误\n");
	}
	return 0;
}