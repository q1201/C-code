/*ʱ�䣺2021��7��17��22:56

  ���ܣ����һԪ���η��̵ĸ�

  Ŀ�ģ�

*/
# include <stdio.h>
# include <math.h>

int main()
{
	float a, b, c;
	double delta;                                    //delta��ŵ��� b*b - 4*a*c
	double x1;                                      
	double x2;
	
	printf("������a b c �����ݣ��м��ÿո������");
	scanf("%f %f %f",&a, &b, &c);                   //����int��%d, ������float��%f�� ˫����double��%lf

	delta = b*b - 4*a*c;
	
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);              //sqrt����ƽ�����ĺ���
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("x1 = %f, x2 = %f\n", x1, x2);
	}	
    else if (delta == 0)
	{
		x1 = (-b) / (2*a);
		x2 = x1;                                      //��ʾ��x1����x2
		printf("x1 = x2 = %f\n", x1);
	}
	else
	
		printf("�޽�\n");
	
	return 0;
}
/*VC++6.0��������
----------------------------



----------------------------
���ۣ�
*/