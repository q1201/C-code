# include <stdio.h>

int main()
{
	int arr[10] = { 0 };

//	printf("%p\n", &arr[0]);                         // 0019FF08

	printf("len = %d\n", sizeof(arr));


	printf("%p\n", arr);          //������Ԫ�صĵ�ַ    0019FF08         
	                                                                 //���4���ֽ�
	printf("%p\n", arr+1);        //�ڶ���Ԫ�صĵ�ַ    0019FF0C

	printf("%p\n", &arr);         //����ĵ�ַ          0019FF08 
	                                                                 //���40���ֽ�
	printf("%p\n", &arr+1);       //���������ĵ�ַ    0019FF30


	return 0;
}
/*
VC++6.0������Ϊ��
------------------------

len = 40
0019FF08
0019FF0C
0019FF08
0019FF30


------------------------
���ۣ�
*/