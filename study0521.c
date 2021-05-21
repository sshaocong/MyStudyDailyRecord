#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void bubbleSort(int* arr, int size) {
	for (int bound = size - 1; bound >= 0; bound--) {
		for (int cur = 0; cur < bound; cur++) {
			if (arr[cur] > arr[cur + 1]) {
				int tmp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] = tmp;
			}
		}
	}
}

int fib(int num) {
	if (num == 1 || num == 2) {
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int sum = 0;
	for (int i = 3; i <= num; i++) {
		sum = last1 + last2;
		last2 = last1;
		last1 = sum;
	}
	return sum;
}

int fib2(int num) {
	if (num == 1 || num == 2) {
		return 1;
	}
	return fib2(num - 1) + fib(num - 2);
}

void func(int num, int n) {
	int sum = 0;
	int cur = 0;
	for (int i = 1; i <= n; i++) {
		cur = cur * 10 + num;
		sum += cur;
	}
	printf("%d\n", sum);
}

int numCount(int num) {
	int count = 0;
	while (num != 0) {
		num /= 10;
		count++;
	}
	return count;
}
int isShuiXian(int num) {
	int sum = 0;
	int oldnum = num;
	int n = numCount(num);
	while (num != 0) {
		int tmp =num % 10;
		num /= 10;
		sum += (int)pow(tmp,n);
	}
	if (sum == oldnum) {
		return 1;
	}
	return 0;
}

int main() {
	for (int i = 1; i <= 100000; i++) {
		if (isShuiXian(i)) {
			printf("%d\n", i);
		}
	}
	//func(2,5);
	//printf("%d\n",fib2(8));
	//printf("%d\n",fib(8));
	//int arr[] = {7,5,3,4,1,2,8,0,9,6};
	//int size = sizeof(arr) / sizeof(arr[0]);
	//bubbleSort(arr, size);
	//for (int i = 0; i < size; i++) {
	//	printf("%d ", arr[i]);
	//}
	//int arr[] = { 1,2,3,4,5,6,7,8 };
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//int num = 0;
	//printf("请输入要查找下标的数字 num : ");
	//int ret = scanf("%d", &num);
	//while (left <= right) {
	//	int mid = (right + left) / 2;
	//	if (num > arr[mid]) {
	//		left = mid + 1;
	//	}
	//	else if (num < arr[mid]) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("找到了num的下标是: %d ", mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("找不到num  的下标!");
	//}
	return 0;
}