//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
    //操作符：种类很多单目，双目，三目操作符运算所需变量：【!】逻辑反操作符 ++ & *(指针)等【=-*/%】等【 ？ ：】只有条件表达式
//& *取地址，间接访问操作符(解引用操作符)
	//int a = 10;
	//int *str = &a;//使用指针所指向的变量
	//printf("%d %d\n", a,*str);
    //return 0;
	//“*”是解引用操作，操作指针指向的变量
//按位与、异或、或 &^|是二进制位操作符
//与是同为真，异或是只有异为真，或是一为真都为真	
//逻辑操作符与，或，&&  || 
//左右关系式a为真，b为真所以为真 一个为假都是假。或是一为真都为真。
	//int a = 1;
	//int b = 1;
	//printf("%d %d\n", a, b);
	//if (a&&++b)
	//{
	//	printf("hehe\n");
	//}
	//printf("%d %d\n", a, b);
	//return 0;
//sizeof(a)等价sizeof a ，说明*和sizeof为操作符不是函数，sizeof(int)不等价于sizeof int。sizeof(a=10),a=10是不会被运算的
	//关键字
//	auto  break  case  char  const  continue  default  do  double else  enum 
// extern float  for  goto  if  int  long  register   return  short  signed（有符号位）
//sizeof  static struct（结构体关键字）  switch  typedef（类型定义，类型重命名把张三叫成小三） union  unsigned  void  volatile  while
//struct和指针
	//struct stu
	//{
	//	char name[10];
	//	int age;
	//	char sex[2];
	//};
	  //打印结构体信息
	  //struct Stu s = { "张三"， 20， "男"， "20180101" };
	  //.为结构成员访问操作符
	  //printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
	  //->操作符
	  //struct Stu *ps = &s;
	  //printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps ->id);

	//}s;
	//int main()
	//{
	//    s.age = 20;
	//	struct stu *p = &s;
	//	printf("%d\n", s.age);
	//	printf("%d\n", p->age);
	//	return 0;
	//}
	
  //static是用来修饰变量和函数的
//1. 修饰局部变量 - 称为静态局部变量2. 修饰全局变量 - 称为静态全局变量3. 修饰函数 - 称为静态函数	
//局部静态变量，全局静态变量
//static修饰局部变量改变了变量的生命周期让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束。
//百度百科静态static---->相当详细
	//define定义标识符常量
//#define MAX 1000
//	//define定义宏
//#define ADD(x, y) ((x)+(y))
//#include <stdio.h>
//	int main()
//	{
//		int sum = ADD(2, 3);
//		printf("sum = %d\n", sum);
//
//		sum = 10 * ADD(2, 3);
//		printf("sum = %d\n", sum);
//
//		return 0;
//	}
//现在的电脑都是64位了就是64位地址线和数据线有2^64个地址名字也就是说有2^64个内存地址位2^64个字节17,179,869,184个G
//只能说牛逼
//}

























