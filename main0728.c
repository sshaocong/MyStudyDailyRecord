#include <stdio.h>
#include <string.h>

/*
void insert()
{
	char str[100];
	gets(str);

	char str1[100];
	int i = 0;
	int j = 0;
	while(str[i] != '\0')
	{	
		if(j % 3 == 2 )
		{
			str1[j] = ' ';
			j++;
		}

		str1[j] = str[i];
		i++;
		j++;
	}
	str1[j] = '\0';
	puts(str1);
}
#if 0
void bubbleSort(int arr[],int len)
{
	int bound = 0;
	for( bound = len - 1; bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
			if(arr[cur] > arr[cur+1])
			{
				char tmp = arr[cur];
				arr[cur] = arr[cur+1];
				arr[cur+1] = tmp;
			}
		}
	}

}
#endif
void merge2Arr(int arr1[], int arr2[], int len1, int len2,int arr[])
{
	int i = 0;
	while(i < len1)
	{
		arr[i] = arr1[i];
		i++;
	}
	int j = 0;
	while(j < len2)
	{
		arr[i] = arr2[j];
		i++;
		j++;
	}

	int len = len1 + len2;
	bubbleSort(arr,len);
}
*/

void maxAndMinOf3Num(int i, int j, int k, int* pmax, int* pmin)
{
//	int tmp = i > j ? i : j;
//	*pmax = tmp > k ? tmp : k;
	*pmax = i > j ? i : j;
	*pmax = *pmax > k ? *pmax : k;
	*pmin = i < j ? i : j;
	*pmin = *pmin < k ? *pmin : k;
}

void swap2Num(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
#if 0
void printArr3(int *p, int len)
{
	int i = 0;
	for(i = 0; i < len; i++)
	{
		if(*p % 3 == 0)
		{
			printf("%d\n",*p);
		}
		p++;	
	}
}

int sumOfArr(int *p, int len)
{
	int i = 0;
	int sum = 0;
	for(i = 0; i < len; i++)
	{
		sum = sum + *p++;		
	}
	return sum;
}

void reverseArr(int* p, int len)
{
	int i = 0;
	for(i = 0; i < len / 2; i++)
	{
	//	int tmp = *(p + i);
	//	*(p + i) = *(p + len - i - 1);
	//	*(p + len - i - 1) = tmp;
		swap2Num(p + i, p + len - i - 1);
	}

}

void printArr(int* p,int len)
{
	int i = 0;
	for(i = 0; i < len; i++)
	{
		printf("%d\n",*p++);
	}
}
#endif
//================迭代===========================
//===============================================
void printArr(int* begin, int* end)
{
	while(begin <= end)
	{
		printf("%d\n",*begin);
		begin++;
	
	}

}


void printArr3(int* begin, int* end)
{
	while(begin <= end)
	{
		if(*begin % 3 == 0)
		{
			printf("%d\n",*begin);
		}
		begin++;
	}

}

void reverseArr(int* begin, int* end)
{
	while(begin < end)
	{
		swap2Num(begin, end);
		begin++;
		end--;
	}
}


void choiceSort(int* begin, int* end)
{
	for(;begin < end;begin++)
	{
		int* p = begin + 1;
		for(;p <= end;p++)
		{
			if(*begin > *p)
			{
				swap2Num(begin, p);
			}
		}
	}

}

void bubbleSort(int* begin, int* end)
{
	for(;end > begin;end--)
	{
		int* p = begin;
		for(;p < end;p++)
		{
			if(*p > *(p + 1))
			{
				swap2Num(p,(p+1));
			}
		}
	}

}

void insertSort(int* begin, int* end)
{
/*
	int i = 0;
	int tmp = 0;
	for(i = 0;i < len - 1;i++)
	{
		tmp = *(begin + i + 1);
		while(i > -1 && *(begin + i) > tmp)
		{
			*(begin + i + 1) = *(begin + i);
			i--;
		}
		swap2Num(begin + i +1,&tmp);
	}
*/
	int tmp = 0;
	int* p = begin - 1;
	for(;begin < end; begin++)
	{
		tmp = *(begin + 1);
		while(begin > p && *begin > tmp)
		{
			*(begin + 1) = *begin;
			begin--;
		}
		*(begin + 1) = tmp;
	
	}
}



#if 0
int* binary(int* begin, int* end, int n)
{
	bubbleSort(begin, end);
	while(begin <= end)
	{
		int* mid = begin + (end - begin) / 2;
		if(*mid < n)
		{
			begin = mid + 1;
		}
		else if(*mid > n)
		{
			end = mid - 1;
		}
		else
		{
			return mid;
		}
	}

	return NULL;
}
#endif

int* binary(int* begin, int* end, int n)
{
	bubbleSort(begin, end);
	if(end < begin)
	{
		return NULL;
	}
	int* mid = begin + (end - begin) / 2;
	
	if(n > *mid)
	{
		return binary(mid + 1, end, n);
	}
	else if(n < *mid)
	{
		return binary(begin, mid - 1, n);
	}
	else
	{
		return mid;
	}
}

int main()
{	
//	int arr[] = {0,-1,-5,-4,-3,-2};
	int arr[] = {3,6,4,7,9,5,2,1,8,11,12,17,0};
	int len = sizeof(arr) / sizeof(arr[0]);
	insertSort(arr, arr + len - 1);
	printArr(arr,arr + len - 1);

	return 0;
}




//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int arr[] = {3,6,4,7,9,5,2,1,8,11,12,17,0};
//	int len = sizeof(arr) / sizeof(arr[0]);

//	printArr3(arr,arr + len - 1);
//	reverseArr(arr, arr + len - 1);
//	printArr(arr, arr + len - 1);
//	choiceSort(arr, arr + len - 1);
//	bubbleSort(arr, arr + len - 1);
//	insertSort(arr, arr + len - 1);
//	int* ret = binary(arr, arr + len - 1, 17);
//	printArr(arr, arr + len - 1);
//	printf("******************\n");
//	if(ret == NULL)
//	{
//		printf("error!\n");
//	}
//	else
//	{
//		printf("%d\n",*ret);
//	}
//	return 0;
//}
#if 0
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int len = sizeof(arr) / sizeof(arr[0]);
//	printArr3(&arr[0],len);
//	printf("sum = %d\n",sumOfArr(arr,len));
	reverseArr(arr,len);
	printArr(arr,len);
	return 0;
	printf("******************");
}
#endif

#if 0
int main()
{
	int i = 1;
	char* p;
	p = (char * )(&i);
	if(*p == 1)
	{
		printf("little endian\n");
	}
	else if(*p == 0)
	{
		printf("big endian\n");
	}

//	int i = 100;
//	int j = 150;
//	int k = 125;
//	swap2Num(&i, &j);
//	printf("%d\n%d\n",i,j);
	
//	int max;
//	int min;
//	maxAndMinOf3Num(i, j, k, &max, &min);
//	printf("max = %d\nmin = %d\n", max, min);
	return 0;
}
#endif

#if 0
int main()
{
	int arr1[] = {1,2,3,4,7,9};
	int arr2[] = {3,4,5,6,8};
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	
	int len = len1 + len2;
	int arr[len];

	merge2Arr(arr1,arr2,len1,len2,arr);
	int i = 0;
	for(i = 0; i < len; i++)
	{
		printf("%d\n",arr[i]);
	}
	

//	insert();
	return 0;
}
#endif
