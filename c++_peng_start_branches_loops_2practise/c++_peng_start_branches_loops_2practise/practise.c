#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep
/*#include<stdlib.h>*///system��ִ��ϵͳ�����һ��������stdlib ͷ�ļ���standard library��׼��ͷ�ļ���stdlib.h���涨�����������͡�һЩ���ͨ�ù��ߺ����� 
//��������size_t��wchar_t��div_t��ldiv_t��lldiv_t; ������EXIT_FAILURE��EXIT_SUCCESS��RAND_MAX��MB_CUR_MAX�ȵ�;
//���õĺ�����malloc()��calloc()��realloc()��free()��system()��atoi()��atol()��rand()��srand()��exit()�ȵȡ� ��������ݿ��Դ򿪱�������includeĿ¼�����stdlib.hͷ�ļ��鿴��
//int main()
//{
//	/*1. ���� n�Ľ׳ˡ�
//		2. ���� 1!+ 2!+ 3!+ ���� + 10!
//		3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
//		4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//		5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//		��ʾ��¼�ɣ�������ξ�����������˳�����*/
//	//first
//	int i = 1;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//       ret = ret*i;
//	  
//	}
//     printf("%d\n", ret);
//	return 0; 
//}
/////second
//int main()
//{
//		int i = 1;
//		int ret = 1;
//		int n = 0;
//		int sum = 0;
//		scanf("%d", &n);
//		for (i = 1; i <=n; i++)
//		{
//	       ret = ret*i;
//		   sum =sum+ret;
//		  
//		}
//	     printf("%d\n", sum);
//	return 0;
//}
////third
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//
//	for (i = 0; i <sz; i++)
//	{
//		if (i == k)
//		{
//			printf("�ҵ���;%d\n", i);
//			break;
//		}
//		else if (i==sz)
//		{
//			printf("�Ҳ���");
//			break;
//		}
//	}
//	return 0;
//}
///
//����1
//��д���룬��ʾ����ַ��������ƶ������м���

//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//whileѭ��ʵ��
//	//while (left <= right)
//	//{
//	//	Sleep(1000);
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//}
//	//forѭ��ʵ��
//	for (left = 0, right = strlen(arr1) - 1;
//		left <= right;
//		left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		
//	}
//    system("cls");
//	printf("welcome to bit...\n");
//	return 0;
//}
//�����������
int main()
{
	char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "123pzy") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");
	system("cls");
	printf("you are the fist one\n");
	return 0;
}
//int main()
//{
//	char psw[10] = { '1', '2', '3', 'p', 'z', 'y' };//��char psw[10]="123pzy";
//	printf("%s\n", psw);
//	return 0;
//}













