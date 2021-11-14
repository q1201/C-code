# include <stdio.h>

int main(void)
{
	int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 6;                                                       //要查找的数字

//	scanf("%d", &k);

	int num = sizeof(arr) / sizeof(arr[0]);                          //整个数组元素长度 除以 单个数组的长度 = 数组元素的个数(40 / 4 = 10)
//	printf("%d ", sizeof(arr));  
	
	int left = 0;                                                    //此时不代表数组中以0为下标的元素
	int right = num-1;                                               //此时不代表数组中以num-1为下标的元素

	while (left <= right)
	{
		int mid = (left + right) / 2;                                //取代表中间值元素的下标

		if (arr[mid] > k )                                           //arr[mid]代表以mid为下标的元素
		{
			right = mid - 1;                                         //舍去包括arr[mid]右边一半元素
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;                                          //舍去包括arr[mid]左边一半元素
		}
		else
		{
			printf("找到了下标为：%d\n", mid);
			break;
		}
	}

	if (left > right)
	{
		printf("找不到！！！");
	}


	return 0;
}
