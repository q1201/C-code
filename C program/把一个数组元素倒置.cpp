/*时间：2021年7月21日22:01

  功能：
  
  目的：

*/
# include <stdio.h>

int main()
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};        //{a0, a1, a2, a3, a4, a5, a6}
	int i;
	int j;
	int t;
	
	i = 0;                                   //a0
	j = 6;                                   // a6
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		
		++i;
		--j;
	}
	for (i=0; i<7; ++i)
		printf("%d\n", a[i]);
	
	return 0;
}
/*
VC++6.0输出结果：
---------------------------------
7
6
5
4
3
2
1
---------------------------------
结论：
*/
