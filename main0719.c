#include <stdio.h>
#include <math.h>

int main()
{
	int arr[4] = { 0 };
	scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
//	int bound = 0;
//	for(bound = 0;bound < 4;bound++)
//	{
//		int cur = 0;
//		for(cur = 3; cur > bound;cur--)
//		{
//			if(arr[cur] < arr[cur-1]){
//				int tmp = arr[cur];
//				arr[cur] = arr[cur-1];
//				arr[cur-1] = tmp; 
//		}	
//	}
	int bound = 0;
	for(bound = 3; bound >= 0;bound--)
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
	
	int k = 0;
	for(k = 0 ; k < 4 ;k++)
	{
		printf("%d\n",arr[k]);
	}

	return 0;
}

#if 0
int main()
{
	int i = 0;
	int profit = 0;
	scanf("%d",&i);
	int tol = i / 100000;
	switch(tol)
	{
	case 0:
		profit = i * 0.1;
		break;
	case 1:
		profit = 100000 * 0.1 + (i - 100000) * 0.075; 
		break;
	default:
		printf("no\n");
		break;
	}
	printf("%d\n",profit);
	return 0;
}
#endif

#if 0
int main()
{
	double i = 0;
	double profit = 0;
	scanf("%lf",&i);
	if(i <= 100000)
	{
		profit = i * 0.1; 
	}
	else if(i <= 200000)
	{
		profit = 100000 * 0.1 + (i - 100000) * 0.075;
	}
	else if(i <= 400000)
	{
		profit = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05;
	}
	else if(i <= 600000)
	{
		profit = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000) * 0.03;
	}
	else if(i <= 1000000)
	{
		profit = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000) * 0.015;
	}
	else
	{
		profit = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + 1000000 * 0.001;
	}
	printf("%f\n",profit);
	return 0;
}
#endif

#if 0
int main()
{
	int num = 0;
	scanf("%d",&num);
	while(num > 99999 || num < 1)
	{
		printf("error! reinput!\n");
		while( getchar() != '\n')
		{
		}
		scanf("%d",&num);
	}
	int count = 0;
	int nNum = 0;
	int k = 0;
	int tmp = num;
	int tmp1 = num;
//	int i = 0;
//	printf("num 的每一位分别为：");
	while(num)
	{
		count++;
//		i = num % 10;
//		printf("%d   ",i);
//		nNum = nNum * 10 + num % 10;
		num = num / 10;
	}
	printf("num 为 %d 位数\n",count);
//	printf("new num 为 %d \n",nNum);
	printf("num的每一位数是：\n");
	while(count)
	{
		count--;
		k = tmp / pow(10,count);	
		nNum = nNum * 10 + tmp1 % 10;
		tmp1 = tmp1 / 10;
		tmp = tmp - k * pow(10,count);
		printf("%d ",k);
	}
	printf("\n");
	printf("new num is %d\n",nNum);
	return 0;
}
#endif

#if 0
int main()
{
	char c = 0;
	c =	getchar();

	if(c >= 'a' && c < 'z'|| c >= 'A' && c < 'Z')
	{
		c = c + 1;
	}
	else if( c == 'Z'|| c == 'z')
	{
		c = c - 25;
	}
	else
	{
		c = -1;
	}

	if(c == -1){
		printf("error!\n");
	}
	else
	{
		putchar(c);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
int main()
{
	int grade = 0;
	char rank = 0;
	scanf("%d",&grade);
	if(grade < 0 || grade > 100)
	{
		printf("error!\n");
		return 0;
	}
	if(grade < 60)
	{
		rank = 'E';
	}
	else if(grade < 70)
	{
		rank = 'D';
	}
	else if(grade < 80)
	{
		rank = 'C';
	}
	else if(grade < 90)
	{
		rank = 'B';
	}
	else
	{
		rank = 'A';
	}
	printf("%c\n",rank);
	
	return 0;
}
#endif

#if 0
int main()
{
	double x = 0.0;
	double y = 0.0;
	scanf("%lf",&x);
	if(x >= 10)
	{
		y = 3 * x - 11;
	}
	else if(x >= 1)
	{
		y = 2 * x - 1;
	}else
	{
		y = x;
	}
	printf("y = %f\n",y);
	return 0;
}
#endif

#if 0
int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a == 0.0)
	{
		printf("erro !\n");
		return 0;
	}
	double delta = (b * b) - (4 * a * c);
//	double x = 0.0;
//	double x1 = 0.0;
//	double x2 = 0.0;

	if(delta == 0)
	{
		double x = 0.0;
		x =(-b) / (2 * a);
		printf("x = %f\n",x);
	}
	else if(delta > 0)
	{	
		double x1 = 0.0;
		double x2 = 0.0;
		x1 = ( -b + sqrt(delta)) / (2 * a);
		x2 = ( -b - sqrt(delta)) / (2 * a);
		printf("x1 = %f , x2 = %f\n",x1,x2);
	}
	else
	{
		printf("no real root!!\n");
	}
	return 0;
}
#endif


#if 0
int main(){
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d%d",&year,&month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
		case 4:
		case 6:
		case 11:
			day = 30;
			break;
		case 2:
			if((year % 4 == 0 && year % 100 !=0)||
					year % 400 == 0)
			{
				day = 29;
			}
			else
			{
				day = 28;
			}
			break ;
		default:
			day = -1;
//			switch((year % 4 == 0 && year % 100 != 0)||
//					( year % 400 == 0))
//					{
//			 	case 1:
//					day = 29;
//					break;
//				default:
//					day = 28;
//					break;
//					
//			}
			break;
	}
	if(day > 0){
		printf("day = %d\n",day);
	}
	else
	{
		printf("erro!\n");
	}
	return 0;
}
#endif

#if 0
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int max = 0;
	scanf("%d%d%d",&i,&j,&k);
	max = (i > j ? i : j) > k ? (i > j ? i : j) : k;
//	max = i > j ? i : j;
//	max = max > k ? max : k;
	printf("max = %d\n",max);
	return 0;
}
#endif

#if 0
int main()
{
	int year = 0;
	int month = 0;
	int day	= 0;
	scanf("%d%d",&year,&month);
	while(month > 12||month < 1)
	{
		printf("erro! reinput!\n");
		while(getchar() != '\n')
		{
		}
		scanf("%d%d",&year,&month);
	}
	if(month == 1 || month == 3 || month == 5 ||
			month == 7 || month == 8 || month == 10 ||
			month == 12)
	{
		day = 31;
	}
	else if(month == 2)
	{
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			day = 29;
		}
		else
		{
			day = 28;
		}
	}
	else if(month == 4 || month == 6 || month == 9 || month ==11)
	{
		day = 30;
	}
//	else
//	{
//		day = -1;
//	}

//	if(day > 0){
		printf("%d年%d有%d天\n",year,month,day);
//	}
//	else
//	{
//		printf("erro!\n");
//	}
	return 0;
}
#endif

#if 0
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d%d%d",&i,&j,&k);
	int max = 0;

	if(i > j)
	{
		max = i;
	}else
	{
		max = j;
	}

	if(max < k)
	{
		max = k;
	}

	printf("%d\n",max);
	
	return 0;

}
#endif

#if 0
int main(){
	int i = 0;
	scanf("%d",&i);
	if(i % 3 == 0)
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
int main(){
	int year = 0;
	scanf("%d",&year);
	printf("%d\n",((year % 4 == 0) && (year % 100 != 0))
			||(year % 400 == 0));



	return 0;
}
#endif

#if 0
int main(){

	int i = 0;
	scanf("%d",&i);
//	int tmp = i;
	int j = 0;
	while(i){
		j = j * 10 + i % 10;
		i = i / 10;
	//	tmp = tmp / 10;
	}
	printf("%d\n",j);

//	int j = 0;
//	j = i % 10;
//	j = j * 10 + (i / 10) % 10;
//	j = j * 10 + i/100;
//	printf("%d\n",j);

	return 0;
}
#endif
