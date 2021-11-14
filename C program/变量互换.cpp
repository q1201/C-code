/*时间:2021年7月15日22:18

  功能：变量互换

  目的：

*/
# include <stdio.h>

int main()
{
	int a = 3;
	int b = 7;
	int t;

	t = a;
	a = b;
	b = t;
	printf("a= %d, b = %d\n", a, b);

	return 0;

}
/*VC++6.0输出结果：
------------------------
a= 7, b = 3
------------------------
结论：
*/