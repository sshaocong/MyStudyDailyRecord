#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include<time.h>      
#include <pwd.h>
#include <grp.h>
#if 0
int main(int argc, const char *argv[])
{
	DIR *dir = opendir(argv[1]);
	if(NULL == argv[1])
	{
		printf("opendir error!\n");
		return 1;
	}
	chdir(argv[1]);
	while(1)
	{
		struct dirent* info = readdir(dir);
		if(info == NULL)
		{
	//		printf("info error!");
			return 1;
		}
		struct stat buf;
		int st = stat(info->d_name,&buf);
		if(-1 == st)
		{
	//		printf("stat error!\n");
			continue;  
		}

		if(S_ISDIR(buf.st_mode))
		{
			fputc('d',stdout);
		}
		if(S_ISREG(buf.st_mode))
		{
			fputc('-',stdout);
		}

		if(buf.st_mode & S_IRUSR)
		{
			fputc('r',stdout);
		}
		else
		{
			fputc('-',stdout);
		}
		if(buf.st_mode & S_IWUSR)
		{
			fputc('w',stdout);
		}
		else
		{
			fputc('-',stdout);
		}
		if(buf.st_mode & S_IXUSR)
		{
			fputc('x',stdout);
		}
		else
		{
			fputc('-',stdout);
		}

		if(buf.st_mode & S_IRGRP)
		{
			fputc('r',stdout);
		}
		else
		{
			fputc('-',stdout);
		}
		if(buf.st_mode & S_IWGRP)
		{
			fputc('w',stdout);
		}
		else
		{
			fputc('-',stdout);
		}
		if(buf.st_mode & S_IXGRP)
		{
			fputc('x',stdout);
		}
		else
		{
			fputc('-',stdout);
		}

		if(buf.st_mode & S_IROTH)
		{
			fputc('r',stdout);
		}
		else
		{
			fputc('-',stdout);
		}
		if(buf.st_mode & S_IWOTH)
		{
			fputc('w',stdout);
		}
		else
		{
			fputc('-',stdout);
		}
		if(buf.st_mode & S_IXOTH)
		{
			fputc('x',stdout);
		}
		else
		{
			fputc('-',stdout);
		}
		uid_t num = buf.st_uid;
		struct passwd* pw = getpwuid(num);
		gid_t num1 = buf.st_gid;
        struct group* gr = getgrgid(num1);
		printf(" %2d %5s %5s %6lu" ,buf.st_nlink, pw->pw_name
				, gr->gr_name, buf.st_size);
		time_t t = buf.st_mtime;
		struct tm *inf = localtime(&t);
		printf(" %2d月 %2d %02d:%02d",inf->tm_mon+1, inf->tm_mday, inf->tm_hour, inf->tm_min);
		printf(" %s\n",info->d_name);
	}
	return 0;
}
#endif
#if 0
int main(int argc, const char *argv[])
{
//	symlink("/home/linux/C_LanguagePro","/home/linux/Desktop/CLAN");
//	remove("/home/linux/Desktop/CLAN");
//	rename("/home/linux/Shell/sec1/test0807/1.txt","heelo.txt");
//	symlink("/home/linux/Shell/sec1/test0807/11.txt","./ruan.txt");
//	link("/home/linux/Shell/sec1/test0807/11.txt","./ying.txt");
	truncate("/home/linux/Shell/sec1/test0807/ying.txt",100);
	return 0;
}
#endif
//================================perror
//int main(int argc, const char *argv[])
//{
//	FILE* fp = fopen("hllo.txt","r");
//	if(NULL == fp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	return 0;
//}
#include<string.h>
#if 0
int main(int argc, const char *argv[])
{
//=====================================strerror
	int i = 1;
	for(i = 0;i < 140; i++)
	{
		printf("no:%d error:%s\n",i,strerror(i));
	}
	return 0;
}
#endif
#include<error.h>
#include<errno.h>
int main(int argc, const char *argv[])
{
	FILE* fp = fopen("1.txt","r");
	if(fp == NULL)
	{
		printf("%s\n",strerror(errno));
//		error(1,errno,"fopen error file:%s func:%s line:%d date:%s"
//				,__FILE__,__func__,__LINE__,__DATE__);
//		error(1,0,"ERROR");
	}
	printf("1\n");
	return 0;
}
