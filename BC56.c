//描述
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//输入描述：
//输入包括一个字符。
//输出描述：
//输出该字符是字母（YES）或不是（NO）。

//第一版
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

//第二版
#include<stdio.h>
#include<math.h>
int main(){
	char a;
	while((a=getchar())!=EOF){
		getchar();
		if(a>='A'&&a<='z'){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}    
	return 0;
}

//第三版
#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>=65&&a<=90||a<=122&&a>=97)
        printf("YES");
    else
        printf("NO");
    return 0;
}
