#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>


int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%c", (n + 32));
	//int num = 0;
	//scanf("%d", &num);
	//while (num > 0) {
	//	printf("%d", num % 10);
	//	num=num / 10;
	//}
	return 0;
}
//size_t myStrlen(const char* str) {
//	assert(str != NULL);
//	size_t i = 0;
//	while (str[i] != '\0') {
//		i++;
//	}
//	return i;
//}

//char* myStrcopy(char* dest,const char* src ) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = 0;
//	while (src[i] != '\0') {
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = src[i];
//	return dest;
//}


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
//	dest[i] = '\0';
//	return dest;
//
//}
//int myStrcmp(const char* str1, const char* str2) {
//	assert(str1 !=NULL);
//	assert(str2 != NULL);
//	const char* p1 = str1;
//	const char* p2 = str2;
//	while (*p1 != '\0' && *p2 != '\0') {
//		if (*p1 > *p2) {
//			return 1;
//		}
//		else if (*p1 < *p2) {
//			return -1;
//		}
//		else {
//			p1++;
//			p2++;
//		}
//	}
//	if (*p1 > *p2) {
//		return 1;
//	}
//	else if (*p1 < *p2) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}

//char* myStrncpy(char* dest, const char* src, size_t n) {
//	assert(dest != NULL);
//	assert(dest != NULL);
//	assert(n != 0);
//	size_t i = 0;
//	while (src[i] != '\0' && i < n) {
//		dest[i] = src[i];
//		i++;
//	}
//
//	while (i < n) {
//		dest[i] = '\0';
//		i++;
//	}
//	return dest;
//}

//char* myStrncat(char* dest,const char* src,size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	size_t i = 0;
//	while (dest[i] != '\0') {
//		i++;
//	}
//	size_t j = 0;
//	while (src[j] != '\0' && j < num) {
//		dest[i + j] = src[j];
//		j++;
//	}
//	dest[i + j] = '\0';
//	return dest;
//}

//int myStrncmp(const char* str1, const char* str2,size_t num) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	size_t i = 0;
//	while (str1[i] != '\0' && str2[i] != '\0' && i < num) {
//		if (str1[i] < str2[i]) {
//			return -1;
//		}
//		else if (str1[i] > str2[i]) {
//			return 1;
//		}
//		else {
//			i++;
//		}
//	}
//	//if (str1[i] < str2[i]) {
//	//	return -1;
//	//}
//	//else if (str1[i] > str2[i]) {
//	//	return 1;
//	//}
//	//else {
//	//	return 0;	
//	//}
//	return str1[i] - str2[i];
//}

//int main() {
//	char dest[50] = "whoru";
//	char src[] = "hello hello";
//	/*printf("%s\n", myStrncat(dest, src, 7));*/
//	//printf("%s\n", myStrncpy(dest, src,7));
//
//	char str1[] = "hello nihao";
//	char str2[] = "hello hi";
//	printf("%d\n", myStrncmp(str1, str2,3));
//
//	//printf("%d\n", myStrcmp(str1, str2));
//
//	/*printf("%s\n", myStrcat(dest, src));*/
//	//printf("%s\n", myStrcopy(dest, src));
//
//	/*char str[] = "hello hello";
//	printf("%d\n", myStrlen(str));*/
//	return 0;
//}