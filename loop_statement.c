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
//			continue;	//��i=5ʱ�������ж��˴�ѭ��������������while�������жϣ�Ȼ�����ִ�У�������ѭ��.
//		printf("%d\n", i);
//		i++;			//����i++����if���֮ǰ�������ѭ��������������ӡ����5.
//	}
//	return 0;
//}

//getchar��ʹ��
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
		//��ȡ��ctrl + zʱΪEOF
		//EOF -- end of file �ļ�������־ ֵΪ-1
		printf("%c", ch);

	return 0;
}