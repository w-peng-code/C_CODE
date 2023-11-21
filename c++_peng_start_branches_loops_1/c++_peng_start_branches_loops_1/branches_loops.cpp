#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//奇数
//{
//	int i = 1;
//	while (i < 100);
//	{
//		if (i%2==1)
//		    printf("%d\n", i);
//        i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<100)
//	{
//		printf("%d", i);
//	i++;
//	}
//	return 0;
//}
//{1到100循环
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//法二、不同的思路
// int main()
//{
//	int i = 1;
//	while (i<100)
//	{
//		printf("%d", i);
//	i+=2;
//	}
//	return 0;
//}
//switch语句
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3: 
//		switch (n)
//		{//switch允许嵌套
//		case 1: n++;
//		case 2: m++, n++; break;
//		}
//	case 4: m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d n=%d\n", m, n);
//
//	return 0;
//}
//循环语句

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;//break;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//int main()
//{
//	char ch = '0';//基于x86的系统可以使用扩展的ascll码
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//for是最好的
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 4; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;
}








