#include<stdio.h>
#include<string.h>
#include<assert.h>

size_t myStrlen(const char* str) {
	assert(str != NULL);
	size_t i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

int main() {
	char str[] = "hello world";
	printf("%d\n", myStrlen(str));
	return 0;
}

//char* myStrcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = 0;
//	while (src[i] !='\0') {
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = src[i];
//	return dest;
//}
//
//int main() {
//	char dest[256];
//	char src[] = "hello world";
//	printf("%s\n",myStrcpy(dest,src));
//	return 0;
//}


//int myStrcmp(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	int i = 0;
//	int j = 0;
//	while (str1[i] == str2[j]&& 
//		   str1[i] != '\0' && 
//			str2[j] != '\0') {
//	i++;
//	j++;
//	}
//	if (str1[i] > str2[j]) {
//		return 1;
//	}
//	else if (str1[i] < str2[j]) {
//		return -1;
//	}
//	return 0;
//}
//
//int main() {
//	char str1[] = "hello";
//	char str2[] = "helao";
//	printf("%d\n",myStrcmp(str1, str2));
//	return 0;
//}

//
//char* myStrcat(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = 0;
//	while (dest[i] != '\0') {
//		i++;
//	}
//	int j = 0;
//	while (src[j] != '\0') {
//		dest[i] = src[j];
//		i++;
//		j++;
//	}
//	return dest;
//}
//
//int main() {
//	char dest[80] = "hello ";
//	char src[] = "world!";
//	myStrcat(dest, src);
//	printf("%s\n", dest);
//
//	return 0;
//}

//void yanghuitri() {
//	int row = 0;
//	int col = 0;
//	int arr[10][10] = { 0 };
//	for (row = 0; row < 10; row++) {
//		arr[row][0] = 1;
//		arr[row][row] = 1;
//	}
//	for (row = 1; row < 10; row++) {
//		for (col = 1; col < 10; col++) {
//			arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
//		}
//	}
//
//
//	for ( row = 0; row < 10; row++) {
//		for ( col = 0; col <= row; col++) {
//			printf("%5d", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//void guessMurder() {
//	char murder = 'A';
//	for (; murder <= 'D'; murder++) {
//		if (((murder != 'A')) +
//			((murder == 'C')) +
//			((murder == 'D')) +
//			((murder != 'D')) == 3) {
//			break;
//		}
//		murder++;
//	}
//	printf("%c", murder);
//}
//
//void guessRank() {
//	int a = 0;
//	int b = 0; 
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//						if (((b == 2) + (a == 3) == 1) + ((b == 2) + (e == 4) == 1) +
//							((c == 1) + (d == 2) == 1) + ((c == 5) + (d == 3) == 1) +
//							((e == 4) + (a == 1) == 1) == 5 &&
//							a * b * c * d * e == 120) {
//							printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);
//						}
//
//					}
//				}
//			}
//		}
//	}
//}

//int main() {
//	guessRank();
//	//guessMurder();
//	//yanghuitri();
//	return;
//}