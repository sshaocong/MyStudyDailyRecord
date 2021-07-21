#include <stdio.h>


int main()
{
	int arr[] = {7,6,8,4,3,9,2,1};
	int len = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
//	int j = 0;
	int tmp = 0;
	for(i = 1; i < len; i++)
	{
//		j = i;
		tmp = arr[i];
		while( i > 0 && arr[i - 1] > tmp)
		{
			arr[i] = arr[i - 1];
			i--;
		}
		arr[i] = tmp;
	
	}
//	int bound = 0;
/*	for(bound = 0;bound < len -1 ;bound++)
	{
		int cur = 0;
		for(cur = len - 1;cur > bound;cur--)
		{
			if(arr[cur] < arr[cur - 1])
			{
				int tmp = arr[cur];
				arr[cur] = arr[cur-1];
				arr[cur-1] = tmp;
			}
		}
	}
*/	
/*	for(bound = len - 1;bound > 0; bound--)
	{
		int cur = 0;
		for(cur = 0;cur < bound ; cur++)
		{
			if(arr[cur] > arr[cur+1])
			{
				int tmp = arr[cur];
				arr[cur] = arr[cur+1];
				arr[cur+1] = tmp;
			}
		}
	}
*/
/*	int i = 0;
	int j = 0;
	for(i = 0; i < len-1; i++)
	{
		for(j = i + 1;j < len;j++)
		{
			if(arr[i]>arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
*/
	for(i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}


#if 0 
int main()
{
	int a[] = {1,2,3,4,5};
	int len = sizeof(a) / sizeof(a[0]);
	int right = len - 1;
	int left = 0;
	while(right > left)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		right--;
		left++;
	}
	int i = 0;
	while(i < len)
	{
		printf("%d ",a[i]);
		i++;
	}
	printf("\n");


	return 0;
}
#endif


#if 0
//作业第二题
int main()
{
	int n = 0;
	int a[9] = {1,2,3,4,5,6,7,8,9};
	scanf("%d",&n);
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;		
	while(n)
	{
		int tmp = a[len - 1];
		for(i = 0;i <= len-2;i++)
		{	
			a[len - 1 - i] = a[len - 2 -i];
		}
		a[0] = tmp;
		n--;
	}
	for(i = 0;i < len;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");
	return 0;
}
#endif

//作业第一题。
#if 0
int main()
{
	int a[] = {1,2,3,4,5};
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = len - 1;
	for( i = 0; i < len/2; i++)
	{
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
	for(i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
#endif

//====================================插入排序=====================
#if 0
int main()
{	
	int a[] = {7,2,4,6,8,1};
	int len = sizeof(a) / sizeof(a[0]);
	int b[len];
	b[0] = a[0];
	
	int i = 0;
	int j = 0;
	int tmp = 0;
	for(i = 1; i < len; i++)
	{
		j = i;
		tmp = a[i];
		while( j > 0 && b[j - 1] > tmp)
		{
			b[j] = b [j - 1];
			j--;
		}
		b[j] = tmp;
	
	}

	for(i = 0; i < len; i++)
	{
		a[i] = b[i]; 
	}
	for(i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}
#endif


//=============================冒泡排序=============================================
#if 0
int main()
{
	
	int a[] = {7,5,3,1,9,6,8,4,2};
	int len = sizeof(a) / sizeof(a[0]);
	int bound = 0;
	for(bound = len - 1; bound > 0;bound--)
	{
		int cur = 0;
		for(cur = 0; cur < bound; cur++)
		{
			if(a[cur] > a[cur+1])
			{
				int tmp = a[cur];
				a[cur] = a[cur+1];
				a[cur+1] = tmp;
			}
		}
	}

	int i = 0;	
	for(i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
#endif


//=====================================选择排序======================================
#if 0
int main()
{	
	int a[] = {7,5,3,1,9,6,8,4,2};
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = 0;
	for(i = 0;i < len - 1; i++)
	{
		for(j = i + 1;j < len;j++)
		{
			if(a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			} 
		}
	}

	for(i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
#endif
//==========================================================================================
#if 0
int main()
{	
	int a[] = {1,2,3,4,5,6,7,8,9,0,10,11,12,13};
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int mid = len / 2;
	
	for(i = 0;i < mid;i++)
	{
		int tmp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = tmp;
	}
	
	for(i = 0;i < len; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
#endif

#if 0
int main()
{	
	int a[] = {16,2,3,4,15,6,17,8,9,7};
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int max = a[0];
	int maxless = 0x80000000;
	for(i = 1; i < len; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	for(i = 0; i < len;i++)
	{
		if( maxless < a[i] && a[i] != max)
		{
			maxless = a[i]; 
		}
	}
	printf("maxless = %d\n",maxless);
	printf("max = %d\n",max);
	return 0;
}
#endif

#if 0
int main()
{
	
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(a) / sizeof(a[0]);      //  数组下标范围！！！0,len-1
	int i = 0;
	int sum = 0;
	for(i = 0;i < len; i++)
	{
		sum = sum + a[i];
	}
	printf("%d\n",sum);
	return 0;
}
#endif

#if 0
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,0,10,11,12,13};
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int count = 0;
	for(i = 0; i < len; i++)
	{
		if( a[i] % 3 == 0)
		{
			count++;
		}
	}
	printf("%d\n",count);

	return 0;
}
#endif
#if 0
int main()
{
	int num  = 0;
	scanf("%d",&num);
	double res = 0.0;
	int k = 1;
	int flag = 1;
	double i = 1.0;
	
	for(k = 1; k <= num;k++)
	{
		res = res + flag * 1.0 / k;
		i = flag * 1.0 / k;
		printf("%lf ",i);
		flag = flag * -1;
	
	}

	printf("\nsum =  %lf\n",res);
	return 0;
}
#endif

#if 0
int main()
{
	int num = 0;
	scanf("%d",&num);
	int fib = 0;
	int fib1 = 1;
	int fib2 = 1;
	int sum = 2;
	int i = 0;
	if(num >= 3)
	{
		printf("1 1");
		for(i = 3; i <= num;i++){
			fib = fib1 + fib2;
			sum = sum + fib;
			fib1 = fib2;
			fib2 = fib;
			printf(" %d",fib);
		}
		printf("\nsum = %d\n",sum);
	}
	if(num == 1)
	{
		fib = 1;
		sum = 1;
		printf("%d \n",fib);
		printf("sum = %d \n",sum);
	}
	if(num == 2)
	{
		fib = 1;
		sum = 2;		
		printf("1 %d \n",fib);
		printf("sum = %d \n",sum);
	}
//	printf("fib = %d\n",fib);
//	printf("sum = %d\n",sum);
	return 0;
}
#endif
