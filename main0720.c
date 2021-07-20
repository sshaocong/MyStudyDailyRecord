#include <stdio.h>
#include <math.h>

#if 0
int main()
{
	int i = 0;
	for( i = 1; i <= 5; i++)
	{
		int j = 0;
		for(j = 4; j>=i; j--)
		{
			printf(" ");
		}
		int k = 1;
		for(j = 1;j <= 2*i - 1;j++)
		{
		
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	for( i = 1;i <= 4;i++)
	{
		int j = 0;
		for(j = 1;j <= i; j++)
		{
			printf(" ");
		}
		int k = 1;
		for(j = 1;j >= 2 * i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}

	return 0;
}
#endif


#if 0
int main()
{
	int x = 0;//1fen
	int y = 0;//2fen
	int z = 0;//5fen
	for(x = 1;x <= 100; x++)
	{	
		for(y = 1; y<=50; y++)
		{
			for(z = 1; z <= 20; z++)
			{
				if(x + y * 2 + z * 5 == 100 && x + y + z == 50)
				{
					printf("%d %d %d\n",x,y,z);
					break;
				} 
			}
		}
	}

	return 0;
}
#endif

#if 0
int main()
{
	int i = 100;
	for(i = 100; i <= 300; i++)
	{
		int gnum = i % 10;
		int bnum = i / 100;
		int num = gnum + bnum;
		if(num % 3 == 0)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}
#endif

//作业第三题  其他两题在下面。
//#if 0
int main()
{	
	int n = 0;
	scanf("%d",&n);
	int fib = 0;
	int sum = 0;

//	if( n == 1)
//	{
//		fib = 1;
//
//	}
//	if( n ==2 )
//	{
//		fib = 1;
//	}

	int i = 0;
	int fib1 = 1;
	int fib2 = 1;
	for(i = 3;i <= n;i++)
	{
		
		fib = fib1 + fib2;
		sum = sum + fib;
		fib1 = fib2;
		fib2 = fib;
	}
	sum = sum + 2;

	if( n == 1)
	{
		fib = 1;
		sum = 1;
	}
	if( n == 2 )
	{
		fib = 1;
		sum = 2;
	}
	printf("fib = %d\n",fib);
	printf("sum = %d\n",sum);
	return 0;
}
//#endif

//======================================================
//作业第二题
#if 0
int main()
{
	int i = 0;
	int res = 0;
	scanf("%d",&i);
	int k = 1;
	if(i <= 5)
	{
		for(k = 1;k <= i;k++)
		{
			res = res + k;
		}
	}
	else if(i <= 10)
	{ 
		res = 100;
		for(k = 1; k <= i;k++)
		{
			res = res - (i + 1 - k);				
		}
		
	}
	else
	{
		res = i * i;
	}
	printf("res = %d\n",res);
	return 0;
}
#endif

//============================================
//作业第一题
#if 0
int main()
{
	int i = 0;
	int count = 0;
	while(1)
	{
		if(i % 2 == 1 && i % 3 == 1 && i % 5 ==1)
		{
			printf("%d ",i);
			count++;
		}
		i++;
		if( count == 10)
		{
			break;
		}
	}
	printf("\n");
	return 0;
}
#endif




//============================================




#if 0
int main()
{
	int num = 0;
//	scanf("%d",&num);
	for(num = 2; num < 100; num++)
	{
		int i = 2;
		for(i = 2;i < num;++i)
		{
			if(num % i == 0 )
			{
				break;
			}
		}
		if( i == num)
		{
			printf("%d \n",num);
		}
	//	else
	//	{
	//		printf("%d not sushu\n",num);
	//	}
	}
	return 0;
}
#endif

#if 0
int main()
{
	int i = 100;
	for(i = 100;i < 1000;i++)
	{
		int x1 = i % 10;
		int x2 = i / 10 % 10;
		int x3 = i / 100;
//		int num = x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3;
		int num = pow(x1,3)+pow(x2,3)+pow(x3,3);	
		if( i == num)
		{
			printf("%d\n",num);
		}
		
	}
	return 0;
}
#endif

#if 0
int main()
{
	int i = 0;
	int count = 0;
	printf("hui wen shu fen bie shi:\n");
	for(i = 0; i <= 1000 ; i++)
	{
		int tmp = i;
		int m = 0;
		while(tmp)
		{
			m = m * 10 + tmp % 10;
			tmp = tmp / 10;
		}
		if( i == m)
		{
			count++;
			printf("%d\n",m);
		}
	
	}
	printf("huiwenshu you %d ge\n",count);
	return 0;
}
#endif


#if 0
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d",&n);
	int tmp = n;

	while(tmp)
	{
		m = m * 10 + tmp % 10;
		tmp = tmp / 10;
	}

	if(n == m)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}
#endif

#if 0
int main()
{
	int i = 0;
	int count = 0;
	while(i <= 100)
	{
		if(i % 3 == 0)
		{
			count++;
		}
		i++;
	}
	printf("%d\n",count);
//	printf("%d\n",0%2);
	return 0;
}
#endif

#if 0
int main()
{
	int num = 0;
	scanf("%d",&num);
	int x1 = num % 10;
	int x2 = num / 10 % 10;
	int x3 = num / 100 % 10;
	int x4 = num / 1000;
	int t;
	if(x1 > x2)
	{
		t = x1;
		x1 = x2;
		x2 = t;
	}
	if(x1 > x3)
	{
		t = x1;
		x1 = x3;
		x3 = t;
	}
	if(x1 > x4)
	{
		t = x1;
		x1 = x4;
		x4 = t;
	}
	if(x2 > x3)
	{
		t = x2;
		x2 = x3;
		x3 = t;
	}
	if(x2 > x4)
	{
		t = x2;
		x2 = x4;
		x4 = t;
	}
	if(x3 > x4)
	{
		t = x3;
		x3 = x4;
		x4 = t;
	}
	printf("%d %d %d %d\n",x1,x2,x3,x4);
	
	return 0;
}
#endif
#if 0
int main()
{
	int num = 0;
	scanf("%d",&num);
	int x1 = num % 10;
	int x2 = num / 10 % 10;
	int x3 = num / 100 % 10;
	int x4 = num / 1000;
	int arr[4]={ x1,x2,x3,x4 };
//	scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
	int bound = 3;
	for(bound = 3;bound > 0;bound--)
	{
		int cur = 0;
		for(cur = 0;cur < bound;cur++)
		{
			if(arr[cur] > arr[cur+1])
			{
				int tmp = arr[cur];
				arr[cur] = arr[cur+1];
				arr[cur+1] = tmp;
			}
		}
	}
	int i = 0;
	for(i = 0;i < 4;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
#endif
