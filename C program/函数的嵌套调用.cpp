# include <stdio.h>

void b()
{
	printf("hehe\n");
}

void a()
{
    b();
//	void b();                          //����ֻ����Ƕ�׵��ò�����Ƕ�׶���
}

int main(void)
{
	a();

	return 0;
}