#include<stdio.h>
#include<stdlib.h>
//����Ǵ���ֽ���, �ͷ���1, ���򷵻�0.
int isBigEnd() {
	int num = 0x11223344;
	int* p = &num;
	//���ָ��֮���ǿ������ת��,��Ӱ��ָ���ڲ��洢�ĵ�ֵַ.
	//ֻӰ����������ô���������ַ���ڴ�ĳ��ȵ����.
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