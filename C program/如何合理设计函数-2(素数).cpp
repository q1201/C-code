/*ʱ�䣺2021��7��23��21:44

  ���ܣ��ж�һ�����ǲ�������
  
  Ŀ�ģ�
	
*/

# include <stdio.h>

bool IsPrime(int val)           
{
	int i;                          //��һ�������ڲ�����ı�����ֻ���ڱ�����ʹ��
	
	for (i=2; i<val; ++i)
	{
		if (val%i == 0)
			break;                 //��ֹѭ��
	}
	if (i == val)
		return true;
	else
		return false;	
}

int main(void)
{
	int i;                        //��ͬ�����ڶ�����ͬ������������ͻ
	
	scanf("%d", &i);
	
    if (IsPrime(i))              //��ͬ������(ͬ���Ͳ���) �ɵ��ú���       
		printf("yes\n");
    else
		printf("no\n");

/*
# include <stdio.h>

int main()
{
	if (1)                            1�����棬���Ի�ִ��if�����
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}	
*/	

/*	scanf("%d", &val);
    for (i=2; i<val; ++i)
    {	
		if (val%i == 0)
		    break;
	}
	if (i == val)
		printf("ture\n");
	else
		printf("false\n");	
*/	
	return 0;
}
/*
VC++6.0��������
---------------------------------


---------------------------------
���ۣ�
*/
