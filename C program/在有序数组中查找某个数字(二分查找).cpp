# include <stdio.h>

int main(void)
{
	int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 6;                                                       //Ҫ���ҵ�����

//	scanf("%d", &k);

	int num = sizeof(arr) / sizeof(arr[0]);                          //��������Ԫ�س��� ���� ��������ĳ��� = ����Ԫ�صĸ���(40 / 4 = 10)
//	printf("%d ", sizeof(arr));  
	
	int left = 0;                                                    //��ʱ��������������0Ϊ�±��Ԫ��
	int right = num-1;                                               //��ʱ��������������num-1Ϊ�±��Ԫ��

	while (left <= right)
	{
		int mid = (left + right) / 2;                                //ȡ�����м�ֵԪ�ص��±�

		if (arr[mid] > k )                                           //arr[mid]������midΪ�±��Ԫ��
		{
			right = mid - 1;                                         //��ȥ����arr[mid]�ұ�һ��Ԫ��
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;                                          //��ȥ����arr[mid]���һ��Ԫ��
		}
		else
		{
			printf("�ҵ����±�Ϊ��%d\n", mid);
			break;
		}
	}

	if (left > right)
	{
		printf("�Ҳ���������");
	}


	return 0;
}
