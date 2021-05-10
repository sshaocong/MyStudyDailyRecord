#include<stdio.h>
#include<string.h>

void reverse(char* str) {
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right) {
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
	printf("%s", str);
}
int main() {
	char str1[] = "hello";
	reverse(str1);
	return 0;
}
//int main() {
//	int arr[] = { 2,0,2,1,0,5,1,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int* p = arr; p<arr+size; p++) {
//		printf("%d ",*p);
//	}
//	return 0;
//}
//	//int* p = (int*)0x100;
//	//printf("%p\n", p - 1);
//	//int arr[] = { 9, 5, 2, 7 };
//
//	//int* p1 = arr;
//	//int* p2 = &arr[2];
//	//printf("%d\n", p2 - p1);
//	//int* p1 = arr;
//	//int* p2 = arr + 2;
//	//printf("%d\n", p2 - p1);
//	//printf("%d\n", p1 - p2);
//	//int size = sizeof(arr) / sizeof(arr[0]);
//
//	//for (int* p = arr; p < arr + size; p++) {
//	//	printf("%d\n", *p);
//	//}
//	//int num = 10;
//	//int* p = &num;
//	//if (p != NULL) {
//	//	//满足这个条件,p不一定是有效地址.
//	//	printf("有效地址\n");
//	//}
//	//else {
//	//	//p一定是无效地址
//	//	printf("无效地址\n");
//	//}
//	//char* str1 = "hello";
//	//char* str2 = "hello";
//	//if (str1 == str2) {
//	//	printf("hehe\n");
//	//}
//	//else {
//	//	printf("haha\n");
//	//}
//	//int arr[] = { 1,2,3,4,5 };
//	//short* p = (short*)arr;
//	//int i = 0;
//	//for (i = 0; i < 4; i++) {
//	//	*(p + i) = 0;
//	//}
//	//for (i = 0; i < 5; i++) {
//	//	printf("%d\n",arr[i]);
//	//}
//	//int a = 0x11223344;
//	//char* pc = (char*)&a;
//	//*pc = 0;
//	//printf("%x\n", a);
//	return 0;
//}