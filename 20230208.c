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
//	int guess = 0;//接受输入的数字
//	ret = rand() % 100 + 1;//生成1到100之间的随机数
//	
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d", &guess);
//
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜,猜对了!");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//拿时间戳来设置随机数的生成起始点
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏过程
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//goto语句 尽量少用
//此时会陷入死循环
//int main()
//{
//	again:
//	printf("hello bit!\n");
//	goto again;
//
//	return 0;
//}

//此时会跳过你好
//int main()
//{
//	printf("hello bit!\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//
//	return 0;
//}

//goto语句实际应用案例
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，您的电脑将在一分钟内关机，输入我是猪以解除，请输入:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
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