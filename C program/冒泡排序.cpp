/*ʱ�䣺2021��10��19��22:50

  ���ܣ���������Ԫ�ؽ��д�С��������

  Ŀ�ģ�

*/
# include <stdio.h>

void bubble_sort(int * a, int len)
{
//	int len = sizeof(a) / sizeof(a[0]);                    //error   len = 1�˴�sizeof(a)�����ָ�����a�Ĵ�С   4/4=1
//	printf("len = %d\n", len);

	int i, j, t;

	for (i=0; i<len-1; ++i)
	{
		int flow = 0;
		for (j=0; j<len-1-i; ++j)
		{
			if (a[j] > a[j+1])                             //  >(����)  ,  <(����)
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flow = 1;
			}
		}
		if (1 == flow)                                     //������˳���������˳�ѭ��
		{
			break;
		}
	}
}

int main(void)
{
	int arr[] = {-8, 1, 0, 6, 3, 8};

	int len = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, len);

	int n = 0;
	for (n=0; n<len; ++n)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");

	return 0;
}
/*
VC++6.0������Ϊ��
------------------------

-8 0 1 3 6 8

------------------------
���ۣ�
*/