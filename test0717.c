#include <stdio.h>
#include <math.h>

int main(){
	int a = 0; 
	int b = 0;
	float x = 0.0;
	float y = 0.0;
	char c1 = 0 ;
	char c2 = 0;
	scanf("%d%d%f%f %c %c",&a,&b,&x,&y,&c1,&c2);
	printf("a = %d b = %d x = %.1f y = %.2f c1 = %c c2 = %c \n"
			, a, b, x, y, c1, c2);

	return 0;
}


#if 0 
int main(){
	int i = 0;
	for(i = 0;i < 3; i++){
		int j = 0;
		for(j = 0;j < 2 - i;j++){
			printf(" ");
		}
		int k = 0;
		for(k = 0;k < 1 + 2 * i;k++){
			printf("*");
		}
		printf("\n");
	}
	
	int a = 0;
	for(a = 0;a < 2; a++){
		int b = 0;
		for(b = 0;b < 1 + a;b++){
			printf(" ");
		}
		int c = 0;
		for(c = 0;c < 3 - 2 * a;c++){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
#endif

#if 0
int main(){
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float s = 0.0;
	float area = 0.0;

	printf("input a b c:\n");
	int ret = scanf("%f%f%f", &a, &b, &c);
	while(ret != 3){
		printf("erro ! reinput\n");
		while(getchar() != '\n'){
		}
		ret = scanf("%f%f%f", &a, &b, &c);
	}
	s = ( a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("area = %f\n",area);

	return 0;
}
#endif


#if 0
int main(){
	int i = 0;
	int j = 0;
	int ret = scanf("%d%d",&i,&j);
	
	while(ret != 2){
		printf("erro! reinput\n");
		while(getchar() != '\n'){
		}
		ret = scanf("%d%d", &i, &j);
	}
	printf("%d + %d = %d\n", i, j, i + j);

	return 0;
}
#endif


#if 0
int main(){

	int i = 123;
	int j = 20;
	
	printf("%lld\n",12345678987456132);
//	printf("%.2f\n",(int)(100.559*100)/100.0);	
	
//	printf("%#8o + %#08X = %8d \n",i,j,i + j);

//	printf("hello world%X\n",-1);
	return 0;

}
#endif
#if 0
int main(){

	char c1,c2,c3,c4,c5;
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = getchar();
	c5 = getchar();
	
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');

//	int ret = getchar();
//	printf("%c\n",ret);

	return 0;
}
#endif

#if 0
int main(){

	putchar('h');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar(' ');
	putchar('w');
	putchar('o');
	putchar('r');
	putchar('l');
	putchar('d');
	putchar('\n');
//	unsigned short c = 65536;
//	int b;
//	printf("%d\n",b=c);
	return 0;
}
#endif
