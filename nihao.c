#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Sut
{
	char name[20];
	int age;
	char  id[20];
};
int main()
{
	
	struct Sut s1 = { "ÕÅÈý", 20,003100110 };
	struct Sut*  pa= &s1;
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	printf("%s\n", (*pa).name);
	printf("%d\n", (*pa).age);
	printf("%s\n", (*pa).id);
	printf("%s\n", pa->name);
	printf("%d\n", pa->age);
	printf("%c\n", pa->id);
	
}
