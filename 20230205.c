#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//���ַ���������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);	//����Ԫ�ظ���
//	int left = 0;							//��ʾ���±�
//	int right = sz - 1;						//��ʾ���±�
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("�Ҳ���\n");
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		//ִ��ϵͳ���� cls��ʾ�����Ļ
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//ģ���û���¼������ֻ�ܳ�������
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		//if (password == "123456")	==���������ж������ַ����Ƿ����,Ӧ������һ���⺯��strcmp
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}

	return 0;
}