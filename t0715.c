#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int year = 0;
	printf("please input year:");
	scanf("%d",&year);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
	{
		printf("%d is leap year\n",year);
	}else{
		printf("%d not leap year\n",year);
		
	}






/*	float r = 0.0;
	while(1){
	printf("please enter the value of r:\n");
	scanf("%f",&r);
	if(r <= 0.0)
	{
		printf("input wrong!!!\n");
		continue;
	}else{
		break;
	}
	}
	float s = 0.0;
	float l = 0.0;
	l = 3.14 * 2 * r;
	s = 3.14 * (r*r);
	printf("l = %f,s = %f\n",l,s);
*/
	
//	int a = 0;
//	int b = 0;
//	char c = '%';
//	printf("please enter the value of a b:\n");
//	scanf("%d %d",&a,&b);
//	printf("%d + %d = %d\n",a,b,a + b);
//	printf("%d - %d = %d\n",a,b,a - b);
//	printf("%d * %d = %d\n",a,b,a * b);
//	printf("%d / %d = %d\n",a,b,a / b);
//	printf("%d / %d = %f\n",a,b,((float)a / (float)b));
//	printf("%d %c %d = %d\n",a,c,b,a % b);


//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("please enter the value of a b c:\n");
//	scanf("%d %d %d",&a,&b,&c);
//	int tmp = a;
//	a = c;
//	c = b;
//	b = tmp;
//	printf("a = %d,b = %d,c = %d",a,b,c);
	


//	int x = 0;
//	int y =	0;
//	printf("please enter 2 number(like:(1 2)):\n");
//	scanf("%d %d",&x,&y);
//	int shang = x / y;
//	int yuShu = x % y;
	
//	printf("%d\n%d\n",shang,yuShu);




//	char str[6] ="China";
//	int i = 0;
//	for(;i < 5;i++){
//		str[i] = str[i] + 4;
//	}	
//	printf("%s\n",str);

//	int x,y;
//	x=10;
//	x+=x-=x-x;
//	printf("%d\n",x);
//
//
//
//	char c1 = 'C';
//	char c2 = 'h';
//	char c3 = 'i';
//	char c4 = 'n';
//	char c5 = 'a';
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
//
//
//
//
//	printf("*ab*c\t*de\rf\tg\n");
//	printf("1234567890\n");
//	printf("acd\t123\b9\n");
//	char c = '\t';
//	printf("1234567890");
//	printf("");
//	char c = 'a';
//	printf("%d\n",c);
//	printf("%c\n",c);


//	float f = 0.9;
//	if(abs(f-0.9)<1)
//	{
//		printf("1\n");
//	}else{
//		printf("2\n");
//	}
//
//	float f =(double) 0.9;
//	if(f==0.9)
//	{
//		printf("1");
//	}else
//	{
//		printf("2");
//	}
//	printf("%x\n",f);
//	long long i;
//	i = 1234;
//	printf("%d\n",sizeof(i));
//	unsigned int i = 0xFFFFFFFF;
//	i = i + 1;
//	printf("%u\n",i);
	return 0;
}
