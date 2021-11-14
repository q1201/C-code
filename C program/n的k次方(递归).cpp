/*
  ʱ�䣺2021��10��15��23:13

  ���ܣ�

  Ŀ�ģ������ݹ�

*/
# include <stdio.h>

double Pow(int n, int k)
{
	if (0 == k)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k-1);
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}

}

int main(void)
{
	int n = 0;
	int k = 0;

	scanf("%d %d", &n, &k);

	double num = Pow(n, k);

	printf("%lf\n", num);

    return 0;
}
/*
VC++6.0��������Ϊ��
--------------------------------



--------------------------------
*/
