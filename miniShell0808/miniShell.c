#include "miniShell.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

void showpwd()
{
	char buf[1024] = { 0 };
	char* s = getcwd(buf,sizeof(buf));
	char* p1 =strtok(s,"/");
	char* p2 =strtok(NULL,"/");
	char* p3 =strtok(NULL,"");
	if(p3 == NULL && p2 != NULL)
	{
		printf("Mylinux@miniShell:~$ ");
	}
	else if(p2 == NULL && p3 == NULL)
	{
		printf("Mylinux@miniShell:%s$ ",p1);
	}
	else
	{
		printf("Mylinux@miniShell:~%s$ ",p3);
	}
}

void cpFile(char* src, char* dest)
{
	if(dest == NULL || src == NULL)
	{
		printf("usage:cp file1 file2\n");
		return ;
	}
	chdir(src);
	FILE* rp = fopen(src,"r");
	chdir(dest);
	FILE* wp = fopen(dest,"w");
	if(NULL == rp || NULL == wp)
	{
		perror("fopen");
		return ;
	}
	while(1)
	{
		chdir(src);
		int c = fgetc(rp);
		if( c == EOF)
		{
			break;
		}
		chdir(dest);
		fputc(c,wp);
	}
	fclose(rp);
	fclose(wp);
}

void catFile(char* p1)
{
	if(p1 == NULL)
	{
		printf("usage:cat file");
		return ;
	}
	chdir(p1);
	FILE* fp = fopen(p1,"r");
	if(NULL == fp)
	{
		perror("fopen");
		return;
	}
	while(1)
	{
		int c = fgetc(fp);
		if(EOF == c)
		{
			break;
		}
		printf("%c",c);
	}
	fclose(fp);
}
//==================cd error!!
void cd(char* p1)
{
	if(p1 == NULL)
	{
		chdir("/home/linux");
		return ;
	}
	chdir(p1);
}
//===========================
void lsDir(char* p1)
{
	char buf[100] = { 0 };
	char* dest = getcwd(buf,sizeof(buf));
	if(p1 == NULL)
	{
		p1 = dest;
	}
	chdir(p1);
	DIR* dir = opendir(p1);
	if(dir == NULL)
	{
		perror("opendir");
		return ;
	}
	while(1)
	{
		struct dirent* info = readdir(dir);
		if(NULL == info)
		{
		//	perror("readdir");
			break;
		}
		printf("%11s  ",info->d_name);
		if(DT_DIR == info->d_type)
		{
			printf("目录文件\n");
		}
		else
		{
			printf("一般文件\n");
		}
	}
	chdir(dest);
	closedir(dir);

}

void llFile(char* p1)
{
	char buf[100] = { 0 };
	char* dest = getcwd(buf,sizeof(buf));
	if(p1 == NULL)
	{
		p1 = dest;
	}
	chdir(p1);
	DIR* dir = opendir(p1);
	if(dir == NULL)
	{
		perror("opendir");
		return ;
	}
	while(1)
	{
		//chdir(p1);
		struct dirent* info = readdir(dir);
		if(NULL == info)
		{
		//	perror("readdir");
			break;
		}
		struct stat buf;
		int st = stat(info->d_name,&buf);
		if(st == -1)
		{
			perror("stat");
			break;
		}

		if(S_ISREG(buf.st_mode))
		{
			fputc('-',stdout);
		}
		if(S_ISDIR(buf.st_mode))
		{
			fputc('d',stdout);
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
		uid_t ut = buf.st_uid;
		struct passwd* pw = getpwuid(ut);
		gid_t gt = buf.st_gid;
     	struct group* gr = getgrgid(gt);		
		printf(" %2d %6s %6s %6lu "
				,buf.st_nlink,pw->pw_name,gr->gr_name,buf.st_size);
		time_t  t = buf.st_mtime;
		struct tm* tme = localtime(&t);
		printf("%2d月 %2d %2d:%02d",tme->tm_mon + 1,tme->tm_mday
				,tme->tm_hour,tme->tm_min);
		printf(" %s\n",info->d_name);

	}
	chdir(dest);
	closedir(dir);
}

void lnsFile(char* p2, char* p3)
{
	int ret = symlink(p2,p3);
	if(ret == -1)
	{
		perror("symlink");
		return ;
	}
}

void lnYFile(char* p1, char* p2)
{
	int ret = link(p1,p2);
	if(ret == -1)
	{
		perror("link");
		return ;
	}
}

void rmFile(char* p1)
{
	int ret = remove(p1);
	if(ret == -1)
	{
		perror("remove");
		return ;
	}
}

void touchFile(char* p1)
{
	FILE* fp = fopen(p1,"w");
	if(fp == NULL)
	{
		perror("touch");
	}
	return ;
}

void mvFile(char* p1,char* p2)
{
	cpFile(p1,p2);
	rmFile(p1);
}
