#define  _CRT_SECURE_NO_WARNINGS 1
//#define MAX 10 #define ����ı�ʶ������//û�ֺ�
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[MAX] = { 0 };
//	//int n = 10;
//	////const int n = 10;(���г����Ե����Ǳ������Ƴ�������)
//	////int arr[�����г������ʽ�����������n=10����������������ʾ������СΪ�㲻�ܷ��䡣n=0] = { 0 };
//	//int arr[] = { 0 };//��д��д�����Ե��ǲ���Ϲд��
// //   printf("hellow\n");
//	//return 0;
//}
//
//enum Color//enum Ϊö�ٹؼ��� ��ɫ����ԭɫ�Ǻ���������ǿ�����㶨����ԭɫ�����Ҳ��012
//{
//	RED,//ע���ö���
//	YELLOW,
//	GREEN
//};//ע���зֺ�
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
//�ַ����������ַ��������顢ע�� ��ת���ַ���Ascll���strlen��������ת�������Լ���
//int main()
//{
//	char arr1[] = "abc";//�ַ������Է�������
//	char arr2[] = { 'a','b', 'c', '\0'};//0Ҳ��
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//���������÷�һֱ��f10

//int main()//strlen()�÷�
//{
//	int a = 1;
//	scanf("%d", &a);
//    printf("%d\n", strlen("c:\test\32\test.c"));
//	/*printf("%d\n",sizeof(a));*/
//	printf("%d\n", a);
//	return 0;
//}
//ѡ�������˳ɹ�������ѡ��
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ɹ�\n");
//	else
//		printf("ʧ��\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 10)
//	{
//		printf("ʧ��");
//		line++;
//	}
//	printf("�ɹ�\n");
//	return 0;
//}
//�ӷ�����
//int add(int a, int b)//�Զ��庯��
//{
//	return a + b;//˫Ŀ������ ��������������
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
//����
//int main()
//{
//
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};//����һ�����10���������ֵ�����һ��40���ֽڣ���sizeof(arr)
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
//������ ��λ��������<<,>>��λ������&,|,^(��λ�룬��λ�򣬰�λ���)����Ŀ˫Ŀ��Ŀ������
//\��ȡ�̣�%ȡģ��������
//��λ��������00000001��00000010���char һ���ַ�
//λ������ & 001 101��001��������| 001 101��101�������� ^ 001 101����Ӧ�Ķ�����λͬΪ0����ͬΪ1��100
//��ֵ�������������Լ���ֵ
//��Ŀ������֮�������� ����0Ϊ�٣�1Ϊ��