# include <stdio.h>

void g(int * pArr, int len)                      
{
	pArr[1] = 88;                                          
//	*(pArr+1) = 88;                   

	return;
}

void f(int * pArr, int len)                          //����������Ҫ���� ��ַ�볤��
{
	int i;

	for (i=0; i<len; ++i)
	{
		printf("*(pArr+i) = %d\n", *(pArr+i));       //*(pArr+i) �ȼ��� pArr[i]  

//      printf("pArr[i] = %d\n", pArr[i]);
	}
	printf("\n");

	return;
}

int main(void)
{
	int a[3] = {6,8,9};
	int b[5] = {1,2,3,4,5};
	int c[6] = {9,8,7,5,4,6};

	f(a, 3);                             //a��ʾa�����һ��Ԫ�صĵ�ַ
	f(b, 5);

	printf("c[1] = %d\n", c[1]);
	printf("\n");

	g(c, 6);

	printf("c[1] = %d\n", c[1]);                //pArr[i] �ȼ��� c[i]

	return 0;
}
/*
��VC++6.0�е�������Ϊ��
------------------------------
*(pArr+i) = 6
*(pArr+i) = 8
*(pArr+i) = 9

*(pArr+i) = 1
*(pArr+i) = 2
*(pArr+i) = 3
*(pArr+i) = 4
*(pArr+i) = 5

c[1] = 8

c[1] = 88
------------------------------
���ۣ�pArr[i] �ȼ��� *(pArr+i) �ȼ��� *(a+i) �ȼ��� a[i] ��������ͬ��һ������
*/