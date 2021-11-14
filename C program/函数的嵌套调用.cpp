# include <stdio.h>

void b()
{
	printf("hehe\n");
}

void a()
{
    b();
//	void b();                          //函数只允许嵌套调用不允许嵌套定义
}

int main(void)
{
	a();

	return 0;
}