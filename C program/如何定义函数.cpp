/*时间：2021年7月23日10:19

  功能：
  
  目的：了解如何定义函数

  格式：函数的返回值的类型(也称函数的的类型) 函数的名字(函数的形参列表)
        {
		       函数的执行体；     
		}

  注意：函数不写返回类型，默认为int类型
	
*/
# include <stdio.h>
void max(int i, float j)                   //void表示函数没有返回值 max表示函数的名字   i 和 j 表示函数的形式参数，简称形参
{                               
	if (i > j)
		printf("%d\n", i);              //{}内为函数的执行体
	else
		printf("%f\n", j);
}
int main(void)
{
	int a, b, c, d, e, f;

	a = 1, b = 3, c = 7, d = 2, e = 78, f = -7;
	max(a, b);
	max(c, d);
	max(e, f);
    max(10, 15.3);                     //100 和 200 成为实际参数，简称实参     要求与形参个数相同，位置一一对应，数据类型必须互相兼容

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

3
7
78

---------------------------------
结论：
*/
