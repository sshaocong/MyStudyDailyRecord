#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ROW 3
#define MAX_COL 3

int yang(int arr[MAX_ROW][MAX_COL], int num) {
	int row = 0;
	int col = MAX_COL - 1;
	int tmp = arr[row][col];
	while (1) {
		if (tmp == num) {
			return 1;
		}
		else if (tmp < num && col >= 0) {
			tmp = arr[++row][col];
		}
		else if (tmp > num && col >= 0) {
			tmp = arr[row][--col];
		}
		else {
			return 0;
		}
	}
}

int main() {
	int arr[MAX_ROW][MAX_COL] = { 
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	printf("数组为:\n");
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%3d", arr[row][col]);
		}
		printf("\n");
	}
	int num = 0;
	printf("请输入要查找的元素num:");
	scanf("%d", &num);
	if (yang(arr, num)) {
		printf("num存在于数组中");
	}
	else {
		printf("num不存在数组中");
	}
	
	return 0;
}

//void leftSwap(char* str, int n) {
//	while (n--) {
//		char* cur = str;
//		char tmp = *cur;
//		while (*(cur + 1) != 0) {
//			*cur = *(cur + 1);
//			cur++;
//		}
//		*cur = tmp;
//	}
//}
//
//int main() {
//	while(1){
//		char str1[256] = "\0";
//		char str2[256] = "\0";
//		printf("请输入两个字符串\n");
//		char* ret1 = scanf("%s", str1);
//		char* ret2 = scanf("%s", str2);
//		if (ret1 == NULL || ret2 == NULL) {
//			break;
//		}
//		char n = 1;
//		while (n < (unsigned char)strlen(str1)) {
//			leftSwap(str1, n);
//			if (strcmp(str1, str2) == 0) {
//				printf("1\n");
//				break;
//			}
//			n++;
//			if (n >= (unsigned char)strlen(str1)) {
//				printf("0\n");
//			}
//		}
//	}
//	return 0;
//}
//typedef int (*Cmp) (int x, int y);
//
//void bubbleSort(int arr[], int size,Cmp cmp) {
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			if (cmp(arr[cur] , arr[cur - 1])) {
//				int tmp = arr[cur];
//				arr[cur] = arr[cur - 1];
//				arr[cur - 1] = tmp;
//			}
//		}
//	}
//}
//
//int less(int x, int y) {
//	return x < y ? 1 : 0;
//}
//
//int bigger(int x, int y) {
//	return x > y ? 1 : 0;
//}
//
//int main() {
//	int arr[] = { 9,5,2,7,3,6,8,1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr,size,less);
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", arr[i]);
//	}
//
//	printf("=======================\n");
//	bubbleSort(arr, size, bigger);
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}