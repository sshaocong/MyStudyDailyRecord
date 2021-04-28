#include<stdio.h>

int bitOneCount(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}

int main() {

	printf("%d", bitOneCount(10));
	//int a = 10;
	//int b = 20;

	//int tmp = a;
	//a = b;
	//b = tmp;
	// 
	//a = a + b;
	//b = a - b;
	//a = a - b;

	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;

	//printf("%d %d", a, b);

	//int a = 1;
	//int b = 2;
	//printf("%d\n", a & b);
	//printf("%d\n", a | b);
	//printf("%d\n", a ^ b);
	//printf("%x\n", ~a);
	return 0;
}