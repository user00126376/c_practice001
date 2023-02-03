#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//分支语句
//-----------------------------------------------------------------
//switch语句嵌套例子：
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:m++, n++; break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	//结果为m == 5,n == 3

	return 0;
}
//-----------------------------------------------------------------
//switch语句:
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:
//		printf("输入错误！");
//		break;
//	}
//	return 0;
//}
//-----------------------------------------------------------------
//while语句:
//判断一个数是偶数还是奇数并且输出1到100之间的奇数
//int main()
//{
//	int num = 115;
//	int i = 1;
//	if (num % 2 == 0)
//	{
//		printf("偶数\n");
//	}
//	else
//	{
//		printf("奇数\n");
//	}
//
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//-----------------------------------------------------------------
//关于年龄的if语句
//int main()
//{
//	int age = 32;
//	if (age < 18)
//		printf("未成年");
//	else if (age >= 18 && age < 28)
//		printf("青年");
//	else if (age >= 28 && age < 50)
//		printf("壮年");
//	else if (age >= 50 && age < 90)
//		printf("老年");
//	else
//		printf("真的吗");
//	return 0;
//}