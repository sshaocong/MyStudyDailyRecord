#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void printNum(int num) {
	if (num > 9) {
		printNum(num / 10);
	}
	printf("%d    ", num % 10);
}

int main() {
	int num = 1;
	printf("������һ��������");
	scanf("%d", &num);
	printNum(num);
	return 0;
}

////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
//	printf("������һ��������");
//	scanf("%d", &num);
//	Multip(num);
//	return 0;
//}



////ʵ��һ�������������������������ݡ�
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
//		printf("��������������a��b��\n");
//		scanf("%d %d", &a, &b);
//		swap(&a, &b);
//		printf("a=%d  b=%d", a, b);
//		return 0;
//}
////ʵ�ֺ����ж�year�ǲ������ꡣ
////�����귵��1���������귵��0
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
//	printf("������һ����ݣ�");
//	scanf("%d", &num);
//	printf("%d", isLeapyear(num));
//	return 0;
//}
////ʵ��һ���������ж�һ�����ǲ���������
////��������ʵ�ֵĺ�����ӡ100��200֮���������
////������return 1 ����return 0
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


////������ô����ֲ����������߲���ʹ��ѭ�����Ϳ��Կ���ʹ�õݹ�
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
//    //���ַ�����ͷ��ʼ��һ�������ң�\0
//    //ÿ������һ���ַ���������� \0 �� count++
//    //���� \0 ��ѭ������������ count ����
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
//    //��������ѭ�����Ҳû�ҵ����ʵ�Ԫ�أ���Ϊû�ҵ���
//    //����һ����Ч���±꣬
//    return -1;
//}
//int main() {
//    int arr[] = { 1,2,3,4,5,6,7 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int ret = binarySearch(arr, size, 6);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//�ж��ǲ�������
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

////ʹ�ú�������һ�����ж��ǲ�������
//void isPrime() {
//    int num = 0;
//    printf("������һ������num��\n");
//    scanf("%d", &num);
//    if (num == 0 || num == 1) {
//        printf("num��������");
//    }
//    int i = 2;
//    for (; i < num;  i++ ) {
//        if (num % i == 0) {
//            printf("num��������");
//            break;
//        }
//    }
//    if (i == num) {
//        printf("num������");
//    }       
//}
//
//int main() {
//
//    isPrime();
//    return 0;
//}