/*时间：2021年9月21日21:41

  功能：类型重定义
  
  目的：
	
*/
#include <stdio.h>

typedef unsigned int t;       //此时，t 等同于 unsigned int 类型


int main(void)
{
	unsigned int a = 100;
	t b = 1000;

	printf("b = %d\n", b);

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

b = 1000
	
---------------------------------
结论：
     
*/