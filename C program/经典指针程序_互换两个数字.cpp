/*时间：2021年7月27日22:50

  功能：通过函数与指针互换数值
  
  目的：

*/
# include <stdio.h>

void f(int *p, int *q)                    //*p 等同于a， *q 等同于b
{
	int t;

	t = *p;                              //*p 时int类型， p 是int* 类型
	*p = *q;
	*q = t;
/*
   此时， *p 指向的变量的值 与 *q 指向的变量的值互换了
   即， p指向了b  q指向了a
*/

//	p = q;                            
//	printf("p = %d, q = %d\n", p, q);    //q是垃圾值，q赋给p, p也变成垃圾值

	return;
}

int main(void)
{
	int a = 6;
	int b = 8;
//	int * p = &a;
//	int * q = &b;

	f(&a, &b);

	printf("a = %d, b = %d\n", a , b);
//	printf("*p = %d, *q = %d\n", *p, *q);

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

a = 8, b = 6

---------------------------------
结论：
*/
