#define  _CRT_SECURE_NO_WARNINGS 1
//#define MAX 10 #define 定义的标识符常量//没分号
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[MAX] = { 0 };
//	//int n = 10;
//	////const int n = 10;(具有常属性但仍是变量，称常变量。)
//	////int arr[必须有常量表达式不能有运算符n=10，如果定义变量会提示常量大小为零不能分配。n=0] = { 0 };
//	//int arr[] = { 0 };//不写，写都可以但是不能瞎写。
// //   printf("hellow\n");
//	//return 0;
//}
//
//enum Color//enum 为枚举关键词 颜色的三原色是红黄蓝，但是可以随便定义三原色。结果也是012
//{
//	RED,//注意用逗号
//	YELLOW,
//	GREEN
//};//注意有分号
//int main()
//{
//	enum Color color = GREEN;
//	printf("%d\n", GREEN);
//	/*
//	printf("%d\n", RED);
//	printf("%d\n", YELLOW);
//	printf("%d\n", GREEN);*/
//	return 0;
//}
//字符串，“空字符串”数组、注释 、转义字符、Ascll码表、strlen（）··转义序列自己查
//int main()
//{
//	char arr1[] = "abc";//字符串可以放数组里
//	char arr2[] = { 'a','b', 'c', '\0'};//0也行
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//监视器的用法一直按f10

//int main()//strlen()用法
//{
//	int a = 1;
//	scanf("%d", &a);
//    printf("%d\n", strlen("c:\test\32\test.c"));
//	/*printf("%d\n",sizeof(a));*/
//	printf("%d\n", a);
//	return 0;
//}
//选择语句除了成功他别无选择
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？（1/0）>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("成功\n");
//	else
//		printf("失败\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 10)
//	{
//		printf("失败");
//		line++;
//	}
//	printf("成功\n");
//	return 0;
//}
//加法函数
//int add(int a, int b)//自定义函数
//{
//	return a + b;//双目操作符 左右两个操作数
//}
//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//数组
//int main()
//{
//
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};//定义一个存放10个整数数字的数组一共40个字节，用sizeof(arr)
//	int i = 0;
//	while (i < 10)
//	{
//
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);
//	return 0;
//}
//操作符 移位操作符（<<,>>）位操作符&,|,^(按位与，按位或，按位异或)，单目双目三目操作符
//\号取商，%取模（余数）
//移位操作符是00000001》00000010针对char 一个字符
//位操作符 & 001 101》001，，，，| 001 101》101，，，， ^ 001 101》对应的二进制位同为0，不同为1》100
//赋值操作符，即给自己赋值
//单目操作符之反操作符 就是0为假，1为真