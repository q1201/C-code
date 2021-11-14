# include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int t = 0;
	int i = 0;

	scanf("%d %d", &a, &b);

	i = a * b;

	while (t = a%b)
	{
		a = b;
		b = t;
	}
	printf("%d", i/b);

	return 0;
}