# include <stdio.h>

void hanni(int n, char a, char b, char c)
{
	if (1 == n)
	{
		printf("%c --> %c\n", a, c);
	}
	else
	{		
		hanni(n-1, a, c, b);
		printf("%c --> %c\n", a, c);

		hanni(n-1, b, a, c);

	}

}

int main(void)
{
	int N = 0;

	printf("ÇëÊäÈëººÅµËşµÄ²ãÊı£º");

	scanf("%d", &N);

	hanni(N, 'A', 'B', 'C');

	return 0;
}