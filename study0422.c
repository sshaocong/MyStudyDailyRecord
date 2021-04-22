#include<stdio.h>
#include<stdlib.h>

int main() {
    char arr[10] = { 0 };
    for (int i = 0; i < 10; i++) {
        printf("%p\n", &arr[i]); //打印地址使用%p
    }
    return 0;
}

//int main() {
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++) {
//        arr[i] = i + 1;
//    }
//    for (int i = 0; i < 10; i++) {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}

//int main() {
//    int arr[4];
//
//    printf("s", arr[4]);
//    return 0;
//}

//int fib2(int n) {
//    if (n == 1 || n == 2) {
//        return 1;
//    }
//    int last2 = 1;   // i- 2项
//    int last1 = 1;  //i-1项
//    int cur = 0;  //当前第i项的结果
//    for (int i = 3; i <= n; i++) {
//        cur = last1 + last2;
//        last2 = last1;
//        last1 = cur;
//    }
//    return cur;
//}
//
//int main() {
//    printf("%d", fib2(5));
//    return 0;
//}


//int fib(int n) {
//    if (n == 1 || n == 2) {
//        return 1;
//    }
//    return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//    printf("%d", fib(5));
//    return 0;
//}

//int func(int n) {
//    if (n == 1) {
//        return 1;
//    }
//    return n * func(n - 1);
//}
//
//int main() {
//    printf("%d", func(5));
//    return 0;
//}

//int myStrlen(int* arr){
//	if (arr[0] == '\0') {
//		return 0;
//	}
//	return 1 + myStrlen(arr + 1);
//}
//
//int main() {
//	printf("%d", myStrlen("abcd"));
//	return 0;
//}