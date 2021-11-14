/*时间：2021年7月25日22:04

  功能：用两个函数来实现求1到某个数字(包括本数字)之间所有的素数，并将其输出
  
  目的：使代码量更少，可重用性更高
	
*/
# include <stdio.h>

//本函数的功能是: 判断m是否为素数，是返回true，不是则返回false
bool IsPrime(int m)
{
	int i;
	
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (m == i)
		return true;
	else
		return false;
}


//本函数的功能是把1到n之间所有的素数在显示器上输出
void TraverseVal(int n)                               //TraverseVal(遍历):把指定值以内的数都执行一遍
{
	int i;
	
	for (i=2; i<=n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
	//	printf("哈哈!\n");                            //输入 1 会输出“哈哈！”，1在此for循环中断不输出任何值
}

int main(void)
{
	int val;
	
	scanf("%d", &val);
	
	TraverseVal(val);                  
	
	return 0;	
}
/*
VC++6.0输出结果：
---------------------------------

  
---------------------------------
结论：
*/
