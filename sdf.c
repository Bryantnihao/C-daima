#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ni
{
	char a[20];
	int age;
};
//int cap(const void*e1, const void*e2)
//{
//   return	strcmp(((struct ni*)e1)->a, ((struct ni*)e2)->a);
//}
//void text()
//{   
//	struct ni p[] = { {"sdf",23}, {"dfsafg",22}, {"fadsfdgds",33} };
//	int sz=sizeof(p) / sizeof(p[0]);
//	qsort(p, sz, sizeof(p[0]), cap);
//	
//}  
int cap(const void*e1, const void*e2)
{
	return	((struct ni*)e1)->age-((struct ni*)e2)->age;
}
void text1()
{
	struct ni p[] = { { "sdf", 23 }, { "dfsafg", 22 }, { "fadsfdgds", 33 } };
	int sz = sizeof(p) / sizeof(p[0]);
	qsort(p, sz, sizeof(p[0]), cap);
}
int main()
{   
	/*text();*/
	text1();
	return 0;
}