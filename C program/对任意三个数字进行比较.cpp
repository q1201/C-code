/*时间：2021年7月15日22:59

  功能：对任意三个数字进行从大到小排列

  目的：

*/
# include <stdio.h>

int main()
{
	int a, b, c;     //等价于int a; int b; int c;
	int t;

	printf("请输入第三个数字，中间用空格隔开：");
	scanf("%d %d %d",&a, &b, &c);

	if (a<b)
	{
		t = a;
		a = b;
		b = t;
	}

	if (a<c)
	{
		t = a;
	    a = c;
		c = t;
	}

	if (b<c)
    {
		t = b;
	    b = c;
		c = t;
	}

	printf("%d, %d, %d\n", a, b, c);

	return 0;
}
/*VC++6.0输出结果为：
------------------------

------------------------
结论：
*/