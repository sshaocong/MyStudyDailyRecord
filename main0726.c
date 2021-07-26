#include <stdio.h>

void printArr(int arr[],int len)
{
	int i = 0;
	for(i = 0; i < len; i++)
	{
		printf("%d\n",arr[i]);
	}

}


int maxOfArr(int arr[],int len)
{
	int max = arr[0];
	int i = 0;
	for(i = 1; i < len; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

void reverseArr(int arr[], int len)
{
	int i = 0;
	for(i = 0; i < len/2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = tmp;
	}
}

void choiceSort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < len - 1; i++)
	{
		for(j = i + 1; j < len; j++)
		{
			if(arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void bubbleSort(int arr[], int len)
{
	int bound = 0;
	for(bound = len - 1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
			if(arr[cur] > arr[cur + 1])
			{
				int tmp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] = tmp;
			}
		}
	}
}

void insertSort(int arr[], int len)
{
	int i = 1;
	int j = i;
	while(i < len)
	{
		int tmp = arr[i];
		j = i;
		while(j > 0 && arr[j - 1] > tmp)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tmp;
		i++;
	}

}

int binarySearch(int arr[], int len, int n)
{
	bubbleSort(arr,len);
	int begin = 0;
	int end = len - 1;
	while(begin <= end)
	{
		int mid = (begin + end) / 2;
		if(n > arr[mid])
		{
			begin = mid + 1;
		}
		else if(n < arr[mid])
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
//========================================
//========================================
#if 0
void myPuts(const char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

void strLwr(char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int myStrlen(const char str[])
{
	int count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return count;
}

void myStrcpy(char dest[],const char src[])
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void myStrcat(char dest[],const char src[])
{
	int i = 0;
	while(dest[i++] != '\0');
	{
		i++;
	}
	int j = 0;
	while(src[j] != '\0' );
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

}

int myStrcmp(const char str1[], const char str2[])
{
	int i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	return str1[i] - str2[i];

}

void myStrncpy(char dest[], const char src[], size_t n)
{
	int i = 0;
	while(src[i] != '\0' &&  n) // i < n;
	{
		dest[i] = src[i];
		i++;
		n--;  //keyiqu
	}
}

int myStrncmp(char str1[], char str2[], size_t n)
{
	int i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'
			&& --n) 
	{
		i++;
	//	n--;     
	}
	return str1[i] - str2[i];

}

void myStrncat(char dest[], const char src[], size_t n)
{
	int i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	int j = 0;
	while(n--)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}
#endif
#include "function.h"

void swapArrN(int arr[],int len, size_t n)
{
	while(n--)
	{
		int i = 1;
		int tmp = arr[len - i];
		while(i < len)
		{
			arr[len - i ] = arr[len - i - 1];
			
			i++;
		}
		arr[0] = tmp;
	}

}


#if 0
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	scanf("%d",&n);
	swapArrN(arr,len,n);
	int i = 0;
	for(i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;

}
#endif

int main()
{
	char str1[100] = "Hello";
	char str2[100] = "World";
	char str3[100] ;
	char str4[100] = "Hellz";
//	printf("%d\n",myStrlen(str1));
//	myStrcpy(str3,str2);
//	myPuts(str3);
//	myStrcat(str1,str2);
//	myPuts(str1);
	printf("%d\n",myStrcmp(str1,str4));

	return 0;
}


#if 0
int main()
{
	int arr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int rows = sizeof(arr) / sizeof(arr[0]);
    
	print2Arr(arr,rows);
	printf("sum = %d\n",sum2Arr(arr,rows));
	sum2ArrBorder(arr,rows);
	printf("border's sum = %d\n",sum2ArrBorder(arr,rows));

//	char str1[100] = "hello";
//	char str2[100] = "nihao";
//	myStrncat(str1,str2,2);
//	myPuts(str1);

	return 0;
}
#endif

#if 0
int main()
{
	char str1[100] = "Hello World!";
	char str2[100] = "Helzo";
	char str3[100] = "C language!";	
	int ret = myStrncmp(str1, str2, 1);
	printf("%d\n", ret);
//	myStrncpy(str1,str3,5);
//	myPuts(str1);
//	strLwr(str1);
//	myPuts(str1);
//	int len = myStrlen(str1);
//	printf("len = %d\n",len);
//	myStrcpy(str2, str1);
//	myPuts(str2);
//	myStrcat(str1, str3);
//	myPuts(str1);
//	int ret = myStrcmp(str1,str3);
//	printf("%d\n",ret);


//	int arr[] = {7,5,3,4,6,8,2,1,9};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverseArr(arr,len);
//	choiceSort(arr,len);
//	bubbleSort(arr,len);
//	insertSort(arr,len);
//	printArr(arr,len);
//	int ret = binarySearch(arr,len,5);
//	if(ret >= 0)
//	{
//		printf("n's index = %d\n",ret);
//	}
//	else
//	{
//		printf("error!\n");
//	}
//	printf("arr's max = %d\n",maxOfArr(arr,len));
	return 0;
}
#endif
