/*时间：2021年7月23日21:44

  功能：判断一个数是不是素数
  
  目的：
	
*/

# include <stdio.h>

bool IsPrime(int val)           
{
	int i;                          //在一个函数内部定义的变量，只能在本函数使用
	
	for (i=2; i<val; ++i)
	{
		if (val%i == 0)
			break;                 //终止循环
	}
	if (i == val)
		return true;
	else
		return false;	
}

int main(void)
{
	int i;                        //不同函数内定义相同变量名互不冲突
	
	scanf("%d", &i);
	
    if (IsPrime(i))              //相同函数名(同类型参数) 可调用函数       
		printf("yes\n");
    else
		printf("no\n");

/*
# include <stdio.h>

int main()
{
	if (1)                            1代表真，所以会执行if的语句
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}	
*/	

/*	scanf("%d", &val);
    for (i=2; i<val; ++i)
    {	
		if (val%i == 0)
		    break;
	}
	if (i == val)
		printf("ture\n");
	else
		printf("false\n");	
*/	
	return 0;
}
/*
VC++6.0输出结果：
---------------------------------


---------------------------------
结论：
*/
