/*ʱ�䣺2021��7��27��22:50

  ���ܣ�ͨ��������ָ�뻥����ֵ
  
  Ŀ�ģ�

*/
# include <stdio.h>

void f(int  i, int  j)                 
{
	int t;

	t = i;                              
	i = j;
	j = t; 
/*
   ����ִ����ϣ���ִ�еĽ���ᱻ�ͷ�
*/

//	printf("i = %d, j = %d\n", i , j);

	return;
}

int main(void)
{
	int a = 6;
	int b = 8;
//	int * i = &a;
//	int * j = &b;

	f(a, b);

	printf("a = %d, b = %d\n", a , b);
//	printf("*i = %d, *j = %d\n", *i, *j);

	return 0;
}
/*
VC++6.0��������
---------------------------------

a = 6, b = 8

---------------------------------
���ۣ�
*/
