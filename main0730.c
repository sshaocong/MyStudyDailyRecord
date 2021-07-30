#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int atoi(const char* str)
{
	int i = 0;
	while(*str)
	{
		i = i * 10 + *str - 48;
		str++;
	}
	return i;
}
int Div1(int n)
{
	return n % 1 == 0;
}
int Div2(int n)
{
	return n % 2 == 0;
}

int Div3(int n)
{
	return n % 3 == 0;
}

int Div4(int n)
{
	return n % 4 == 0;
}

int Div5(int n)
{
	return n % 5 == 0;
}



void printArr(int *arr, int len, int (*pfn)(int))
{
	int i = 0;
	for(i = 0; i < len; i++)
	{
		if(pfn(arr[i]))
		{
			printf("%d\n",arr[i]);
		}
	}
}

/*
void myQsort(void* base, size_t len, size_t unitsize,int (*cmp)(const void*, const void*))
{
	int bound = 0;
	for(bound = len - 1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
			char* carr = base;
			char* p1 = carr + cur * unitsize;
			char* p2 = carr + (cur + 1) * unitsize;
			if(cmp(p1,p2))
			{
				char tmp[1024] = { 0 };
				memcpy(tmp,p1,unitsize);
				memcpy(p1,p2,unitsize);
				memcpy(p2,tmp,unitsize);
			}
		}
	}

}

*/

int cmp(const void* p1, const void* p2)
{
	short* q1 = (short*) p1;
	short* q2 = (short*) p2;
	return *q1 - *q2;
}

char* myStrcat(char* dest, const char* src)
{
	char* ret = dest;
	while(*dest)
	{
		dest++;
	}
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return ret;
}


int fib(int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}


char* maxOfStr(char** str, int len)
{
	char* max = str[0];
	int i = 0;
	for(i = 1; i < len;i++)
	{
		if(strcmp(max, str[i]) < 0)
		{
			max = str[i];
		}
	}
	return max;
}

void sortStr(char** str,int len)
{
	int bound = 0;
	for(bound = len - 1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
			if(strcmp(str[cur],str[cur + 1]) > 0)
			{
				char* tmp = str[cur];
				str[cur] = str[cur + 1];
				str[cur + 1] = tmp;
			}
		}
	}

}
//   ====================== error
/*
void quickSortStr(char* begin, char* end)
{
 //	if(begin > end)
//	{
//		return;
//	}

	char* tmp = begin;
	char* q = begin;
	char* p = end;

	while(q < p)
	{
		while(q < p && strcmp(p, tmp) >= 0)
		{
			p--;
		}
		while(q < p && strcmp(q, tmp) <= 0)
		{
			q--;
		}

		char* t = q;
		q = p;
		p = t;
	}
	char* t1 = begin;
	begin = q;
	q = t1;
	quickSortStr(begin,q - 1);
	quickSortStr(q - 1,end);

}

*/

unsigned long long int sumOf2str(char* str1,char* str2)
{
	unsigned long long int num1 = 0;
//	int i = strlen(str1) - 1;
	while(*str1)
	{
		num1 = num1 * 10 + *str1 - 48;
		str1++;
	}
	unsigned long long num2 = 0;
	while(*str2)
	{
		num2 = num2 * 10 + *str2 - 48;
		str2++;
	}
	return num1 + num2;
}

int main()
{
	char str1[] = "12345678901234567890";
	char str2[] = "1111111111111111111";
	printf("%llu\n",sumOf2str(str1,str2));


	return 0;

}
#if 0
int main()
{
	char *str[] = {"Hello", "World!", "China", "C language"};
	int len = sizeof(str) / sizeof(*str);
//	puts(maxOfStr(str,len));
//	sortStr(str, len);
	int i = 0;
//	for(i = 0; i < len; i++)
//	{
//		puts(str[i]);
//	}
	char* begin = str[0];
	char* end = str[len - 1];
	quickSortStr(begin,end);
	
	for(i = 0; i < len; i++)
	{
		puts(str[i]);
	}
	return 0;
}
#endif
#if 0
int main()
{
	int n = 10;
	
	int* p = malloc(n * sizeof(int));
	
	if(p)
	{
		int i = 0;
		for(i = 0; i < n;i++)
		{
			p[i] = fib(i + 1);
		}
	//	for(i = 0; i < n;i++)
	//	{
	//		printf("%d\n",p[i]);
	//	}
		int m = 20;
		int* q = realloc(p, m * sizeof(int));
//		int* q = malloc(m * sizeof(int));
		if(q)
		{
//			memcpy(q,p,n * sizeof(int));
//			free(p);
//			p = q;
			for(i = n;i < m; i++)
			{
				q[i] = fib(i + 1); 
			}
			for(i = 0; i < m; i++)
			{
				printf("%d\n",q[i]);
			}
			free(q);
			q = NULL;
		
		}
		else
		{
			puts("error");
		}
//		free(p);
//		p = NULL;
	}
	else
	{
		puts("error");
	}
	return 0;
}
#endif
#if 0
int main()
{
	const char* str1 = "hello ";
	const char* str2 = "world";
	char* p = malloc(strlen(str1) + 1);
	if(p)
	{
		strcpy(p,str1);
		puts(p);
		char *q = malloc(strlen(str1) + strlen(str2) + 1);
		if(q)
		{
			strcpy(q,p);
			strcat(q,str2);
			puts(q);
			free(q);
			q = NULL;
		}
		else
		{
			puts("erro2");
		}	
		free(p);
		p = NULL;
	}
	else
	{
		puts("erro1");
	}
	return 0;
}
#endif
#if 0
int main()
{
	char str1[100] =  "hello ";
	char str2[] = "world";
	puts(myStrcat(str1,str2));

//	short arr[] = {1,2,3,4,5,-6,-7,8,9,-10,11,12};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,len,sizeof(*arr),cmp);
//	int i = 0;
//	for(i = 0; i < len; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printArr(arr,len,Div1);

//	char str[] = "12345";
//	printf("%d\n",atoi(str));
	return 0;
}
#endif
