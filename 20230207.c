#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//�Ӵ�С����������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ��
//	//a�����ֵ
//	//b�ŵڶ���ֵ
//	//c����Сֵ
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

//��ӡ1��100֮��3�ı���������
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

//��������֮������Լ��
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

//��ӡ1000��2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//�ܱ�4�����Ҳ��ܱ�100����
//		//�ܱ�400����
//		//д��һ��
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
//		//д������
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

//��ӡ100��200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)		//��Ϊż��������������
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

//��ӡ1��100�������������ֹ����ٴ�9
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

//�������
//����1/1-1/2+1/3+....+1/99-1/100��ֵ
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

//��ʮ������������ֵ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//����������ĳ��ֵΪ���������ڵ����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)//����0��ʼ����Ϊ�Ѿ������±�Ϊ0������Ϊmax��ֵ
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

//����Ļ������˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j < i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%ndΪ��������ӡ��nλ����������nλ����0����
//		}
//		printf("\n");
//	}
//
//	return 0;
//}