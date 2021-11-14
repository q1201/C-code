# include <stdio.h>

int main(void)
{
    int a = 0, b = 0;
    scanf("%d:%d", &a, &b);
    
    if(a>=0 && a<12)
    {
		if(b<=60)
		{
			printf("%d:%d AM\n", a, b);
		}
		else if(b>60 && b<120)
		{
			printf("%d:%d AM\n", a+1, b-60);
		}
                       
    }
    else if(a>=12 && a<24)
    {
		if(a==12)
		{
			if(b<=60)
			{
			printf("%d:%d PM\n", a, b);
			}
			else if(b>60 && b<120)
			{
			printf("%d:%d PM\n", a+1, b-60);
			}
		}
		else
		{
			if(b<=60)
			{
			printf("%d:%d PM\n", a-12, b);
			}
			else if(b>60 && b<120)
			{
			printf("%d:%d PM\n", a-11, b-60);
			}
		}
	}
    return 0;
}