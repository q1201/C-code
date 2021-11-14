# include <stdio.h>

int main(void)
{
//	int i = 0;
	int n = 0;
	int t = 0;
	int ret = 1;
	int sum = 0;

	scanf("%d", &n);

/*
	for (t=1; t<=n; ++t)
	{
 		ret = 1;
		for (i=1; i<=t; ++i)
		{
			ret *= i;

			printf("one = %d ", ret);
		}
		sum += ret ; 

	}
*/
	for (t=1; t<=n; t++)
	{
		ret *= t;
		sum += ret;

		printf("ret = %d, one = %d ", ret, sum);
	}

	printf("\n\n");

	printf("sum = %d\n", sum);

	return 0;
}