#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a,&b,&c);
	int i = a % 2 ? 1 : 0; // 若i为奇数 则余数 > 0 则返回 1 
	int j = b % 2 ? 1 : 0;
	int k = c % 2 ? 1 : 0;
	int m = j + k + i;
	char* n = (m != 2)? "not" : "yes";
	printf("%s\n",n);

	return 0;
}

/*
int main(){
	int a = 0;
	printf("请输入一个三位数：\n");
	scanf("%d",&a);
	int b = (a % 10) * 100 +( (a / 10) % 10 ) * 10 + (a / 100);
	printf("%d\n",b);

	return 0;
}
*/

#if 0
//组合数
int main(){
	printf("请输入两个两位数a b：\n");
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int c = (a % 10) * 1000 + (b % 10) 
			* 100 + (a / 10) * 10 + (b / 10);
	printf("新的组合数 = %d\n",c);
	return 0;
}
#endif

#if 0 
//圆周长 和 面积
int main(){
	printf("请输入圆的半径：\n");
	float r = 0.0;
	scanf("%f",&r);
	float zc = 3.14 * 2 * r;
	float s = 3.14 * r * r;
	printf("圆周长 = %f\n圆面积 = %f\n",zc,s);
	return 0;
}
#endif

#if 0
int main(){
	int i = 123456789;
	unsigned short s;
	s = i;
	printf("%u\n",s);

	return 0;
}
#endif

#if 0
int main(){
	char c = 123456789;
	printf("%d\n",c);

	return 0;
}
#endif


#if 0
int main(){
	srand((unsigned int)time(NULL));
	int i = 0;
	for(i = 0;i < 10;++i)
	{
		int k = rand() % 50 + 50;
		printf("%d\n",k);
	}
	
	



//	unsigned int a = 0xFFFFFFFF;
//	printf("%u\n",a);
//	putchar('a');
		
	return 0;
}
#endif
