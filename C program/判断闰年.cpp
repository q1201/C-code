# include <stdio.h>

int main(void)
{
	int year = 0;
	int m, n = 0;
	int num = 0;

	printf("������������䣺");

	scanf("%d %d", &m, &n);

	printf("\n");

	for (year=m; year<=n; ++year)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))        // &&(����)��������Ϊ���Ϊ�� ��||(����)��һ��Ϊ���Ϊ��    
		{
			printf("%d ", year);
			num++;                                                             // num = num + 1;
		}
	}
	printf("\nnum = %d\n", num);

	return 0;
}

/* 
   �ж�����ķ�����        (��)                        (��)

                  �ܱ�4���� �� ���ܱ�100����  ����  �ܱ�400����

                    (����)      (����)                (����)
					
                  (����������������ų���)

                         (���������� �� �ұ߳�����Ϊ����)
*/