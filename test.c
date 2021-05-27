//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char* input, int len) {
	char* left = input;
	char* right = input + len - 1;
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		
		left++;
		right--;
	}
}

void reverseWord(char* input) {
	reverse(input, strlen(input));
	char* start = input;
	while (*start != '\0') {
		char* end = start;
		while (*end != ' ' && *end != '\0') {
			end++;
		}
		reverse(start, end - start);
		if (*end == '\0') {
			break;
		}
		else {
			start = end + 1;
		}
	}
}


int main() {
	while (1) {
		char input[1024] = "\0";
		char* ret = gets(input);
		if (ret == NULL) {
			break;
		}
		reverseWord(input);
		printf("%s", input);

	}
	return 0;
}

//
//int func(int a, int b) {
//	int c = a < b ? b : a;
//	for (int i = c; i <= a * b; i++) {
//		if (i % a == 0 && i % b == 0) {
//			return i;
//		}
//	}
//	return 0;
//}
//int main() {
//	while (1) {
//		int a = 0;
//		int b = 0;
//		int n = scanf("%d %d", &a, &b);
//		if (n < 2) {
//			break;
//		}
//		printf("%d\n", func(a, b));
//	}
//	return 0;
//}

//extern void func();

//int main() {
//	func();
//	return 0;
//}

//void func() {
//
//}