#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep
/*#include<stdlib.h>*///system是执行系统命令的一个函数。stdlib 头文件即standard library标准库头文件。stdlib.h里面定义了五种类型、一些宏和通用工具函数。 
//类型例如size_t、wchar_t、div_t、ldiv_t和lldiv_t; 宏例如EXIT_FAILURE、EXIT_SUCCESS、RAND_MAX和MB_CUR_MAX等等;
//常用的函数如malloc()、calloc()、realloc()、free()、system()、atoi()、atol()、rand()、srand()、exit()等等。 具体的内容可以打开编译器的include目录里面的stdlib.h头文件查看。
//int main()
//{
//	/*1. 计算 n的阶乘。
//		2. 计算 1!+ 2!+ 3!+ …… + 10!
//		3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//		4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//		5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//		提示登录成，如果三次均输入错误，则退出程序*/
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
//			printf("找到了;%d\n", i);
//			break;
//		}
//		else if (i==sz)
//		{
//			printf("找不到");
//			break;
//		}
//	}
//	return 0;
//}
///
//代码1
//编写代码，演示多个字符从两端移动，向中间汇聚

//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//while循环实现
//	//while (left <= right)
//	//{
//	//	Sleep(1000);
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//}
//	//for循环实现
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
//输入密码代码
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
//	char psw[10] = { '1', '2', '3', 'p', 'z', 'y' };//或char psw[10]="123pzy";
//	printf("%s\n", psw);
//	return 0;
//}













