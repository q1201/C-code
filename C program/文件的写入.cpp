/*
  ʱ�䣺2021��08��224��21:56

  ���ܣ�
	      
  Ŀ�ģ�

*/

# include <stdio.h>
# include <string.h>

int write_file()
{
	FILE * fp;                                             //���ļ���ʽ��fopen(const * filename, const * mode);
	fp = fopen("D:\\aaa\\8.txt", "w");                     //��D:\\aaa\\6.txt·�����ļ���"w"��ʾд���ļ������û������ļ����Ը�ָ��·�������ִ���һ�� 
	
	if(fp == NULL)
	{
		perror("fopen");                                   //����ļ�
		return -1;
	}

/*	
  	fputc('a', fp);                                        //д���ļ���ʽ��fputc(int ch, FILE * stream); ch -- д���ļ����ַ� stream -- �ļ�ָ��
 	fputc('b', fp);                                        //ע��char���͵ı��ʾ���int���ͣ���ASCII���ж�Ӧ ��: 65 --'a' 97 -- 'A'
	fputc('c', fp);                                      //��һ��д�뷽ʽ�� fputc һ��ֻ��д��һ���ַ�
    fputc(65, fp);
	fputc(97, fp);
*/	
	
/*	
	char ch = 'a';                                         //�ڶ���д�뷽ʽ
	
	while(ch <= 'g')
	{
		fputc(ch, fp);
		ch++;
	}
*/		

/*	
	char ch[] = "abcdefghijk";                             //�ַ�����
	
	for(unsigned int i=0;i<strlen(ch);i++)
	{
		fputc(ch[i], fp);                                  //������д�뷽ʽ
	}
*/
	
	fclose(fp);                                            //�ر��ļ�
	fp = NULL;
	
}

int read_file()
{
	FILE * fp;
	fp = fopen("D:\\aaa\\6.txt", "r");

	if(fp == NULL)
	{
		perror("foepn");
		return -1;
	}

    char ch;


	while(1)
	{
		ch = fgetc(fp);
		printf("%c\n", ch);

		if(ch == -1)
		{
			break;
		}

	}

	fclose(fp);
	fp = NULL;	


}

int main(void)
{
	write_file();
	read_file();
	
	return 0;
}
/*
VC++6.0������Ϊ��
------------------------



------------------------
���ۣ�
*/