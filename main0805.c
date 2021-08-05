#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct information 
{
	char name[20];
	int age;
	char sex;
	char addr[100];

}PER;
//=============================fwrite
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen("1.txt","w");
	if(NULL == fp)
	{
		printf("fopen error!\n");
		return 1;
	}

	PER per;
	strcpy(per.name,"zhangsan");
	per.age = 20;
	per.sex = 'm';
	strcpy(per.addr,"科技二路");
	fwrite(&per,sizeof(per),1,fp);

	fclose(fp);
	return 0;
}
#endif
//=====================================fread
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen("1.txt","r");
	if(NULL == fp)
	{
		printf("fopen error\n");
		return 1;
	}
	PER per;
	memset(&per,0,sizeof(PER));

	fread(&per,sizeof(per),1,fp);
	fclose(fp);

	printf("name:%s, age:%d, sex:%c, addr:%s\n",per.name
			,per.age,per.sex,per.addr);

	return 0;
}
#endif
//===============================fseek
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen(argv[1],"r");
	if(NULL == fp)
	{
		printf("fopen error!\n");
		return 1;
	}
	char buf[512];
	fseek(fp,7,SEEK_SET);
	fgets(buf,sizeof(buf),fp);
	fclose(fp);
	puts(buf);

	return 0;
}
#endif
//================================fseek_w
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen(argv[1],"r+");
	if(NULL == fp)
	{
		printf("fopen error!\n");
		return 1;
	}
	char buf[] = "aaaa";
	fseek(fp,12,SEEK_SET);
	fputs(buf,fp);
	fclose(fp);

	return 0;
}
#endif
//=====================================ftell
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen(argv[1],"r");
	if(NULL == fp)
	{
		printf("fopen error!\n");
		return 1;
	}
	fseek(fp,0,SEEK_END);
	long size = ftell(fp);
	fclose(fp);
	printf("size: %ld\n",size);
	return 0;
}
#endif
//====================================rewind
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen(argv[1],"r");
	if(NULL == fp)
	{
		printf("fopen error!\n");
		return 1;
	}
	fseek(fp,0,SEEK_END);
	rewind(fp);
	char buf[1024];
	fgets(buf,sizeof(buf),fp);
	fclose(fp);
	puts(buf);
	return 0;
}
#endif
//==============================cp doukeyi==不能拷贝太大的
// malloc 堆上 32位linux只能申请最大2.9G
#if 0
int main(int argc, const char *argv[])
{
	FILE* rp = fopen(argv[1], "r");
	FILE* wp = fopen(argv[2], "w");
	if(NULL == rp || NULL == wp)
	{
		printf("fopen error!\n");
		return 1;
	}

	fseek(rp,0,SEEK_END);
	long size = ftell(rp);
//	char buf[size];
	char* p =malloc(size);
	if(NULL == p)
	{
		printf("mallco error!\n");
		return 1;
	}
//	bzero(p,size);
	rewind(rp);

	fread(p,size,1,rp);
	fwrite(p,size,1,wp);

	fclose(wp);
	fclose(rp);
	free(p);
	p = NULL;
	return 0;
}
#endif
//================================open write(system)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#if 0
int main(int argc, const char *argv[])
{
	int fd = open("1.txt",O_WRONLY | O_TRUNC | O_CREAT,0666);
	if(-1 == fd)
	{
		fprintf(stderr,"open error!");
		return 1;
	}
	char buf[] = "hhhhhhellllllllo wwwwworrrrrld";
	
  	int wd = write(fd,buf,strlen(buf));
	if(-1 == wd)
	{	
		fprintf(stderr,"open error!");
		return 1;
	}
	close(fd);
	return 0;
}
#endif
//========================open read
#if 0
int main(int argc, const char *argv[])
{
	int fd = open("1.txt",O_RDONLY);
	if(-1 == fd)
	{
		fprintf(stderr,"open error!");
		return 1;
	}
	char buf[1024] = { 0 } ;
	int rd = read(fd,buf,sizeof(buf));
	if(-1 == rd)
	{
		fprintf(stderr,"read error");
		return 1;
	}
	close(fd);
	printf("ret:%d\nbuf:%s\n",rd,buf);
	
	return 0;
}
#endif
//=============================系统open cp 
#if 0
int main(int argc, const char *argv[])
{
	
	int rd = open(argv[1],O_RDONLY);
	int wd = open(argv[2],O_WRONLY | O_TRUNC | O_CREAT,0666);
	if(-1 == rd || -1 == wd)
	{
		fprintf(stderr,"open error!\n");
		return 1;
	}

	int size = lseek(rd,0,SEEK_END);
//	printf("%d\n",size);
	
	char *buf = malloc(size);
	lseek(rd,0,SEEK_SET);
	read(rd,buf,size);	
	if(-1 == rd)
	{
		fprintf(stderr,"read error");
		return 1;
	}
	write(wd,buf,size);
	if(-1 == rd)
	{
		fprintf(stderr,"read error");
		return 1;
	}
	close(wd);
	close(rd);

//	write(1,"hello",5);
	return 0;
}
#endif

// ============================== 文本插入
int main(int argc, const char *argv[])
{
	FILE* fp = fopen(argv[1],"r+");
	if(NULL == fp)
	{
		fprintf(stderr,"fopen error!\n");
	}
	int num = atoi(argv[2]);    // 用argv[2] 来做插入的位置
	fseek(fp,num,SEEK_SET);    // 偏移到要插入的地方
	char* p = (char*)argv[3];    // argv[3]  来接收插入的内容。
	char buf[1024] = { 0 };
	char* s = fgets(buf,1024,fp); // 用buf 接收插入位置之后的内容
	fputs(p,fp);               // 插入你要插入的内容
	fseek(fp,num + strlen(argv[3]),SEEK_SET); // 偏移到你插入完的地方
	fputs(s,fp); // 把buf的内容覆盖上去。

	fclose(fp);
	return 0;
}
