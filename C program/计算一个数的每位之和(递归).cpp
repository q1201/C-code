/*
  时间：2021年10月15日22:50

  功能：

  目的：熟练递归

*/
# include <stdio.h>

int DigitSum(int num)
{
	if (num > 9)
	{
		 return DigitSum(num / 10) + (num % 10);
	}
	else
	{
		return num;
	}
}

int main()
{
	int n = 0;

	printf("请输入一个正整数：");

	scanf("%d", &n);

	 int sum = DigitSum(n);

	printf("%d\n", sum);

	return 0;
}
/*
VC++6.0的输出结果为：
--------------------------------



--------------------------------
*/