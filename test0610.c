#include<stdio.h>
#include<assert.h>

const char* myStrstr(const char* str1, const char* str2) {
	assert(str1 != NULL);
	assert(str2 != NULL);
	assert(*str1 != '\0');
	assert(*str2 != '\0');
	const char* black = str1;
	//const char* sub = str2;
	while (*black != '\0') {
		char* red = black;
		char* sub = str2;
		while (*red !='\0'&& *sub != '\0'&&
			*red == *sub) {

		}
	}


}

int main() {
	char str1[] = "hello world";
	char str2[] = "llo";
	printf("%s\n",myStrstr(str1, str2));

	return 0;
}


//void* myMemcpy(void* dest, const void* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//
//	for (size_t i = 0; i < num; i++) {
//		cdest[i] = csrc[i];
//	}
//	return cdest;
//
//
//}
//
//
//void* myMemmove(void* dest, const void* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	if (cdest > csrc && cdest < (csrc + num)) {
//		for (size_t i = num; i > 0; i--) {
//			cdest[i-1] = csrc[i-1];
//		}
//	}
//	else {
//		for (size_t i = 0; i < num; i++) {
//			cdest[i] = csrc[i];
//		}
//	}
//	return cdest;
//}
//
//
//int main() {
//	char dest[] = "hello      world";
//	char src[] = "good good";
//	char wow[10] = "1234";
//	//myMemcpy(dest + 6, src+5, 4);
//	myMemcpy(wow + 2, wow, 4);
//	printf("%s\n", wow);
//	char wow1[10] = "1234";
//	myMemmove(wow1 + 2, wow1, 4);
//	printf("%s\n", wow1);
//
//	return 0;
//}