/*
  时间：2021年10月08日20:51

  功能：计算斐波那契序列每一项的值

  介绍：斐波那契数列是一组第一位和第二位为1，从第三位开始，后一位是前两位和的一组递增数列
*/
# include <stdio.h>

int fib(int m)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (m > 2)
	{
		c = a + b;
		a = b;
		b = c;
		m--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;

	printf("请输入项数：");

	scanf("%d", &n);

	ret = fib(n);

	printf("ret = %d\n", ret);

	return 0;
}

/*
# include <stdio.h>

int main(void)
{
	int i;
	int f1, f2, f3;
	int n;                                       //项数

	f1 = 1;
	f2 = 1;

	printf("请输入您需要求的项数:");
	scanf("%d",&n);

	if (1 == n)
	{  
	   f3 = 1;
	}
    else if (2 == n)
	{
       f3 = 1;
	}
	else
	{
		for (i=3; i<=n; ++i)                     //定义i<n的话，i=3 < 3 不成立，输出-858993460
		{
			f3 = f1 + f2;
			f1 = f2;
	        f2 = f3;
		}
	}
	printf("%d\n", f3);

	return 0;
}
*/

/*
VC++6.0输出结果：
---------------------------------


---------------------------------
结论：
*/
     

