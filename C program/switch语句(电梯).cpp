/*ʱ�䣺2021��7��21��17:20

  ���ܣ�
  
  Ŀ�ģ��˽�switch�����̼�break�Ĺ���
	
  ��ʽ��switch (���ͱ��ʽ)
		{	
		case ���ͳ������ʽ��
		     ��䣻
		}	  
*/
# include <stdio.h>

int main()
{
	int val;
	char ch;

//	char a;

//	int n;
	
	do
	{
		scanf("%d", &val);
		
		switch (val)
		{
//		case n:                                   //error

//		case 1.0:                                 //error

//		case 1+0:                                 //right

//		case a:                                   //right, �ַ��������͵�һ��(����������ASCII��ֵ�洢��)

		case (1):
			printf("һ�㵽��!\n");
			break;                                //��switchѭ���У�������ֹ�Լ����ڵ�switch
		case (2):
			printf("���㵽��!\n");
			break;
		case (3):
			printf("���㵽��!\n");
			break;
		default:                                  //defaul�Ӿ��˳������ν(��ǰ�ɺ�)����switch���ʽ��ֵ����ƥ�����е�case��ǩʱ��ִ��default�Ӿ�                         
			printf("�޸ò�!\n");
			break;
		}
//		break;                                    //��ѭ���У�������ֹѭ��   
		printf("����y��Y�����������˳�\n");
		scanf(" %c",&ch);
	}while('y' == ch || 'Y' == ch);
	
	return 0;
}
/*
VC++6.0��������
---------------------------------

  
---------------------------------
���ۣ�break�ڶ��ѭ���У�ֻ����ֹ���������ѭ����break���Ǳ����У������������switch����Ƕ��ʹ��
*/
