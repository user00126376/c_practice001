#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//从大到小排列三个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现
//	//a放最大值
//	//b放第二大值
//	//c放最小值
//	if (a < b)
//	{
//		int i = a;
//		a = b;
//		b = i;
//	}
//	if (a < c)
//	{
//		int i = a;
//		a = c;
//		c = i;
//	}
//	if (b < c)
//	{
//		int i = b;
//		b = c;
//		c = i;
//	}
//	printf("%d>%d>%d", a, b, c);
//
//	return 0;
//}

//打印1到100之间3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 ==0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//求两个数之间的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//
//	return 0;
//}

//打印1000到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//能被4整除且不能被100整除
//		//能被400整除
//		//写法一：
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		//写法二：
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//
//	return 0;
//}

//打印100到200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)		//因为偶数不可能是素数
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d", count);
//
//	return 0;
//}

//打印1到100中所有整数出现过多少次9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//
//	return 0;
//}

//分数求和
//计算1/1-1/2+1/3+....+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//求十个整数里的最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//假设数组内某个值为整个数组内的最大值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)//不从0开始是因为已经假设下标为0的数字为max的值
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//
//	return 0;
//}

//在屏幕上输出乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j < i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%nd为将此数打印成n位数，不满足n位则用0补齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//}