#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubbleSort(int arr[], int size) {
	for (int bound = size - 1; bound > 0; bound--) {
		for (int cur = 0; cur < bound; cur++) {
			if (arr[cur] > arr[cur + 1]) {
				int tmp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] = tmp;
			}
		}
	}

}

void yangHuiTriangle(int n)
{
	int data[30] = { 1 };

	int i, j;
	printf("1\n"); //第一行就直接打印了
	for (i = 1; i < n; i++) //从第二行开始
	{
		for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
		{
			data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
		}

		for (j = 0; j <= i; j++) //这一行填完就直接打印了。
		{
			printf("%d ", data[j]);
		}
		putchar('\n');
	}
}

int main() {
	//int arr[] = { 9,5,2,7,1,4,0,3,8 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//bubbleSort(arr, size);
	//for (int i = 0; i < size; i++) {
	//	printf("%d ", arr[i]);
	//}
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]);
	//int num = 0;
	//printf("请输入要查找的数字:");
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
	//		printf("找到了num的下标是 %d", mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("找不到!");
	//}
 //失败的三角
	//printf("1\n");
	//for (int i = 0; i <=7; i++) {
	//	printf("1 ");
	//	while (1) {
	//		if (i == 0) {
	//			break;
	//		}
	//		else {
	//			for(int j = 1;j<=i;j++){
	//				printf("%d ", i+1 );
	//			}
	//			break;

	//		}
	//	}
	//	printf("1\n");
	//}
	return 0;
}