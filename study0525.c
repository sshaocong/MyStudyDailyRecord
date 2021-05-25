#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ROW 10
#define MAX_COL 10

//void leftSwap(char* str1, char n) {
//	while (n--) {
//		char* cur = str1;
//		char tmp = *cur;
//		while (*(cur + 1) != 0) {
//			*cur = *(cur + 1);
//			cur++;
//		}
//		*cur = tmp;
//	}
//}

int main() {
	char str1[] = "ABCDA";




	system("pause");
	return 0;
}

//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for ( A = 1; A <=5; A++){
//		for ( B = 1; B <= 5; B++){
//			for (C = 1; C <= 5; C++) {
//				for (D = 1; D <= 5; D++) {
//					for (E = 1; E <= 5; E++) {
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 &&
//							A * B * C * D * E == 120) {
//							printf("A=%d B=%d C=%d D=%d E=%d ", A, B, C, D, E);
//						}
//					}
//				}
//			}
//
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}
	//int tri[MAX_ROW][MAX_COL] = { 0 };
	//for (int i = 0; i < MAX_ROW; i++) {
	//	tri[i][0] = 1;
	//	tri[i][i] = 1;
	//}
	//for (int i = 2; i < MAX_ROW; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		tri[i ][j ] = tri[i - 1][j - 1] + tri[i - 1][j];
	//	}
	//}
	//for (int i = 0; i < MAX_ROW; i++) {
	//	for (int j = 0; j <= i; j++) {
	//		printf("%4d", tri[i][j]);
	//	}
	//	printf("\n");
	//}
//	system("pause");
//	return 0;
//}
// 	char str1[] = "ABCD";
//	leftSwap(str1, 1);
//	printf("%s\n",str1);
//	system("pause");
//	return 0;
//}
	//int killer[4] = {0};
	//int i = 0;
	//for (i = 0; i < 4; i++) {
	//	killer[i] = 1;
	//	if ((killer[0] != 1) +
	//		(killer[2] == 1) +
	//		(killer[3] == 1) +
	//		(killer[3] != 1) == 3) {
	//		break;
	//	}
	//	killer[i] = 0;
	//}
	//putchar('A' + i);
//	system("pause");
//	return 0;
//}