#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("*********************\n");
//	printf("*  1.play   0.exit  *\n");
//	printf("*********************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;//�������������
//	ret = rand() % 100 + 1;//����1��100֮��������
//	
//	while (1)
//	{
//		printf("����������:");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ,�¶���!");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//��ʱ����������������������ʼ��
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//goto��� ��������
//��ʱ��������ѭ��
//int main()
//{
//	again:
//	printf("hello bit!\n");
//	goto again;
//
//	return 0;
//}

//��ʱ���������
//int main()
//{
//	printf("hello bit!\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//
//	return 0;
//}

//goto���ʵ��Ӧ�ð���
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬���ĵ��Խ���һ�����ڹػ��������������Խ����������:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}