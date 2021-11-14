# include <stdio.h>
# include <stdlib.h>

int Fib(int n)
{
	if (n < 3)
	{		
		return n;
	}	
	else
	{	
		return Fib(n - 2) + Fib(n - 1);	
	}
}

int main(void)
{	
	int n = 0;
	int ret = 0;
	
	printf("请输入跳的台阶数：");
	
	scanf("%d", &n);
	
	ret = Fib(n);
	printf("%d\n", ret);
	
	system("pause");

	return 0;
}



