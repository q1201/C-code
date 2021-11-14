/*时间：2021年9月27日21:14

  功能：
  
  目的：
		  
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char password [20] = "0";	
	int i = 0;

	printf("请输入密码：");
	
	for (i=0; i<3; ++i)
	{	
		scanf("%s", password);
		
		if (strcmp(password, "66666666") == 0 )                      //strcmp对两个字符串进行比较(字符串常量或者字符串变量),实际上是对字符的ASCII码进行比较
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
		    printf("密码错误，请重新输入：");
		}
	}
	
	if (3 == i)
	{
		printf("密码错误，即将退出");
	}
	
	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

  
---------------------------------
结论：函数形式：int strcmp(const char* str1, const char* str2),str1和str2可以是字符串常量或者字符串变量，返回值为整形

	  返回结果如下规定：
						① str1 < str2，返回负值或者-1(VC++返回-1)
						
						② str1 == str2，返回0 

						③ str1 > str2，返回正值或者1(VC++返回10


*/
