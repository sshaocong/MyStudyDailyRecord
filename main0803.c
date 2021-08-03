#include<stdio.h>
#include<string.h>

int main(int argc,const char *argv[])//命令行参数
{
	if(argc < 3)
	{
		printf("usage:./a.out num1 num2\n");
		return 1;
	}
	printf("argc = %d\n",argc);
	int i = 0;
	for(i = 0;i < argc;i++)
	{
		printf("argv[%d] =  %s\n",i,argv[i]);
	}
	int sum = atoi(argv[1]) + atoi(argv[2]);
	printf("sum = %d\n",sum);
	return 0;
}


#if 0
void reverse(char* begin, char* end)
{
	while(begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}	
}

int main()
{
	char str[] = "i love china";
//	anihc evol i
	int len = strlen(str);
	reverse(str,str+len-1);
	int i = 0;
	while(*(str+i) != ' ')
	{
		i++;
	}
	reverse(str,str+i-1);
	i = i + 1;
	int t = i;
	while(*(str+i) != ' ' )
	{
		i++;
	}
	reverse(str+t,str+i-1);

	puts(str);
//	int a[] = {1,3,5,7,9};
//	int* p = a;
//	p = p + 2;
//	printf("%d\n",++(*p));
	return 0;
}
#endif
