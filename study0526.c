#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void leftRevolve(char* str,char n) {
	while (n--) {
		char* cur = str;
		char tmp = *cur;
		while (*(cur+1)!=0) {
			*cur = *(cur + 1);
			cur++;
		}
		*cur = tmp;
	}
}

int outputBig(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入要判断的两个数:\n");
	int ret = scanf("%d %d",&a,&b);
	while (c = a % b) {
		a = b;
		b = c;
	}
	printf("%d\n", b);


	//for (int i = 1; i <= 100; i++) {
	//	if (i % 3 == 0) {
	//		printf("%d\n", i);
	//	}
	//}
	//int a, b, c, tmp;
	//printf("请输入三个数a b c:\n");
	//int ret = scanf("%d %d %d",&a,&b,&c);
	//if (a < b) {
	//	tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c) {
	//	tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c) {
	//	tmp = c;
	//	c = b;
	//	b = tmp;
	//}
	//printf("%d %d %d", a, b, c);
	//printf("%d\n",outputBig(10, 20));
	//char str[] = "ABCD";
	//leftRevolve(str, 1);
	//printf("%s\n", str);
	//int A = 0;
	//int B = 0;
	//int C = 0;
	//int D = 0;
	//int E = 0;
	//for (A = 1; A <= 5; A++) {
	//	for (B = 1; B <= 5; B++) {
	//		for (C = 1; C <= 5; C++) {
	//			for (D = 1; D <= 5; D++) {
	//				for (E = 1; E <= 5; E++) {
	//					if (((B == 2) + (A == 3) == 1) &&
	//						((B == 2) + (E == 4) == 1) &&
	//						((C == 1) + (D == 2) == 1) &&
	//						((C == 5) + (D == 3) == 1) &&
	//						((E == 4) + (A == 1) == 1) &&
	//						A * B * C * D * E == 120) {
	//						printf("A=%d B=%d C=%d D=%d E=%d ", A, B, C, D, E);
	//					}
	//				}
	//			}
	//		}
	//	}
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

	return 0;
}