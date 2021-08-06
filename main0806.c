#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>

//==============================fileno
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen("1.txt","r");
	if(NULL == fp)
	{
		printf("fopen error!\n");
	}

	int fd = fileno(fp);
	char buf[512] = { 0 };
	read(fd,buf,sizeof(buf));
	printf("%s\n",buf);

	fclose(fp);
	return 0;
}
#endif
//=================================fdopen.
#if 0
int main(int argc, const char *argv[])
{
	int fd = open("2.txt",O_RDONLY);
	if(-1 == fd)
	{
		fprintf(stderr,"open error\n");
		return 1;
	}

	FILE *fp = fdopen(fd,"r");
	char buf[512] = {0};
	fread(buf,sizeof(buf),1,fp);
	printf("%s\n",buf);

	close(fd);
	return 0;
}
#endif
//==============================opendir ,readdir 写的ls
#if 0
int main(int argc, const char *argv[])
{
	DIR* dir = opendir(argv[1]);
	if(NULL == dir)
	{
		fprintf(stderr,"opendir error!\n");
		return 1;
	}
	while(1)
	{
		struct dirent *info = readdir(dir);
		if(NULL == info)
		{
			break;
		}
		printf("%10s  ",info -> d_name);
		if(DT_DIR == info -> d_type)
		{
			printf("目录文件\n");
		}
		else
		{
			printf("一般文件\n");
		}
	}
	closedir(dir);
	return 0;
}
#endif
//=============================chdir  .  getcwd
#if 0
int main(int argc, const char *argv[])
{
	int ret = chdir("/home/linux/");
	if(-1 == ret)
	{
		printf("chdir failure\n");
		return 1;
	}
	else
	{
		printf("chdir success\n");
	}
	
	char buf[512] = {0};
	char* s = getcwd(buf,sizeof(buf));
	if(NULL == s)
	{
		printf("getcwd error!\n");
		return 1;
	}
	printf("pathname:%s\n",buf);
	return 0;
}
#endif
//==============================mkdir.
#if 0
int main(int argc, const char *argv[])
{
	int ret = mkdir(argv[1],0777);
	if(-1 == ret)
	{
		printf("mkdir error!\n");
	}
	else
	{
		printf("mkdir success!\n");
	}
	return 0;
}
#endif
#if 0
int main(int argc, const char *argv[])
{
	int ret = rmdir(argv[1]);	
	if(-1 == ret)
	{
		printf("rmdir error!\n");
	}
	else
	{
		printf("rmdir success!\n");
	}
	return 0;
}
#endif
//==================================stat 
#include<string.h>
#include<time.h>
#if 0
int main(int argc, const char *argv[])
{
	struct stat buf;
	int st = stat(argv[1],&buf);
	if(-1 == st)
	{
		fprintf(stderr,"stat error!\n");
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

	printf(" %d %d %d %lu" ,buf.st_nlink, buf.st_uid, buf.st_gid
			, buf.st_size);
	time_t t = buf.st_mtime;
	struct tm *inf = localtime(&t);
	printf(" %d月 %d %02d:%02d",inf->tm_mon+1, inf->tm_mday, inf->tm_hour, inf->tm_min);
	printf(" %s\n",argv[1]);	
/*	DIR* dir = opendir(argv[1]);
	if(NULL == dir)
	{
		fprintf(stderr,"opendir error!\n");
		return 1;
	}
	while(1)
	{
		struct dirent *info = readdir(dir);
		if(NULL == info)
		{
			break;
		}
		if(strcmp(argv[2], info -> d_name) == 0)
		{
			printf(" %s\n",info -> d_name);
			break;
		}
	}
*/
	return 0;
}
#endif
//==============================ls -ll
#if 0
int main(int argc, const char *argv[])
{
	DIR *dir = opendir(argv[1]);
	if(NULL == argv[1])
	{
		printf("opendir error!\n");
	}
	while(1)
	{
		struct dirent* info = readdir(dir);
		if(info == NULL)
		{
			return 1;
		}
		struct stat buf;
		int st = stat(info->d_name,&buf);
		if(-1 == st)
		{
			continue;   //有的stat会失败
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

		printf(" %d %d %d %4lu" ,buf.st_nlink, buf.st_uid, buf.st_gid
				, buf.st_size);
		time_t t = buf.st_mtime;
		struct tm *inf = localtime(&t);
		printf(" %d月 %d %02d:%02d",inf->tm_mon+1, inf->tm_mday, inf->tm_hour, inf->tm_min);
		printf(" %s\n",info->d_name);
	}
	return 0;
}
#endif

int main(int argc, const char *argv[])
{
	DIR* dir = opendir("/proc");
	if(NULL == dir)
	{
		return 1;
	}
	int count = 0;
	while(1)
	{	
		struct dirent* info = readdir(dir);
		if(info == NULL)
		{
			break;
		}
		if(atoi(info->d_name) > 0 && atoi(info -> d_name) < 99999)
		{
			count++;
		}

	}

	printf("count = %d\n",count);
	return 0;
}
