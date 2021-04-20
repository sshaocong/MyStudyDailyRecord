#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//递归方式实现打印一个整数的每一位
void printNum(int num) {
	if (num > 9) {
		printNum(num / 10);
	}
	printf("%d    ", num % 10);
}

int main() {
	int num = 1;
	printf("请输入一个整数：");
	scanf("%d", &num);
	printNum(num);
	return 0;
}

////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//
//void Multip(int num) {
//	for ( int x = 1;x<=num; x++) {
//		for (int y = 1;y<=num; y++) {
//			printf("%d*%d=%d\n", x, y, x * y);
//		}
//	}
//}
//int main() {
//	int num = 1;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	Multip(num);
//	return 0;
//}



////实现一个函数来交换两个整数的内容。
//
//void swap(int* x, int* y) {
//	int  tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main() {
//	    int a = 0;
//		int b = 0;
//		printf("请输入两个整数a和b：\n");
//		scanf("%d %d", &a, &b);
//		swap(&a, &b);
//		printf("a=%d  b=%d", a, b);
//		return 0;
//}
////实现函数判断year是不是闰年。
////是闰年返回1，不是闰年返回0
//int isLeapyear(int year) {
//	if (year % 100 == 0) {
//		if (year % 400 == 0) {
//			return 1;
//		}
//		return 0;
//	}else {
//		if (year % 4 == 0) {
//			return 1;
//		}
//		return 0;
//	}
//}
//int main() {
//	int num = 0;
//	printf("请输入一个年份：");
//	scanf("%d", &num);
//	printf("%d", isLeapyear(num));
//	return 0;
//}
////实现一个函数，判断一个数是不是素数。
////利用上面实现的函数打印100到200之间的素数。
////是素数return 1 不是return 0
//
//int isPrime(int num) {
//	if (num == 0 || num == 1) {
//		return 0;
//	}
//	for(int i = 2; i < num; i++) {
//		if (num % 2 == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
// 
//	for (int i = 100; i <= 200; i++) {
//		isPrime(i);
//		printf("%d  %d\n",i,isPrime(i));
//	}
//	return 0;
//}


////如果不让创建局部变量，或者不让使用循环，就可以考虑使用递归
//
//
//int myStrlen2(char* str) {
//    if (str[0] == '\0') {
//        return 0;
//    }
//    return 1 + myStrlen2(str + 1);
//}
//int main() {
//    printf("%d\n", myStrlen2("abcd"));
//    return 0;
//}

//int myStrlen(char* str) {
//    //从字符串开头开始，一次往后找，\0
//    //每次遇到一个字符，如果不是 \0 就 count++
//    //遇到 \0 就循环结束，返回 count 即可
//    int count = 0;
//    while (str[count] != '\0') {
//        count++;
//    }
//    return count;
//}
//int main() {
//    printf("%d\n", myStrlen("abcd"));
//    return 0;
//}
//void printNum(unsigned int num) {
//    if (num > 9) {
//        printNum(num / 10);
//    }
//    printf("%d  ", num % 10);
//}
//
//int main() {
//    printNum(1234);
//    return 0;
//}
//void func(int* num) {
//    (*num)++;
//}
//
//int main() {
//    int num = 0;
//    func(&num);
//    printf("%d\n", num);
//    return 0;
//}

//int binarySearch(int* arr, int size, int toFind) {
//    int left = 0;
//    int right = size - 1;
//    while (left <= right) {
//        int mid = (left + right) / 2;
//        if (toFind < arr[mid]) {
//            right = mid - 1;
//        }
//        else if (toFind > arr[mid]) {
//            left = mid + 1;
//        }
//        else {
//            return mid;
//        }
//    }
//    //如果上面的循环最后也没找到合适的元素，认为没找到。
//    //返回一个无效的下标，
//    return -1;
//}
//int main() {
//    int arr[] = { 1,2,3,4,5,6,7 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int ret = binarySearch(arr, size, 6);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//判断是不是闰年
//int isLeapYear(int year) {
//    if (year % 100 == 0) {
//        if (year % 400 == 0) {
//            return 1;
//        }
//        return 0;
//    }
//    else {
//        if (year % 4 == 0) {
//            return 1;
//        }
//        return 0;
//    }
//}
//int main() {
//    printf("%d\n", isLeapYear(2021));
//    return 0;
//}

////使用函数输入一个数判断是不是素数
//void isPrime() {
//    int num = 0;
//    printf("请输入一个整数num：\n");
//    scanf("%d", &num);
//    if (num == 0 || num == 1) {
//        printf("num不是素数");
//    }
//    int i = 2;
//    for (; i < num;  i++ ) {
//        if (num % i == 0) {
//            printf("num不是素数");
//            break;
//        }
//    }
//    if (i == num) {
//        printf("num是素数");
//    }       
//}
//
//int main() {
//
//    isPrime();
//    return 0;
//}