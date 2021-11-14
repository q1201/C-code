/*时间：2021年7月28日23:21

  功能：
  
  目的：
	
*/

# include <stdio.h>

void convert(int * p, int * q)
{
	int t;

	*p = 3;
	*q = 9;

	return;
}

int main(void)
{
	int a = 6, b = 8;

	convert(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
/*
在VC++6.0中的输出结果是:
------------------------------

a = 3, b = 9

-------------------------------
总结：
	
*/