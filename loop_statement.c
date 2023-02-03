#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;	//当i=5时，程序判定此次循环结束，并跳回while处进行判断，然后继续执行，陷入死循环.
//		printf("%d\n", i);
//		i++;			//若将i++提至if语句之前则打破死循环，并且跳过打印数字5.
//	}
//	return 0;
//}

//getchar的使用
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c ", ch);
//
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		//获取到ctrl + z时为EOF
		//EOF -- end of file 文件结束标志 值为-1
		printf("%c", ch);

	return 0;
}