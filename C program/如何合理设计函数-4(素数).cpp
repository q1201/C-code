/*ʱ�䣺2021��7��25��22:04

  ���ܣ�������������ʵ����1��ĳ������(����������)֮�����е����������������
  
  Ŀ�ģ�ʹ���������٣��������Ը���
	
*/
# include <stdio.h>

//�������Ĺ�����: �ж�m�Ƿ�Ϊ�������Ƿ���true�������򷵻�false
bool IsPrime(int m)
{
	int i;
	
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (m == i)
		return true;
	else
		return false;
}


//�������Ĺ����ǰ�1��n֮�����е���������ʾ�������
void TraverseVal(int n)                               //TraverseVal(����):��ָ��ֵ���ڵ�����ִ��һ��
{
	int i;
	
	for (i=2; i<=n; ++i)
	{
		if (IsPrime(i))
			printf("%d\n", i);
	}
	//	printf("����!\n");                            //���� 1 �����������������1�ڴ�forѭ���жϲ�����κ�ֵ
}

int main(void)
{
	int val;
	
	scanf("%d", &val);
	
	TraverseVal(val);                  
	
	return 0;	
}
/*
VC++6.0��������
---------------------------------

  
---------------------------------
���ۣ�
*/
