# include <stdio.h>

void ball (int arr[])              //��������(int * arr); ��64λϵͳ����x64)�У�ָ������Ĵ�Сռ8�ֽڣ���32λϵͳ����x86)�У�ָ������Ĵ�Сռ4�ֽ�
{
	int n = sizeof(arr);
		printf("n = %d\n", n);
}

int main(void)
{
	int arr[] = { 1 };

	ball(arr);

	int m = sizeof(arr);
	printf("m = %d\n", m);

	return 0;
}
/*
��VC++6.0��������Ϊ��
-------------------------------

n = 4
m = 4

-------------------------------
*/