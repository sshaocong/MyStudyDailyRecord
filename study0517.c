#include<stdio.h>
#include<string.h>
#include<math.h>

//void reverse(char str[]) {
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right) {
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		
//		left++;
//		right--;
//	}
//	printf("%s", str);
//}

//void snNum(int num, int k) {
//	int tmp = 0;
//	int sum = 0;
//	for (int i = 0; i < k; i++) {
//		tmp = 10 * tmp + num;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//}

void drinkNum(int money) {
	int total = money;
	int empty = money;
	while (empty > 1) {
		total += empty / 2;
		empty = empty/2+empty%2;

	}
	printf("ret = %d\n", total);
}

int main() {
	//int arr[] = { 2,0,2,1,0,5,1,7 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//for (int* p = arr; p < arr+size; p++) {
	//	printf("%d ", *p);
	//}
	//char str1[] = "i love study ";
	//reverse(str1);
	//snNum(2,5);
	//int i = 0;
	//for (i = 0; i <= 100000; i++) {
	//	int count = 1;
	//	int tmp = i;
	//	int sum = 0;
	//	while (tmp / 10) {
	//		count++;
	//		tmp = tmp / 10;
	//	}
	//	tmp = i;
	//	while (tmp) {
	//		sum += pow(tmp%10,count);
	//		tmp = tmp / 10;
	//	}
	//	if (sum == i) {
	//		printf("%d\n", i);
	//	}
	//}
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j < 2*i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int i = 0; i < 6; i++) {
	//	for (int j = 0; j < i+2; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j <2*(6-i)-1 ; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	drinkNum(20);
	return 0;
}