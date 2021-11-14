# include <stdio.h>

int main(void)
{
	int i = 10;
	int j = 25;
	int t;
	int * p;
	int * q;

	p = &i;
	q = &j;
	//*q = p; //error 语法编译会出错
	t = *q;
    *q = *p;  //error
	*p = t;
//	p = q;  //q是垃圾值，q赋给p, p也变成垃圾值
	printf("*q = %d, *p = %d\n", *q, *p);   //13行
		/*
			q的空间是属于本程序的，所以本程序可以读写q的内容， 
			但是如果q内部是垃圾值，则本程序不能读写*q的内容
			因为此时*q所代表的内存单元的控制权限并没有分配给本程序
			所以本程序运行到13行时就会立即出错
		*/
	return 0;
}