#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int bitDifferNum(int num1, int num2) {
	int count = 0;
	int num = 0;
	num = num1 ^ num2;
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}

int bitOneCount(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}

void Print(int num) {
	printf("偶数位:");
	for (int i = 30; i >=0; i = i - 2) {
		printf("%d ", (num>>i)& 1);
	}
	printf("\n");
	printf("奇数位:");
	for (int i = 31; i >= 1; i = i - 2) {
		printf("%d ", (num>>i) & i);
	}
	printf("\n");
}


int main() {

	Print(10);
   
	//printf("%d", bitOneCount(15));
	//int a = 10;        //1010
	//int b = 9;          //1001
	//	            
	// a = a + b;
	// b = a - b;
	// a = a - b;

	//a = a ^ b;         //0011
	//b = a ^ b;         //1010
	//a = a ^ b;         //1001
	//printf("%d %d", a, b);

	//printf("%d", bitDifferNum(1999, 2299));
	return 0;
}

//int main() {
	//int a, b, c;
	//a = 5;
	//c = ++a;
	//b = ++c, c++, ++a, a++;
	//b += a++ + c;
	//printf("a = %d b = %d c = %d\n:", a, b, c);

	//int i = 1;
	//int ret = (++i) + (++i) + (++i);
	//printf("ret = %d\n", ret);

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++ && ++b && c++ & d++;
	// i = a++ || ++b || c++ || d++;
	//printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//int a = 0x11223344;
	//short b = (short)a;
	//short a = 0xf122;
	//int b = (int)a;
	//printf("%x\n", b);
//	return 0;
//}