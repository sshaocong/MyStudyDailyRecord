#include<stdio.h>

int main() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i+1 ; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j<=i ; j++) {
			printf(" ");
		}
		for (int j = 0; j <2*6-1-2*i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//void SnSum(int num, int num1) {
//	int tmp = 0;
//	int sum = 0;
//	for (int i = 0; i < num1; i++) {
//		tmp = tmp * 10 + num;
//		sum = sum + tmp;
//	}
//	printf("ret = %d\n", sum);
//}
//
//int main() {
//	SnSum(2, 5);
//	return 0;
//}
	//int num = 10;
	//int* p = &num;
	//printf("%p\n", p);
	//int** p2 = &p;
	//printf("%p\n", *p2);
	//int arr[] = { 9,5,2,7 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//int* p = arr;
	//void* p2 = p;
	//printf("%d\n", *p2);
	//int* p = arr;
	//for (int i = 0; i < 4; i++) {
	//	printf("%d ", *(p+i));
	//}
	//printf("\n");
	//for (int i = 0; i < 4; i++) {
	//	printf("%d ", p[i]);
	//}
//	return 0;
//}