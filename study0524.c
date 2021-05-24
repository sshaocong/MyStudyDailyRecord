#include<stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

int main() {
	int tri[MAX_ROW][MAX_COL] = { 0 };
	int row = 0;
	int col = 0;
	for (row = 0; row < MAX_ROW; row++) {
		tri[row][0] = 1;
		tri[row][row] = 1;
	}
	for (row = 2; row < MAX_ROW; row++) {
		for (int col = 1; col <= row; col++) {
			tri[row][col] = tri[row - 1][col - 1] + tri[row - 1][col];
		}
	}
	for (row = 0; row < MAX_ROW; row++) {
		for (col = 0; col <= row; col++) {
			printf("%4d", tri[row][col]);
		}
		printf("\n");
	}

	return 0;
}

//void test1(int arr[]){
//} 
//void test11(int arr[10]){
//} 
//void test12(int *arr){
//} 
//void test21(int *arr[20]){
//} 
//void test22(int** arr) {  //也可以 typdef int* IntPtr 
//}                         // 然后 IntPtr* arr 进行传参

//void test1(int arr[3][5]) {
//}
//void test2(int arr[4][5]) {
//}
//void test3(int arr[][5]) {
//}
//// arr 类型是int(*)[4] , 而实参隐式转成的指针为int(*)[5]
////类型不同
//void test4(int arr[3][4]) {
//}
//int main() {

	//unsigned char a = 200;
	//unsigned char b = 100;
	//unsigned char c = 0;
	//c = a + b;
	//printf(" %d %d", a + b, c);
	//int arr[3][5] = {0};
	//test1(arr);
	//test2(arr);
	//test3(arr);
	//test4(arr);
	//int arr[10] = { 0 };    
	//int* arr2[20] = { 0 };    
	//test1(arr);
	//test11(arr);
	//test12(arr);
	//test21(arr2);
	//test22(arr2);
	//int arr[] = { 1,2,3,4 };
	//printf("%p\n",arr);
	//printf("%p\n",&arr);
	//printf("%p\n", arr + 1);
	//printf("%p\n", &arr + 1);

	//char* p1 = "hello";
	//char* p2 = "hello";
	//char p3[] = "hello";
	//char p4[] = "hello";
	//if (p1 == p2) {
	//	printf("相等\n");
	//}
	//else {
	//	printf("不相等\n");
	//}
	//if (p3 == p4) {
	//	printf("相等\n");
	//}
	//else {
	//	printf("不相等\n");
	//}

	//double a = 1.6;
	//double b = 0.3;
	//double c = a + b;
	//double d = 1.9;
	//if (c - d < 0.0001 && c - d > -0.0001) {
	//	printf("相等\n");
	//}
	//else {
	//	printf("不相等\n");
	//}
	//double a = 1.6;
	//double b = 0.3;
	//double c = a + b;
	//double d = 1.9;
	//if (c == d) {
	//	printf("相等\n");
	//}
	//else {
	//	printf("不相等\n");
	//}
//	return 0;
//}