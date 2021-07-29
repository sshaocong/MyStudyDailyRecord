#include <stdio.h>
#include <string.h>
void swapNum(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void quickSort(int* begin, int* end)
{
	if(begin > end)
	{
		return ;
	}
	int tmp = *begin;
	int* p = begin;
	int* q = end;

	while(p < q)
	{
		while(p < q && *q >= tmp)
		{
			--q;
		}
		while(p < q && *p <= tmp)
		{
			++p;
		}
		swapNum(p, q);
	}
	swapNum(begin, p);
	quickSort(begin, p - 1);
	quickSort(q + 1, end);
}
#if 0
void printArr(int* begin, int* end)
{
	for(;begin <= end; begin++)
	{
		printf("%d\n",*begin);
	}
}

void myPuts(const char* str)
{
	while(*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}

int myStrlen(const char* p)
{
/*	int count = 0;
	while(*p != '\0')
	{
		p++;
		count++;
	}
	return count;
*/
	if(*p == '\0')
	{
		return 0;
	}
	return 1 + myStrlen(p+1);

}

void myStrcpy(char* dest, const char* src)
{
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void myStrncpy(char* dest, const char* src, size_t n)
{
	while(*src && n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
		
	
/*	while(*src == '\0' && n > 0)
	
	{
		*dest = 0;
		*dest++;
		n--;
	}
	while(*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*/
}

void myMemcpy(void* dest, const void* src, size_t n)
{
	char* p = (char*)dest;
	char* q = (char*)src;
	int i = 0;
	for(i = 0; i < n; i++)
	{
		p[i] = q[i];
	}
}

void myStrcat(char* dest, const char* src)
{
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

}

int myStrncmp(const char* str1, const char* str2, size_t n)
{
	while(*str1 == *str2 && *str1 && *str2 && --n)
	{
		str1++;
		str2++;
	}

	return *str1 - *str2;

}
/*
int strFind(const char* str, const char* sub)
{
	int i = 0;
	for(i = 0; i <= strlen(str) - strlen(sub); i++)
	{
		if(myStrncmp(str + i,sub,strlen(sub)) == 0)
		{
			return i;
		}
	}

	return -1;
}

int strFindTimes(const char* str, const char* sub)
{
	int i = 0;
	int count = 0;

	for(i = 0; i <= strlen(str) - strlen(sub); i++)
	{
		if(myStrncmp(str + i,sub,strlen(sub)) == 0)
		{
			count++;
		}
	}

	return count;
}
*/
void print2DimArr(int (*p)[4], int rows)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%2d ",*(*(p + i) + j));
		}
		printf("\n");
	}
}
int sumOf2DimArr(int (*p)[4], int rows)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < 4; j++)
		{
			sum = sum + *(*(p + i) + j);
		}
	}
	return sum;
}


void sortStr(char (*str)[100], int rows)
{
	int bound = 0;
	for(bound = rows - 1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
			if(strcmp(*(str + cur),*(str + cur + 1)) > 0)
			{
				char tmp[100];
				strcpy(tmp, *(str + cur));
				strcpy(*(str + cur), *(str + cur + 1));
				strcpy(*(str + cur + 1), tmp);
			}
		}
	}
}

void print2DimStr(char (*str)[100], int rows)
{
	int i = 0;
	for(i = 0; i < rows; i++)
	{
		puts(*(str+i));
	}

}
#endif

void strSpace(char* str)
{
	int i = 0;
	while(*(str + i ))
	{
		putchar(*(str+i));
		i = i + 2;
	}
	putchar('\n');
}

void swapStr(char* str)
{
	char *begin = str;
	char *end = str + strlen(str) - 1;
	while(begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}

size_t myStrlen(const char* str)
{
	int i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return i;
}

void myStrcpy(char* dest, const char* src)
{
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void myStrcat(char* dest, const char* src)
{
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

}

int myStrcmp(const char* str1, const char* str2)
{
	while(*str1 && * str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main()
{
	char str[] = "Computer Science";
	strSpace(str);

	char str1[] = "hello world";
	swapStr(str1);
	puts(str1);

	printf("%d\n",myStrlen(str));
	
	char dest[100];
	myStrcpy(dest,str);
	puts(dest);

	myStrcat(dest,str1);
	puts(dest);

	char s1[] = "hello";
	char s2[] = "hellz";
	printf("%d\n",myStrcmp(s1,s2));
	return 0;
}

#if 0
int main()
{
	char str[][100] = {"hello", "world!", "china"};
	int rows = sizeof(str) / sizeof(str[0]);
	sortStr(str,rows);
	print2DimStr(str,rows);

	
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int rows = sizeof(arr) / sizeof(arr[0]);
//	print2DimArr(arr,rows);
//	printf("sum = %d\n",sumOf2DimArr(arr,rows));





//	char *p = "hello";
//	char str[1024] = "c language ";
//	char *q = "hella";

//	printf("%d\n",strFindTimes("c language uagr qi","ua"));
//	printf("%d\n",myStrcmp(p,q));
//	myStrcat(str,p);

//	myStrncpy(str,p,7);
//	myPuts(str);
//	printf("%d\n",myStrlen(p));
	
//	double arr[] = {1,2,-3,4,-5,6,7,-8,9,-10};
//	double arr1[100];

//	myMemcpy(arr1,arr,sizeof(arr));
//	int i = 0;
//	for(i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		printf("%lf\n",arr1[i]);
//	}
//	printArr(arr1 , arr1 + sizeof(arr) / sizeof(arr[0]) - 1);
//	int len = sizeof(arr) / sizeof(arr[0]);
	
//	quickSort(arr, arr + len - 1);
//	printArr(arr, arr + len - 1);

	return 0;
}
#endif
