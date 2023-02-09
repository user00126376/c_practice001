#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//函数的功能具有独立性
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//库函数
//strcpy
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//
//	return 0;
//}

//自定义函数
//例：自定义一个两数比大小函数
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d", max);
//
//	return 0;
//}

//写一个函数用于交换两整型变量内容
//错误案例1：
//int Swap1(int x, int y)//传值调用
//{
//	int i = 0;
//	i = x;
//	x = y;
//	y = i;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap1(a, b);
//	printf("a = %d,b = %d", a, b);
//
//	return 0;
//}

//使用指针完成
void Swap2(int* pa, int* pb)//传址调用
{
	int i = 0;
	i = *pa;
	*pa = *pb;
	*pb = i;
}

int main()
{
	int a = 10;
	int b = 20;
	Swap2(&a, &b);//调用函数
	printf("a = %d,b = %d", a, b);

	return 0;
}