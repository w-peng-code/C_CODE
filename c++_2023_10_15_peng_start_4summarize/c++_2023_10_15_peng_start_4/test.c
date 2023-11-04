#define  _CRT_SECURE_NO_WARNINGS 1
//这一节主要是总结一些代码
//时间应该放在有意义的事情上，骗自己可以别骗别人
#include <string.h>
#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//}
//int* 是p的类型
//int main()
//{
//
//	char a[10] = { 0 };
//	char* p = &a;
//	printf("%p\n", p);
//	return 0;
//
//}
//结构体的学习 描述复杂的对象以及strcpy的用发法
struct man
{
	char name[10];
	int age;
	char sex[] ;
};//*
int main()
{
	struct man s = { "张三",18,"男" };
	int* p = &s;
	int b = 0;
	char c[10] = { 0 };
    scanf("%d",&b);
	scanf("%s", &c);
	s.age = b;
	strcpy(s.name, c);
	printf("姓名：%s 年龄：%d 性别：%s\n", s.name, s.age, s.sex);
	return 0;
}







