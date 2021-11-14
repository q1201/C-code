#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>

int main()
{
	//除法
	int a = 6 / 5;           
	printf("%d\n", a);       //输出结果：1

	int b = 4 / 5;
	printf("%d\n", b);       //输出结果：0

	float c = 6 / 5;
	printf("%f\n", c);       //输出结果：1.000000

	float d = 6.0f / 5;      //编译器默认小数为double类型，加 f 类型转换
	printf("%f\n", d);       //输出结果：1.200000

	double e = 6.0 / 5;
	printf("%lf\n", e);      //输出结果：1.200000

	//结论：对于 / 操作符若两个数都为整数，执行整数除法；而只要有一个数是浮点数，执行浮点数除法


	//取余
	int x = 7 % 6;
	printf("%d\n", x);       //输出结果：1

	int z = 7 % -6;     
	printf("%d\n", z);       //输出结果：1

	//int y = 7.0 % 6;       //error

	//结论：% 两个操作数只能是整数，返回整除后的余数，不能对 0 取余，可以对负整数取余(结果与对正整数相同)


	return 0;
}