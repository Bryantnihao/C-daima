#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("请输入年月日—>");
	int  month, year, sum, lep,day;
	scanf("%d %d %d", &year,&month,&day);

	
	switch (month)
	{
	case 1:
		sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:printf("data error"); break;

	}
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {// 判断是不是闰年
		lep = 1;
	}
	else {
		lep = 0;
	}
	if (lep == 1 && month>2) { // *如果是闰年且月份大于2,总天数应该加一天
		sum++;
	printf("这是今天的第%d天", sum);
	return 0;
}