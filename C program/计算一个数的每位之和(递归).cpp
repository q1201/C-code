/*
  ʱ�䣺2021��10��15��22:50

  ���ܣ�

  Ŀ�ģ������ݹ�

*/
# include <stdio.h>

int DigitSum(int num)
{
	if (num > 9)
	{
		 return DigitSum(num / 10) + (num % 10);
	}
	else
	{
		return num;
	}
}

int main()
{
	int n = 0;

	printf("������һ����������");

	scanf("%d", &n);

	 int sum = DigitSum(n);

	printf("%d\n", sum);

	return 0;
}
/*
VC++6.0��������Ϊ��
--------------------------------



--------------------------------
*/