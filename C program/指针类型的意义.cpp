/*
  时间：2021年11月10日23:20

  功能：
  
  目的：	
*/
# include <stdio.h>

int main()
{
	//int * pa;
	//char * pr;
	//float * ps;

	//printf("%d\n", sizeof(pa));   //输出结果 4
	//printf("%d\n", sizeof(pr));   //输出结果 4 
	//printf("%d\n", sizeof(ps));   //输出结果 4

	//1.指针类型决定了指针解引用权限有多大
	int p = 0X11223344;
	char pl = 0X11223344;


	int * pi = &p;
	char * po = &pl;

	*pi = 0;    //0X00000000, 整型指针解引用访问4个字节
	*po = 0;    //0X00223344，字符指针解引用访问1个字节
	


	//2.指针类型决定了指针走一步有多远(步长)  
	int arr[10] = { 0 };
	char str[10] = { 0 };

	int * pc = arr;
	char * pt = str;

	printf("%p\n", pc);      //输出结果 0019FEFC
	printf("%p\n", pc+1);    //输出结果 0019FF00
	printf("%p\n", str);     //输出结果 0019FEF0
	printf("%p\n", str+1);   //输出结果 0019FEF1

	return 0;
}
/*
在VC++6.0中的输出结果是:
------------------------------

-------------------------------
总结：     
*/             
