# include <stdio.h>
# include <string.h>

int main()
{
	char a[20] = { 0 };
	char b[20] = "bit";

	strcpy (a, b);                      //char *strcpy(char *dest, const char *src) 把从src地址开始且含有NULL结束符的字符串复制到以dest开始的地址空间

	printf("%s\n", strcpy (a, b));                                   //链式访问：将一个函数的返回值作为另一个函数的参数


	printf("%d\n", printf("%d", printf("%d", 43)));                  //printf函数的返回值是屏幕上打印字符的个数

	return 0;
}