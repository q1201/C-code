/*ʱ�䣺2021��7��28��23:21

  ���ܣ�
  
  Ŀ�ģ�
	
*/

# include <stdio.h>

void convert(int * p, int * q)
{
	int t;

	*p = 3;
	*q = 9;

	return;
}

int main(void)
{
	int a = 6, b = 8;

	convert(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
/*
��VC++6.0�е���������:
------------------------------

a = 3, b = 9

-------------------------------
�ܽ᣺
	
*/