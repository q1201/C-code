/*
  ʱ�䣺2021��10��08��20:51

  ���ܣ�����쳲���������ÿһ���ֵ

  ���ܣ�쳲�����������һ���һλ�͵ڶ�λΪ1���ӵ���λ��ʼ����һλ��ǰ��λ�͵�һ���������
*/
# include <stdio.h>

int fib(int m)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (m > 2)
	{
		c = a + b;
		a = b;
		b = c;
		m--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;

	printf("������������");

	scanf("%d", &n);

	ret = fib(n);

	printf("ret = %d\n", ret);

	return 0;
}

/*
# include <stdio.h>

int main(void)
{
	int i;
	int f1, f2, f3;
	int n;                                       //����

	f1 = 1;
	f2 = 1;

	printf("����������Ҫ�������:");
	scanf("%d",&n);

	if (1 == n)
	{  
	   f3 = 1;
	}
    else if (2 == n)
	{
       f3 = 1;
	}
	else
	{
		for (i=3; i<=n; ++i)                     //����i<n�Ļ���i=3 < 3 �����������-858993460
		{
			f3 = f1 + f2;
			f1 = f2;
	        f2 = f3;
		}
	}
	printf("%d\n", f3);

	return 0;
}
*/

/*
VC++6.0��������
---------------------------------


---------------------------------
���ۣ�
*/
     

