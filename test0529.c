#include<stdio.h>
#include<string.h>

//void reverse(char* str, int len) {
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverseWord(char* input){
//	//int len = strlen(str);
//	reverse(input, strlen(input));
//	char* start = input;
//	while (*start != '\0') {
//		char* end = start;
//		while (*end != ' ' && *end != '\0') {
//			end++;
//		}
//		reverse(start, end - start);
//		if (*end == '\0') {
//			break;
//		}
//		else {
//		start = end + 1;
//		}
//	}
//}

//创建一个函数指针的类型Cmp
//这个类型的函数指针对应的函数,有两个 int 参数,并返回 int 值
//如果x , y 满足顺序要求 返回 1, 否则返回 0
//typedef int (*Cmp)(int x, int y);
//
////排序函数多了一个参数cmp
////此时就让 冒泡排序函数的通用性提高了.
//
//void bubbleSort(int arr[],int len,Cmp cmp) {
//	for (int bound = 0; bound < len; bound++) {
//		for (int cur = len-1; cur > bound; cur--) {
//			if (cmp(arr[cur],arr[cur-1]) != 1 ) {	
//				//6 3 less => 0  if 成立
//				// greater => 1  if 不成了
//					int tmp = arr[cur-1];
//					arr[cur-1] = arr[cur];
//					arr[cur] = tmp;	
//			}
//		}
//	}
//}

//回调函数
//
//int less(int x, int y) {
//	return x < y ? 1 : 0;
//}
//
//int greater(int x, int y) {
//	return x > y ? 1 : 0;
//}

int find(int arr[][3], int row, int col) {
	while (row <= 3 && col >= 3) {

	}
}

int main() {
	int arr[3][3] = { { 1, 2, 3},
					  { 4, 5, 6},
					  { 7, 8, 9}};
	//int arr[] = { 9,5,2,7,3,6 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//bubbleSort(arr, size,less);
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", arr[i]);
	//}
	//printf("=========================\n");

	//bubbleSort(arr, size, greater);
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", arr[i]);
	//}
	//printf("%p\n", reverse);
	//printf("%p\n", &reverse);
	//void(*p)(char*, int) = reverse;

	//typedef void(*Func)(char*, int);
	//Func p2 = reverse;

	//while (1) {
	//	char input[1024] = { 0 };
	//	char* ret = (char*)gets(input);
	//	if (ret == NULL) {
	//		break;
	//	}
	//	reverseWord(input);
	//	printf("%s", input);
	//}

	return 0;
}