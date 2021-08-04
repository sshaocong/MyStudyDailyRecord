#include<stdio.h>

//=======================写入一个文件====================
#if 0
int main(int argc, const char* argv[])
{
	FILE *fp = fopen("1.txt","w");
	if(fp == NULL)
	{
		printf("error!\n");
		return 1;
	}
	fputc('h',fp);
	fputc('e',fp);
	fputc('l',fp);
	fputc('l',fp);
	fputc('o',fp);
	fputc(' ',fp);
	fputc('w',fp);
	fputc('o',fp);
	fputc('r',fp);
	fputc('l',fp);
	fputc('d',fp);
	fputc('\n',fp);
	fclose(fp);
	return 0;
}
#endif
//======================读一个文件============================
#if 0
int main(int argc, const char* argv[])
{ 
//	FILE *fp = fopen("1.txt","r");
	FILE *fp = fopen(argv[1],"r");
	if(fp == NULL)
	{
		printf("fopen error");
	}
//	int i = 0;
//	for(i = 0; i < 12; i++)
//	{
//		int c = fgetc(fp);
//		printf("%c",c);
//	}
	while(1)
	{
		int c = fgetc(fp);
		if(c == EOF)
		{
			break;
		}
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}
#endif 
//===========================拷贝一个文件============================
#if 0
int main(int argc,const char* argv[])
{
	if(argc < c)
	{
		printf("usage:./a.out srcfile destfole\n");
		return 1;
	}
	FILE* rp = fopen(argv[1], "r");
	FILE* wp = fopen(argv[2], "w");
	if(NULL == rp)
	{
		printf("fopen rp error\n");
		return 1;
	}
	if(NULL == wp)
	{
		printf("fopen wp error\n");
		return 1;
	}
	
	while(1)
	{
		int c = fgetc(rp);
		if(EOF == c)
		{
			break;
		}
		fputc(c,wp);
	}
	fclose(rp);
	fclose(wp);
	return ;
}
#endif

//============================按行写入============
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen("1.txt","w");
	if(NULL == fp)
	{
		printf("printf fopen error!\n");
		return 1;
	}
	
	char buf[100] = "nihao hello world,你好\n";

	int a = fputs(buf,fp);
	
	if(EOF == a)
	{
		printf("fputs error!\n");
	}

	fclose(fp);

	return 0;
}
#endif
//============================按行读取===============
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen(argv[1],"r");
	if(NULL == fp)
	{
		printf("fopen error!\n");
	}

	char buf[1024];

	while(1)
	{
		char* s = fgets(buf,sizeof(buf),fp);
		if(NULL == s)
		{
			break;
		}
		printf("%s",s);
	}

	fclose(fp);
	return 0;
}
#endif

//============================拷贝文件==============//fgets 只操作文本文件。
#if 0
int main(int argc, const char *argv[])
{
	FILE* rp = fopen(argv[1],"r");
	FILE* wp = fopen(argv[2],"w");

	if(NULL == rp || NULL == wp)
	{
		printf("fopen error! \n");
		return 1;
	}
	
	while(1)
	{
		char buf[1024];
		char* s = fgets(buf,sizeof(argv[1]),rp);
		if(NULL == s)
		{
		 	break;
		}
		fputs(buf,wp);
	}

	fclose(rp);
	fclose(wp);
	return 0;
}
#endif
//==============================统计一个文件里a - z 的个数。
#if 0
int main(int argc, const char *argv[])
{
	FILE *fp = fopen(argv[1],"r");
	if(NULL == fp)
	{
		printf("fopen error!\n");
	}
	char buf[1024];
	int count[26] = { 0 };
	while(1)
	{
		char* s = fgets(buf,sizeof(buf),fp);
		if(NULL == s)
		{
			break;
		}
		int i = 0;
		while(buf[i] != '\0')
		{
			int j = 0;
			for(j = 0; j < 26;j++)
			{
				if(buf[i] == ('a' + j))
				{
					count[j] = count[j] + 1;
				}
			}
			i++;
		}
	}
	fclose(fp);
	int i = 0;
	for(i = 0;i < 26;i++)
	{
		printf("%c = %d\n",'a'+i,count[i]);
	}
	
	return 0;
}
#endif

int main(int argc, const char *argv[])
{
	FILE* fp = fopen(argv[1],"r");
	if(NULL == fp)
	{
		printf("fopen error!\n");
	}
	char buf[1024];
	int count = 0;
	while(1)
	{
		char* s = fgets(buf,sizeof(buf),fp);
		if(NULL == s)
		{
			break;
		}
		count++;
	}
	printf("文件一共有%d行\n",count);
	return 0;
}
