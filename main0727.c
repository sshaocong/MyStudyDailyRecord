#include <stdio.h>
#include <string.h>
#include <math.h>
void print2DimStr( char str[][100], int rows)
{
	int i = 0;
	for(i = 0;i < rows; i++)
	{
		puts(str[i]);
	}
}

void maxOf2DimStr( char str[][100], int rows)
{
	char max[100];
	strcpy(max,str[0]);
	int i = 1;
	while(i < rows)
	{
		int ret = strcmp(max,str[i]);
		if(ret < 0)
		{
			strcpy(max,str[i]);
		}
		i++;
	}
	puts(max);

}

void reverse2DimStr(char str[][100], int rows)
{
	int i = 0;
	while(i < rows/2)
	{
		char tmp[100];
		strcpy(tmp,str[i]);
		strcpy(str[i],str[rows - i - 1]);
		strcpy(str[rows - i - 1],tmp);
		i++;
	}

}

void bubbleSort2DimStr(char str[][100], int rows)
{
	int bound = 0;
	for(bound = rows - 1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
			if(strcmp(str[cur],str[cur+1]) > 0)
			{
				char tmp[100];
				strcpy(tmp,str[cur]);
				strcpy(str[cur],str[cur + 1]);
				strcpy(str[cur + 1],tmp);
				
			}
		}
	}

}

int binary2DimStr(char str[][100], int rows,const char obj[])
{
	bubbleSort2DimStr(str,rows);
	int begin = 0;
	int end = rows - 1;
	while(begin <= end)
	{
		int mid = (begin + end) / 2;
		if(strcmp(obj,str[mid]) > 0)
		{
			begin = mid + 1;
		}
		else if(strcmp(obj,str[mid]) < 0)
		{
			end = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}

int myMain()
{
	printf("111");
	return 0;
}



#if 0
#define S(a, b, c) (((a) + (b) + (c)) / 2.0)
#define AREA(a, b, c) (sqrt(S(a, b, c) * (S(a, b, c) - (a)) * (S(a, b, c) - (b)) * (S(a, b, c) - (c))))

int main()
{
	printf("%f\n",AREA(3, 4, 5));
//	char str[][100] = {"Hello", "World", "C language", "China", "America"};
//	int rows = sizeof(str) / sizeof(str[0]);
//	maxOf2DimStr(str,rows);
//	reverse2DimStr(str,rows);
//	bubbleSort2DimStr(str,rows);
//	print2DimStr(str,rows);
//	int ret = binary2DimStr(str,rows,"China");
//	if(ret >= 0)
//	{
//		printf("obj's index is %d\n",ret);
//	}
//	else
//	{
//		printf("error!\n");
//	}
	return 0;
}
#endif
