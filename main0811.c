#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, const char *argv[])
{

	int num = 0;
	scanf("%d",&num);
	if(num == 1)
	{
		execlp("firefox","firefox","www.4399.com",NULL);
	}
	else if(num == 2)
	{	
		execlp("nautilus","nautilus","/home/linux",NULL);
	}
	else if(num == 3)
	{	
		execlp("gnome-calculator","gnome-calculator",NULL);
	}
	else if(num == 4)
	{		
		execlp("killall","killall","a.out",NULL);
	}

	return 0;
}

#if 0
int main(int argc, const char *argv[])
{
	printf("MINISHELL\n");
	while(1)
	{
		char buf[100] ;
		getcwd(buf,sizeof(buf));
		printf("LLLinux@ubuntu:~%s ",buf);
		char str[100] = { 0 };
		fgets(str,sizeof(str),stdin);
		str[strlen(str) - 1] = '\0'; 
		char* p = strtok(str," ");
		char* p1 = strtok(NULL," ");
		char* p2 = strtok(NULL," ");
		char* p3 = strtok(NULL," ");

		pid_t ret = fork();
		if(ret == 0)
		{
			if(strcmp(p,"quit") == 0)
			{
				printf("QUIT  MINISHELL!!!!!\n");
				execlp("killall","killall","a.out",NULL);
			}
			execlp(p,p,p1,p2,p3,NULL);	
		}
		wait(NULL);
	}
	return 0;
}
#endif

#if 0
int main(int argc, const char *argv[])
{
	while(1)
	{
		pid_t ret = fork();
		if(ret > 0)
		{
			wait(NULL);
		//	waitpid(ret,NULL,0);
		}
		else if(ret == 0)
		{
				char buf[100] ;
				getcwd(buf,sizeof(buf));
				printf("LLLinux@ubuntu:~%s ",buf);
				char str[100] = { 0 };
				fgets(str,sizeof(str),stdin);
				str[strlen(str) - 1] = '\0'; 
				char* p = strtok(str," ");
				char* p1 = strtok(NULL," ");
				char* p2 = strtok(NULL," ");
				char* p3 = strtok(NULL," ");
				int i = getppid();
				if(strcmp(p,"quit") == 0)
				{
					printf("QUIT  MINISHELL!!!!!\n");
					execlp("killall","killall","a.out",NULL);
				}
				execlp(p,p,p1,p2,p3,NULL);
		
		}
				
	}

	return 0;
}
#endif

#if 0
int main(int argc, const char *argv[])
{
	printf("A.OUT=-=\n");
//	execl("/usr/bin/firefox","firefox","www.4399.com",NULL);
	printf("看见可错了\n");
	return 0;
}
#endif

#if 0
int main(int argc, const char *argv[])
{
	pid_t ret[5] = { 0 };
	int i = 0;
	for(i = 0;i < 5;i++)
	{
		ret[i] = fork();
		if(ret[i] > 0)
		{
			continue;
		}
		else if(ret[i] == 0)
		{
			printf("child[%d]  pid:%d\n",i,getpid());
			sleep(rand()%5);
			exit(1);
		}
	}
	while(1)
	{
		pid_t recy_pid = waitpid(ret[3],NULL,0);
		if(recy_pid == ret[3])
		{
			printf("child[3]回收成功 pid：%d\n",ret[3]);
			break;
		}
		else
		{
			printf("回收失败 稍后再试\n");
		}
	}
	return 0;
}
#endif

//===============================写错了。==============================
#if 0
int main(int argc, const char *argv[])
{

	int i = 0;
	for(i = 0;i < 5;i++)
	{	
		pid_t ret = fork();
		if(ret > 0)
		{		
			int status;
			printf("父进程%d 子是%d\n",i,ret);
			while(i == 2)
			{
				pid_t recy_pid = waitpid(ret,&status,WNOHANG);
				if(recy_pid == ret)
				{
					printf("回收成功 recy_pid %d, 2pid %d\n",recy_pid,ret);
					break;
				}
				else
				{
					sleep(1);
					printf("回收失败，稍候再试。\n");
				}
			}
			
			if(i != 2)
			{
				wait(&status);
			}

		}
		else if(ret == 0)
		{
			printf("child %d,  pid =%d\n",i,getpid());
			exit(20);
		}
	
	}
	return 0;
}
#endif
#if 0
int main(int argc, const char *argv[])
{
	int i = 5;
	pid_t pid = fork();
	if(pid > 0)
	{
		while(i--)
		{
			printf("发送视频,chile pid :%d \n",pid);
			sleep(1);
		}
//		sleep(100);
		int status;
		pid_t recy_pid = wait(&status);
		printf("pid = %d recy_pid = %d\n",pid,recy_pid);
		if(WIFEXITED(status))
		{
			printf("正常结束，return value:%d\n",WEXITSTATUS(status));
		}
		else if(WIFSIGNALED(status))
		{
			printf("异常结束，singal value:%d\n",WTERMSIG(status));
		}
	}
	else if(pid == 0)
	{
		while(i--)
		{
			printf("接收视频\n");
			sleep(1);
		}
		exit(7);
		
	}
	
	return 0;
}
#endif

#if 0
char* p = NULL;

void clean(void)
{
	printf("running clean....");
	free(p);
}

int main(int argc, const char *argv[])
{
	atexit(clean);
	p = malloc(50);
	strcpy(p,"HELLO");
	puts(p);
//	printf("hello world");
//	_exit(1);
//	printf("return 0;");
	return 0;
}
#endif
#if 0
int main(int argc, const char *argv[])
{
	FILE* fp = fopen("1.txt","w");
	if(fp == NULL)
	{
		perror("fopen");
	}
	pid_t pid = fork();
	int i = 3;
	if(pid > 0)
	{
		char buf[] = "THIS IS FATHER...";
		while(i--)
		{
			fputs(buf,fp);
			fflush(fp);
			sleep(1);
		}
	}
	else if(pid == 0)
	{
		char buf[] = "this is child...";
		while(i--)
		{
			fputs(buf,fp);
			fflush(fp);
			sleep(1);
		}
	}
	return 0;
}
#endif
