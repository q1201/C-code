/*ʱ�䣺2021��7��15��21:48

  ���ܣ�����1��100֮�������͡�����������������ƽ��ֵ

  Ŀ�ģ��˽�for if Ƕ��

*/


# include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	int cnt = 0;                 //count����д
	float avg = 0;               //average����д
	
	for (i=1; i<101; ++i)
	{
		if (i%2 == 1)
		{
			sum += i;            //sum += i �ȼ��� sum = sum+i
			++cnt;               //�ȼ���cnt + 1
		}
		else
        	avg = 1.0*sum/cnt;   
		
	} 

	printf("sum= %d\n", sum);
	printf("cnt = %d\n",cnt);
	printf("avg = %f\n",avg);
	
	return 0;
}
/*
VC++6.0��������
-----------------------
sum= 2500

cnt = 50

avg = 50.000000

-----------------------
���ۣ�

*/