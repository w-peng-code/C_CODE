#define  _CRT_SECURE_NO_WARNINGS 1
//��һ����Ҫ���ܽ�һЩ����
//ʱ��Ӧ�÷���������������ϣ�ƭ�Լ����Ա�ƭ����
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
//int* ��p������
//int main()
//{
//
//	char a[10] = { 0 };
//	char* p = &a;
//	printf("%p\n", p);
//	return 0;
//
//}
//�ṹ���ѧϰ �������ӵĶ����Լ�strcpy���÷���
struct man
{
	char name[10];
	int age;
	char sex[] ;
};//*
int main()
{
	struct man s = { "����",18,"��" };
	int* p = &s;
	int b = 0;
	char c[10] = { 0 };
    scanf("%d",&b);
	scanf("%s", &c);
	s.age = b;
	strcpy(s.name, c);
	printf("������%s ���䣺%d �Ա�%s\n", s.name, s.age, s.sex);
	return 0;
}







