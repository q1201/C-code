/*ʱ�䣺2021��9��27��22:01

  ���ܣ�
  
  Ŀ�ģ�����sizeof �� strlen������
	
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char str[] = {'w', 'e', 'l', 'c', 'o', 'm', 'e'};

	char arr[] = "welcome";

	char kill[100] = "welcome";

	char * pin = "123456789";

    char ret[100] = "0123456789";

	int shi[100] = { 0 };

	int a = sizeof(str);     //7

	int b  = sizeof(arr);    //8                           //arr[]�����飬���㵽\0λ��(����\0)�������7+1

	int c = sizeof(*arr);    //1                           //*arr �ǵ�һ���ַ�,������1

	int d = strlen(arr);     //7                           //strlen�����ַ����ĳ��ȣ��Խ����� '\0' Ϊ�ַ�������,������ʱ������'\0'

    int e = strlen(kill);    //7                           //strlen�����ַ����ĳ��Ȳ��ܶ���ʱ�ĳ��ȿ���

	int f = sizeof(pin);     //4                           //pin ��ָ���ַ����������ַ�ָ��

    int g = sizeof(ret);     //100                         //sizeof ��������Ƿ����������ռ���ڴ�ռ�Ĵ�С����������洢�����ݸı�

	int h = sizeof(shi);     //400                         //��ʱ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�


	printf("a = %d\n", a);                                

	printf("b = %d\n", b);                                //�����������ַ���ָ�루char*��, �ұ�������'\0'��β�ġ�

	printf("c = %d\n", c);

	printf("d = %d\n", d);

	printf("e = %d\n", e);

	printf("f = %d\n", f);

	printf("g = %d\n", g);

	printf("h = %d\n", h);


	return 0;

}

/*
��VC++6.0�е���������:
------------------------------

a = 7
b = 8
c = 1
d = 7
e = 7
f = 4
g = 100
h = 400

-------------------------------
�ܽ᣺     
              1.sizeof(...)�������������ֵʱ�Ƿ�������,��λ���ֽ�

              2.strlen(...)�Ǻ���,Ҫ������ʱ���ܼ���	
*/