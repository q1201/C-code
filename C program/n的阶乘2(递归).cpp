# include <stdio.h>

int fac(int t)
{
	if (t <= 1)
	{
		return 1;
	}
	else
	{
		return t * fac(t-1);
	}
}

int main(void)
{
	int n = 0;

	scanf("%d", &n);

	printf("%d\n", fac(n));

	return 0;
}
