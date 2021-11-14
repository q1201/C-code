/*时间：2021年7月19日21:47

  功能：判别输入的数字是否为回文数
  
  目的：了解while循环的流程

  格式：while (表达式)
             循环语句；
	
*/
# include <stdio.h>

int main(void)
{
	int val;
	int m;
	int sum = 0;

	printf("请输入需要判断的数字数字：");
	scanf("%d", &val);

	while (m)                          //计算机中零为假，其余都为真，执行到零时会终止循环
	{
		sum = sum * 10 + m%10;       
	    m /= 10;                      //等价于m = m/10
	}

	if (sum == val)
	    printf("corrct!\n");
	else
		printf("false!\n");

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------


---------------------------------
结论：
*/
