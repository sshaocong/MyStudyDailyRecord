#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//编写一个函数实现n的k次方，使用递归实现
int func(int n, int k) {
	if (k == 0) {
		return 1;
	}
	return n * func(n, k - 1);
}

int main() {
	printf("%d", func(5,3));
	return 0;
}



////非递归斐波那契数
//int main() {
//	int sum = 0;
//	int num = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &num);
//	int last1 = 1;
//	int last2 = 1;
//	if (num == 1 || num == 2) {
//		printf("1");
//	}	
//	for (int i = 3; i <= num;i++) {
//			sum = last1 + last2;
//			last2 = last1;
//			last1 = sum;				
//	}
//	printf("%d", sum);
//	return 0;
//}


//递归斐波那契数
//int fib(int n) {
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//	printf("%d\n", fib(8));
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(int n) {
//	if (n > 0) {
//		return DigitSum(n / 10) + n % 10;
//	}
//	return 0;
//}
//
//int main() {
//	printf("%d",DigitSum(1729));
//	return 0;
//}

////非递归法求字符串长度
//int main() {
//	char arr[] = {"abcdefg"};
//	int count = 0;
//	while (arr[count] != '\0') {
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////递归法求字符串长度
//int myStrlen(char* arr) {
//	if (arr[0] == '\0') {
//		return 0;
//	}
//	return 1 + myStrlen(arr+1);
//}
//
//int main() {
//	printf("%d\n", myStrlen("abcdef"));
//	return 0;
//}


////非递归法求阶乘：
//int main() {
//	int num = 1;
//	printf("请输入一个整数：\n");
//	scanf("%d", &num);
//	int result = 1;
//	int sum = 0;
//	for (int n = 1; n <= num; n++) {
//		result = result * n;		
//	}
//	sum = sum + result;
//	printf("sum = %d", sum);
//	return 0;
//}

////递归法求阶乘：
//int func(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	return n * func(n - 1);
//}
//int main() {
//	printf("%d", func(5));
//	return 0;
//}