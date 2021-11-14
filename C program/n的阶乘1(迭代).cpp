# include <stdio.h>

int main(void)
{
	int i = 0;
	int n = 0;
	int ret = 1;

	scanf("%d", &n);

	for (i=1; i<=n; ++i)
	{
		ret *= i;                                //µÈÍ¬ÓÚ ret = ret * i;

		printf("one = %d ", ret);
	}
	printf("\n");

	printf("ret = %d\n", ret);

	return 0;
}
