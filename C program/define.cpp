/*ʱ�䣺2021��9��21��23:00

  ���ܣ����峣���ͺ�(define����Ԥ����ָ��)

  Ŀ�ģ�

*/
# include <stdio.h>

#define MAX 1000                               //define�������(��ʶ������) 

#define add(X, Y) ((X)+(Y))                    //define�����

int main(void)
{
	printf("MAX = %d\n", MAX);

	printf("%d\n", 4*add(6, 8));

	return 0;
}
/*VC++6.0������Ϊ��
------------------------

MAX = 1000
56

------------------------
���ۣ�
*/