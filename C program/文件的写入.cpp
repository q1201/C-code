/*
  时间：2021年08月224日21:56

  功能：
	      
  目的：

*/

# include <stdio.h>
# include <string.h>

int write_file()
{
	FILE * fp;                                             //打开文件格式：fopen(const * filename, const * mode);
	fp = fopen("D:\\aaa\\8.txt", "w");                     //打开D:\\aaa\\6.txt路径的文件，"w"表示写入文件，如果没有这个文件则以该指定路径的名字创建一个 
	
	if(fp == NULL)
	{
		perror("fopen");                                   //检查文件
		return -1;
	}

/*	
  	fputc('a', fp);                                        //写入文件格式：fputc(int ch, FILE * stream); ch -- 写入文件的字符 stream -- 文件指针
 	fputc('b', fp);                                        //注：char类型的本质就是int类型，在ASCII码中对应 如: 65 --'a' 97 -- 'A'
	fputc('c', fp);                                      //第一种写入方式， fputc 一次只能写入一个字符
    fputc(65, fp);
	fputc(97, fp);
*/	
	
/*	
	char ch = 'a';                                         //第二种写入方式
	
	while(ch <= 'g')
	{
		fputc(ch, fp);
		ch++;
	}
*/		

/*	
	char ch[] = "abcdefghijk";                             //字符数组
	
	for(unsigned int i=0;i<strlen(ch);i++)
	{
		fputc(ch[i], fp);                                  //第三种写入方式
	}
*/
	
	fclose(fp);                                            //关闭文件
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
VC++6.0输出结果为：
------------------------



------------------------
结论：
*/