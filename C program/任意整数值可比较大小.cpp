/*
  时间：2021.07.02 16：42

  功能：输入任意整数值可比较大小

  目的：了解scanf的作用

*/

# include <stdio.h>

int main()
{
	int max(int x,int y);

	int a, b, c;

	scanf("%d %d", &a, &b);

	c = max(a,b);

	printf("max = %d\n", c);

	return 0;
}
int max (int x,int y)
{
	int z;

	if (x > y)z = x;

	else z = y;

	return (z);
}

/*vc++6.0输出结果
------------------------



------------------------
*/