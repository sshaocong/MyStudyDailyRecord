#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>       
#include <fcntl.h>


int main(int argc, const char *argv[])
{
	int n = 0;
	scanf("%d",&n);
	while(n--)
	{
		pid_t ret = fork();
		if(ret == 0)
		{
			printf("pid = %d\n",getpid());
			return 0;
		}
	}

	return 0;
}


/*
int main(int argc, const char *argv[])
{
	pid_t ret = fork();
	if(ret > 0)
	{
		int fd = open(argv[1],O_RDWR);
		if(fd == -1)
		{
			perror("open");
		}
		lseek(fd,-1,SEEK_END);
		char buf[] = "AAAAAAAA";
		int wt = write(fd,buf,sizeof(buf));
		if(wt == -1)
		{
			perror("write");
		}
		close(fd);
	}
	else if(ret == 0)
	{
			
		int fd = open(argv[1],O_RDWR);
		if(fd == -1)
		{
			perror("open");
		}
		lseek(fd,-1,SEEK_END);
		char buf[] = "bbbbbbbb";
		int wt = write(fd,buf,sizeof(buf));
		if(wt == -1)
		{
			perror("write");
		}
		close(fd);

	}
	return 0;
}
*/

/*
int main(int argc, const char *argv[])
{
	int i = 5;
	pid_t ret = fork();
	if(ret == 0)
	{
		while(i--)
		{
			printf("child  %d\n",getpid());
			sleep(2);
		}
//		printf("child DIE %d\n",ret);
	}
	else if(ret > 0)
	{
		while(i--)
		{
			printf("father   %d\n",getpid());
			sleep(2);
		}
//		printf("father DIE  %d\n",ret);
	}
	else
	{
		perror("fork");
	}
	printf("ret = %d\n",ret);
	return 0;
}
*/
/*
struct s1
{
	char c1;
	char c2;
	int i;
};
//8
struct s2
{
	char c1;
	int i;
	char c2;
};
// 12
struct s3
{
	short i;
	union
	{
	//	int val;
		char str;
	//	float f;
	};
};
//12

//int a = 0;
//void test()
//{
	//static int b = a++;

//}

void getmem(char* p,int num)
{
	p = (char*)malloc(num);

}


int main()
{
//	char* str = NULL;
//	str = (char*)malloc(100);
//	getmem(str,100);
//	strcpy(str,"hello");
//	printf("%s\n",str);

	char* s = "AAA";
//	s[0] = 'B';
	printf("%d\n",*s);
//	int i = 0;
//	for(i = 0;i < 100; i++)
//	{
//		test();
//	}
//	printf("%d \n",a);
//	printf("%d\n",sizeof(struct s1));
//	printf("%d\n",sizeof(struct s2));
//	printf("%d\n",sizeof(struct s3));
	return 0;
}*/
