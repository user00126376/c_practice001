#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	//缓冲区还剩下一个'\n'
//	//读取'\n'以清空缓冲区
//	//getchar()
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//只打印字符0到字符9之间的字符
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//for与if嵌套
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//for与continue嵌套
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//问下列代码执行多少次循环
//int main()
//{
//	int i = 0, k = 0;
//
//	for (i = 0, k = 0; k = 0; i++, k++)		//判断语句处k = 0表示为假，不进入循环，故执行0次
//		k++;								//只要让判断处非零，则此处陷入死循环
//
//	return 0;
//}

//do....while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//练习
//求n的阶乘,不考虑溢出情况
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//求阶乘之和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//优化之后
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//在一个有序数组中查找某个具体的数字n，编写int binsearch(int x,int v[],int n);
//功能：在v[0]<...<v[n-1]的数组中查找x
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);

	for (i = 0; i <= sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标为%d ", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到");

	return 0;
}
