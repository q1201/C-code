/*
  ʱ�䣺2021��11��10��23:20

  ���ܣ�
  
  Ŀ�ģ�	
*/
# include <stdio.h>

int main()
{
	//int * pa;
	//char * pr;
	//float * ps;

	//printf("%d\n", sizeof(pa));   //������ 4
	//printf("%d\n", sizeof(pr));   //������ 4 
	//printf("%d\n", sizeof(ps));   //������ 4

	//1.ָ�����;�����ָ�������Ȩ���ж��
	int p = 0X11223344;
	char pl = 0X11223344;


	int * pi = &p;
	char * po = &pl;

	*pi = 0;    //0X00000000, ����ָ������÷���4���ֽ�
	*po = 0;    //0X00223344���ַ�ָ������÷���1���ֽ�
	


	//2.ָ�����;�����ָ����һ���ж�Զ(����)  
	int arr[10] = { 0 };
	char str[10] = { 0 };

	int * pc = arr;
	char * pt = str;

	printf("%p\n", pc);      //������ 0019FEFC
	printf("%p\n", pc+1);    //������ 0019FF00
	printf("%p\n", str);     //������ 0019FEF0
	printf("%p\n", str+1);   //������ 0019FEF1

	return 0;
}
/*
��VC++6.0�е���������:
------------------------------

-------------------------------
�ܽ᣺     
*/             
