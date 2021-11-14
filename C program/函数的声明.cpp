/*时间：2021年7月24日21:34

  功能：
  
  目的：
	
*/
# include <stdio.h>    //对库函数的声明是 # include <库函数所在的文件的名字.h>        std--standard标准   i--input输入  o--output输出   .h--头文件

void g(int);           //前置声明一般不写形参

void f(void);           //如果把函数定义写在函数调用下面，必须加前置声明        函数的声明是一个语句所以必须加分号

int main(void)
{
	int a = 8;

	g(a);

	f();

	return 0;

}
void f(void)
{
	printf("哈哈哈！\n");

	return;
}

void g(int q)
{
	printf("%d\n", q);

	return;
}

/*
VC++6.0输出结果：
---------------------------------

 8
哈哈哈！

---------------------------------
结论：
*/
