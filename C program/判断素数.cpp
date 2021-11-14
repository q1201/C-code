# include <stdio.h>
# include <math.h>

int main(void)
{

	int i = 0;
	int num = 0;
	int m, n = 0;

	printf("请输入范围：");

	scanf("%d %d", &m, &n);

	printf("\n");

	for (i=m; i<=n; i+=2)                        //i += 2; 等同于 i = i+2; 偶数一定不是素数(质数)
	{
		int flag = 1;                            //表示为i素数
		int j = 0;
		int sql = (int)sqrt(1.0 * i);            //1.0*n的目的是隐式转换成浮点数,开根号后再强制转换成整型

/*
  若i不是质数，那么i必然可以表示成两个数（除了1和它本身）相乘，这两个数必然有一个小于或等于i的平方根，另一个大于或等于i的平方根,故i % j == 0必然成立；
    eg：i: 16 == 2 * 8； √16 == 4； 2 < 4, 8 > 4; 16 % 2 == 0 

  若i是质数，那么i一定不可以表示成两个数（除了1和它本身）相乘，i一定大于aqrt(i)[除1以外]，故i % j == 0一定不成立
    eg：i: 17            √17 ≈ 4.123; 17 > 4.123; 17 % 4.123 ≈ 0.123
*/
		for (j=2; j<=sql; ++j)               //double sqrt(double x):开平方函数，头文件为 math.h, 返回值是 double 型
		{
			if (i % j == 0)
			{
				flag = 0;                        //表示i不为素数
				break;
			}
		}
//		if (i == j)
		if (1 == flag)
		{
			num++;
			printf("%d ", i);
		}
	}
	printf("\nnum = %d\n", num);

	return 0;
}

/*
  判断素数的方法：
                  只能被1和本身整除 (2 到 i-1)
*/