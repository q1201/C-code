/*
  时间：2021年7月19日22:42

  功能：计算斐波那契序列每一项的值

  定义：斐波那契数列是一组第一位和第二位为1，从第三位开始，后一位是前两位和的一组递增数列 【F(n)=F(n-1)+F(n-2)(n ≥ 2，n ∈ N*)】  
*/

 //不够好，效率太低

# include <stdio.h>

int fib(int num)
{
	if (num <= 2)
	{
		return 1;
	}
	else
	{
		return fib(num-1) + fib(num-2);
	}
}

int main(void)
{
	int n = 0;

	printf("请输入项数：");

	scanf("%d", &n);

	printf("%d\n", fib(n));

	return 0;
}

/*
VC++6.0输出结果：
---------------------------------


---------------------------------
结论：
*/
                     