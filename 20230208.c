#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�����Ĺ��ܾ��ж�����
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

//�⺯��
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

//�Զ��庯��
//�����Զ���һ�������ȴ�С����
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

//дһ���������ڽ��������ͱ�������
//������1��
//int Swap1(int x, int y)//��ֵ����
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

//ʹ��ָ�����
void Swap2(int* pa, int* pb)//��ַ����
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
	Swap2(&a, &b);//���ú���
	printf("a = %d,b = %d", a, b);

	return 0;
}