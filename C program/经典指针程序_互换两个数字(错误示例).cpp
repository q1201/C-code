/*时间：2021年7月27日22:50

  功能：通过函数与指针互换数值
  
  目的：

*/
# include <stdio.h>

void f(int  i, int  j)                 
{
	int t;

	t = i;                              
	i = j;
	j = t; 
/*
   函数执行完毕，所执行的结果会被释放
*/

//	printf("i = %d, j = %d\n", i , j);

	return;
}

int main(void)
{
	int a = 6;
	int b = 8;
//	int * i = &a;
//	int * j = &b;

	f(a, b);

	printf("a = %d, b = %d\n", a , b);
//	printf("*i = %d, *j = %d\n", *i, *j);

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

a = 6, b = 8

---------------------------------
结论：
*/
