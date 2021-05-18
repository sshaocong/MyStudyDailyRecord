#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void bubbleSort(int arr[], int size) {
	for (int bound = size-1; bound > 0; bound--) {
		for (int cur = 0; cur < bound; cur++) {
			if (arr[cur] > arr[cur + 1]) {
				int tmp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] = tmp;
			}
		}
	}
}

int main() {
	//int arr[] = { 8,6,5,7,9,2,3,1,4,0 };
	int arr[] = { 1,2,3,4,5,6,7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size;
	printf("请输入要查找的数字:\n");
	int num = 0;
	int ret = scanf("%d", &num);
	while (left <= right) {
		int mid = (right + left) / 2;
		if (num > arr[mid]) {
			left = mid + 1;
		}
		else if (num < arr[mid]) {
			right = mid - 1;
		}
		else  {
			printf("找到了!该数的下标是: %d", mid);
			break;
		}
	}
	if (left > right) {
		printf("找不到!");
	}
	//bubbleSort(arr, size);
	//for (int i = 0; i < size; i++) {
	//	printf("%d ", arr[i]);
	//}
	return 0;
}