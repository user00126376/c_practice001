#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//��֧���
//-----------------------------------------------------------------
//switch���Ƕ�����ӣ�
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
	//���Ϊm == 5,n == 3

	return 0;
}
//-----------------------------------------------------------------
//switch���:
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}
//-----------------------------------------------------------------
//while���:
//�ж�һ������ż�����������������1��100֮�������
//int main()
//{
//	int num = 115;
//	int i = 1;
//	if (num % 2 == 0)
//	{
//		printf("ż��\n");
//	}
//	else
//	{
//		printf("����\n");
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
//���������if���
//int main()
//{
//	int age = 32;
//	if (age < 18)
//		printf("δ����");
//	else if (age >= 18 && age < 28)
//		printf("����");
//	else if (age >= 28 && age < 50)
//		printf("׳��");
//	else if (age >= 50 && age < 90)
//		printf("����");
//	else
//		printf("�����");
//	return 0;
//}