#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>

int main()
{
	int count = 15;

	int i = 0;
	int num = 0;
	int t = 1;

	for (i = 0; i < 31; t = (t << 1))  //t的二进制代码向左移动一位，左边舍去，右边补0
	{
		//printf("t = %d\n", t);
		if ((count & t) == t)          
		{
			num++;
		}
		i++;
	}
	printf("num = %d\n", num);
}