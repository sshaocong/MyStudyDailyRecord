#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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



////�ǵݹ�쳲�������
//int main() {
//	int sum = 0;
//	int num = 0;
//	printf("������һ��������\n");
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


//�ݹ�쳲�������
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


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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

////�ǵݹ鷨���ַ�������
//int main() {
//	char arr[] = {"abcdefg"};
//	int count = 0;
//	while (arr[count] != '\0') {
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////�ݹ鷨���ַ�������
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


////�ǵݹ鷨��׳ˣ�
//int main() {
//	int num = 1;
//	printf("������һ��������\n");
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

////�ݹ鷨��׳ˣ�
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