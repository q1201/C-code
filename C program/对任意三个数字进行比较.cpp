/*ʱ�䣺2021��7��15��22:59

  ���ܣ��������������ֽ��дӴ�С����

  Ŀ�ģ�

*/
# include <stdio.h>

int main()
{
	int a, b, c;     //�ȼ���int a; int b; int c;
	int t;

	printf("��������������֣��м��ÿո������");
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
/*VC++6.0������Ϊ��
------------------------

------------------------
���ۣ�
*/