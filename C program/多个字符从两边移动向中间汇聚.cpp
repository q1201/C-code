/*ʱ�䣺2021��9��27��22:07

  ���ܣ�
  
  Ŀ�ģ�
	
*/
# include <stdio.h>
# include <string.h>
# include <windows.h>


int main(void)
{
	char arr1[] = "welcome to C program";
	char arr2[] = "********************";
	
	int left = 0;
	int right = strlen(arr1) - 1;
	
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);
		
 		Sleep(1000);                                  //ͷ�ļ���# include <windows.h> �����ܣ�ִ�й���һ��ʱ�䣬Ҳ���ǵȴ�һ��ʱ���ڼ���ִ�У�Sleep�������ʱ�䣬��windows�����Ѻ���Ϊ��λ 
		
		system ("cls");                              //�����Ļ��ͷ�ļ���# include <windows.h>
		
		left++;
		right--;

		
	}

	printf("%s\n", arr2);                             //���ַ�������arr2�ҵ���������ʼ��ַ��Ȼ�����������е��ַ���ֱ������'\0'Ϊֹ��
	
	return 0;
}
/*
��VC++6.0�е���������:
------------------------------

welcome to C program

-------------------------------
�ܽ᣺
	
*/