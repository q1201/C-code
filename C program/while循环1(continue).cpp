/*ʱ�䣺2021��7��18��23:00

  ���ܣ�
  
  Ŀ�ģ�
	
*/
# include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 10)
	{
		if (8 == i)
		{
			break;                               //whileѭ���У�break����������ֹѭ��
		}
		printf("%d ", i);
		i++;
	}

	printf("\n\n");

	int t = 1;

	while (t <= 10)
	{
		if (5 == t)
		{
			continue;                            //whileѭ���У�continue��������������ѭ��continue����Ĵ��룬ֱ��ȥ���жϲ��֣����Ƿ������һ��ѭ��        
		}
		printf("%d ", t);
		t++;
	}

	return 0;
}
/*
VC++6.0��������
---------------------------------

1 2 3 4 5 6 7

1 2 3 4

---------------------------------
���ۣ�
*/