# include <stdio.h>

int main(void)
{
	extern int a;                   //extern用来声明外部符号，实现跨源文件

	printf("a = %d\n", a);

	return 0;
}