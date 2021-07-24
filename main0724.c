#include <stdio.h>

int maxOfTwoNum(int a,int b)
{
	return a < b ? b : a;
}

int maxOfThreeNum(int a,int b,int c)
{
//	int max = a > b ? a : b;
//	return max > c ? max : c;
	int max = a;
	if( max < b)
	{
		max = b;
	}
	if( max < c)
	{
		max = c;
	}
	return max;

}

void printDivN(int n)
{
	if(n == 0)
	{
		return;
	}
	int i = 0;
	for(i = 1;i <= 100;i++)
	{
		if(i % n == 0)
		{
			printf("%d\n",i);
		}
	}

}

int isLeapYear(int year)
{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	int res = 0;
	if(year % 4 == 0 && year % 100 != 0)
	{
		res = 1;
	}
	else if(year % 400 == 0)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	
	return res;

}

int leapYears()
{
	int year = 1900;
	int count = 0;
	for(year = 1900; year <= 2021; year++)
	{
		if(isLeapYear(year))
		{
			count++;
		}
	}
	return count;
}

int daysOfMonth(int year,int month)
{
	int days[] = {31,0,31,30,31,30,31,31,30,31,30,31};
	if(month < 1 || month > 12)
	{
		return -1;
	}

	if(month == 2)
	{
		return isLeapYear(year) ? 29 : 20;
	}
	else
	{
		return days[month - 1];
	}

//	int days = 0;	
/*	if(month == 1 || month == 3 || month == 5 || month == 7 ||
			month == 8 || month == 10 || month == 12)
	{
		days = 31;
	}
	else if(month == 2)
	{
		if(isLeapYear(year))
		{
			days = 29;
		}
		else
		{
			days = 28;
		}
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		days = 30;
	}
	else
	{
		days = -1;
	}
	return days;
*/
/*	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		case 2:
//			switch(isLeapYear(year))
//			{
//				case 0:
//					days = 28;
//				case 1:
//					days = 29;
//			}
			
			days = isLeapYear(year) ? 1 : 0 ;
			break;
		default:
			days = -1;
			break;
	}
*/	
//	return days;
}

int maxCommonDiv(int a,int b)
{
	int smallNum = a < b ? a : b;
	int res = 0;
	int i = 1;
	for(i = 1 ; i <= smallNum; i++)
	{
		if(a % i == 0 && b % i == 0)
		{
			res = i;
		}
	}

	return res;
}

int minCommonMulti(int a,int b)
{
	int bigNum = a > b ? a : b;
	int res = 0;
	int i = 1;
	for(i = bigNum; ; i++)
	{
		if(i % a == 0 && i % b == 0)
		{
			res = i;
			break;
		}
	}

	return res;

}

int isPrimeNum(int n)
{
	int i = 0;
	for( i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void printPrimeNum(int n)
{
	int i = 0;
	for( i = 2; i <= n; i++)
	{
	//	if(isPrimeNum(i) && isPrimeNum(i+2))
	//	{
	//		if(i == 3)
	//		{
	//			printf("%d\n",i);
	//			continue;
	//		}
	//		printf("%d\n%d\n",i,i+2);
	//	}
		if(isPrimeNum(i))
		{
			printf("%d\n",i);
		}
	}

}

int fn(int n)
{
	if(n == 0)
	{
		return n;
	}

	return n + fn(n-1);

}

int factorial( int n)
{
	if(n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}


int fib(int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

//#if 0
int main()
{
	printPrimeNum(100);
//	printf("%d\n",fib(5));
//	printPrimeNum(1000);
//	printf("%d\n",factorial(3));

	return 0;
}
//#endif

//  =======  =======  SINGER GRADE  ============ ======
#if 0
int main()
{
//	printf("%d\n",minCommonMulti(40,20));
//	printf("%d\n",maxCommonDiv(108,96));
	int grade[100] = { 0 };
	int i = 0;
	int count = 0;
	while(1)
	{
		scanf("%d",&grade[i]);
		if(grade[i] == -1)
		{
			break;
		}
		i++;
	}

	for(i = 0;;i++)
	{
		if(grade[i] == -1)
		{
			break;
		}
		count++;
	}
	

	int max = grade[0];
	int min = grade[0];
	int sum = grade[0];

	for(i = 1;i < count;i++)
	{
		sum = sum + grade[i];
		if(max < grade[i])
		{
			max = grade[i];
		}
		if(min > grade[i])
		{
			min = grade[i];
		}		
	}

	sum =( sum - max - min) / (count - 2);

	printf("sum = %d\n",sum);
	return 0;
}
#endif

#if 0
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d",&a,&n);
	int num = 0;
	int res = 0;
	int k = 1;
	while(1)
	{
		num = num + a * k;
		k = k * 10;
		res = res + num;
		printf(" %d ",num);
		n--;
		if(n)
		{
			printf("+");
		}
		else
		{
			break;
		}
	}
	printf("=");
	printf(" %d\n",res);
//	printf("%d\n",daysOfMonth(2021,2));
//	printf("%d\n",leapYears());

//	printf("%d\n",isLeapYear(2100));

//	printDivN(0);
//	char c[3][5] = {"AAAAA","cc","dd"};
//	puts(c[0]);

//	int max = maxOfTwoNum(15,15);
//	printf("%d\n",max);

//	printf("%d\n",maxOfThreeNum(22,16,21));

	return 0;
}
#endif
