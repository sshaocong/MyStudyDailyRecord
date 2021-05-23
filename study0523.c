#include<stdio.h>
#include<stdlib.h>
//如果是大端字节序, 就返回1, 否则返回0.
int isBigEnd() {
	int num = 0x11223344;
	int* p = &num;
	//这个指针之间的强制类型转换,不影响指针内部存储的地址值.
	//只影响后续解引用代码对这个地址的内存的长度的理解.
	char* p2 = (char*)p;
	if (*p2 == 0x11) {
		return 1;
	}
	return 0;
}

void printLine(int spaceCount, int starCount) {
	for (int i = 0; i < spaceCount; i++) {
		printf(" ");
	}
	for (int i = 0; i < starCount; i++) {
		printf("*");
	}
	printf("\n");
}

void printLingxing() {
	for (int row = 1; row <= 6; row++) {
		printLine(7-row,2*row-1);
	}
	printLine(0, 13);
	for (int row = 6; row >= 1; row--) {
		printLine(7 - row, 2 * row - 1);
	}
}
int main() {
	printLingxing();
	//char a = -1;
	//signed char b = -1;
	//unsigned char c = -1;
	//printf("%d %d %d\n", a, b, c);
	//int num = -10;
	//printf("%d\n", isBigEnd());
	//char num[] = { 0x11,0x22,0x33,0x44 };
	//char str[]="abc";
	system("pause");
	return 0;
}