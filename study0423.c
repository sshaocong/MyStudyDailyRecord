#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
// 99 �˷��ھ���
int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d*%d=%d\n", i, j, i * j);
		}
	}
	return 0;
}

//����10���� �������
//int main() {
//    int arr[10] = { 0 };
//    int max = 0;
//    int i = 1;
//    printf("������10��������\n");
//    for (i = 1; i < 10; i++) {
//        scanf("%d", &arr[i]);
//    }
//    max = arr[0];
//    for (i = 1; i < 10; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    printf("max = %d", max);
//    return 0;
//}
////���ֲ��ҷ�~��
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int num = 0;
//	printf("��������Ҫ���ҵ����֣�\n");
//	scanf("%d", &num);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (num < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("�ҵ��ˣ�Ҫ���ҵ������±��ǣ� %d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}
////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main() {
//	double sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
//			sum = sum - 1.0/i;
//		}
//		else {
//			sum = sum + 1.0 / i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}

////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main() {
//	int count = 0;
//	for (int num = 1; num <= 100; num++) {
//		if (num % 10 == 9) {
//			count++;
//		}
//		else if (num / 10 == 9) {  //C�� ���������������� ���� 91/10 = 9   92 / 10 = 9  �ȵȵ�
//			count++;
//		  }
//	}
//	printf("%d", count);
//	return 0;
//}

////дһ�����룺��ӡ100~200֮�������
//void isPrime(int x, int y) {
//	for (x; x < y; x++) {
//		int i = 2;
//		for (i; i <= x; i++) {
//			if (x % i == 0) {
//				break;
//			}
//		}
//		if (x == i) {
//			printf("%d\n", x);
//		}
//	}
//}
//int main() {
//	isPrime(100, 200);
//	return 0;
//}

////����(2)
//int main() {
//    int a = 101;
//    int count = 0;
//    for (a; a <= 200; a++) {
//        int i = 2;
//        for (i; i <= a; i++) {
//            if (a % i == 0) {
//                break;
//            }
//        }
//        if (a == i) {
//            printf("%d\n", a);
//        }
//    }
//    return 0;
//}


////��ӡ1000�굽2000��֮�������
//void leapYear(int x, int y) {
//	for (x; x < y; x++) {
//		if (x % 100 == 0) {
//			if (x % 400 == 0) {
//				printf("%d\n", x);
//			}
//		}
//		else {
//			if (x % 4 == 0) {
//				printf("%d\n", x);
//			}
//		}
//	}
//}
//int main() {
//	leapYear(1000, 2000);
//	return 0;
//}

////���������������������������Լ��
//int gys(int a, int b) {
//	int c = 0;
//	while (c=a%b) {
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int main() {
//	printf("%d", gys(18, 24));
//	return 0;
//}

////дһ�������ӡ1-100֮������3�ı���������
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

////д���뽫�������������Ӵ�С��������磺���룺2 3 1 �����3 2 1
//int main() {
//	int a, b, c, t;
//	printf("����������������\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) {
//		t = a;
//		a = b;
//		b = t;
//	}if (a < c) {
//		t = a;
//		a = c;
//		c = t;
//	}if (b < c) {
//		t = b;
//		b = c;
//		c = t;
//	}
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

