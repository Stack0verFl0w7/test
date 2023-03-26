#include <stdio.h>
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct Stu S1 = { "ÕÅÈı",20,"123456" };
	printf("%s\n", S1.name);
	printf("%d\n", S1.age);
	printf("%s\n", S1.id);
	return 0;
}