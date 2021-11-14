# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(void)
{
	char name [20] = { 0 };
	
	system ("shutdown -s -t 60");                                    //shutdown -s (关机) -t 60 (时间为60秒)
 	
	while (1)
	{
		printf("您的电脑将在一分钟后关机，请输入“我是猪”取消： ");

		scanf("%s", name);

		if (strcmp(name, "我是猪") == 0)
		{
			system ("shutdown -a");                                  //shutdown -a (取消关机)； system() 执行系统命令的函数，头文件为stdlib.h
			break;
		}
		printf("\n");
	}	
		return 0;
}	