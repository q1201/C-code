# include <stdio.h>

int main(void)
{
	char password [20] = { 0 };

	printf("请输入密码：");

	scanf("%s", password);                            //数组变量名为数组第一个元素的地址

	printf("请确认密码Y/N：");

//	getchar ();                                       //此语句只能清理缓冲区中一个字符

	int tmp = 0;

	while (tmp = getchar() != '\n')                   //清理缓冲区中的多个字符
	{
		;                                             //空语句
	}

	int ch = getchar ();

	if (ch == 'Y')
	{
		printf("确认成功！\n");
	}
	else
		printf("密码错误！\n");

	return 0;
}