# include <stdio.h>
# include <string.h>

int main()
{
	char a[20] = { 0 };
	char b[20] = "bit";

	strcpy (a, b);                      //char *strcpy(char *dest, const char *src) �Ѵ�src��ַ��ʼ�Һ���NULL���������ַ������Ƶ���dest��ʼ�ĵ�ַ�ռ�

	printf("%s\n", strcpy (a, b));                                   //��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���


	printf("%d\n", printf("%d", printf("%d", 43)));                  //printf�����ķ���ֵ����Ļ�ϴ�ӡ�ַ��ĸ���

	return 0;
}