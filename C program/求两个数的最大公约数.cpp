# include <stdio.h>

int main(void)
{
/*
	int a = 0;
	int b = 0;
	int min = 0;

	scanf("%d %d", &a, &b);

	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}

	while (1)
	{
		if (a % min == 0 && b % min == 0)                  //&&(并且)
		{
			printf("%d\n", min);
			break;
		}
		min--;
	}
*/

	//辗转相除法
	int m = 0;
	int n = 0;
	int t = 0;

	scanf("%d %d", &m, &n);

	while (t = m%n)                            //取余为零退出循环
	{
		m = n;
		n = t;
	}
	printf("最大公约数为：%d\n ", n);

	return 0;
}