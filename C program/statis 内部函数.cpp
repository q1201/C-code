/*时间：2021年9月21日22:05

  功能：修饰变量(局部变量与全局变量)和函数
  
  目的：
	
*/
# include <stdio.h>

void text()
{
	static int a = 1;                 //statis 修饰的局部变量，改变了局部变量的生命周期(本质上是改变了变量的存储类型:使变量存储方式由栈区变为静态区)
//	int a = 1;
	a++;

	printf("%d ", a);

}
//extern int t;                        //声明外部源文件

/*
int add(int x, int y)
{
	return x+y;
}
*/

int main(void)
{
	int a = 0;

/*
	int b = 100;
	int c = 200;

	int sum = add(b, c);
*/

	while(a<10)
	{
		text();
		a++;
	}

	printf("\n");
//	printf("t = %d\n", t);          //statis修饰的全局变量，使得全局变量只能在自己所在的源文件内部使用(全局变量可以在其他源文件内部使用，因其具有外部链接性；在被statis修饰后变为了内部链接)

//	printf("sum = %d\n", sum);     //同理与对全局变量修饰

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

2 3 4 5 6 7 8 9 10 11

---------------------------------
结论：
*/
