#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	//��������ʣ��һ��'\n'
//	//��ȡ'\n'����ջ�����
//	//getchar()
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//ֻ��ӡ�ַ�0���ַ�9֮����ַ�
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

//forѭ��
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

//for��ifǶ��
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

//for��continueǶ��
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

//�����д���ִ�ж��ٴ�ѭ��
//int main()
//{
//	int i = 0, k = 0;
//
//	for (i = 0, k = 0; k = 0; i++, k++)		//�ж���䴦k = 0��ʾΪ�٣�������ѭ������ִ��0��
//		k++;								//ֻҪ���жϴ����㣬��˴�������ѭ��
//
//	return 0;
//}

//do....whileѭ��
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

//��ϰ
//��n�Ľ׳�,������������
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

//��׳�֮��
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

//�Ż�֮��
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

//��һ�����������в���ĳ�����������n����дint binsearch(int x,int v[],int n);
//���ܣ���v[0]<...<v[n-1]�������в���x
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
			printf("�ҵ��ˣ��±�Ϊ%d ", i);
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ���");

	return 0;
}
