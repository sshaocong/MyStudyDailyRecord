#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

//void SnSum(int num, int num1) {
//	int tmp = 0;
//	int sum = 0;
//	for (int i = 0; i < num1; i++) {
//		tmp = tmp * 10 + num;
//		sum = sum + tmp;
//	}
//	printf("ret = %d", sum);
//}
//struct Student {
//	int id;
//	char name[1024];
//};
//
//void printStudent(struct Student* s) {
//	s->id = 20;
//	printf("%d\n", s->id);
//	printf("%s\n", s->name);
//}

void drinkNum(int money) {
	int total = money;
	int empty = money;

	while (empty > 1) {
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
}

int main() {
	drinkNum(20);
	return 0;
}

//int main() {
	////struct Student student = { 10, "ÕÅÈý" };
	//printStudent(&student);
	//printf("%d\n", student.id);
	//struct Student* p = &student;
	//printf("%d\n", p->id);

	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j<7-i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j<2*i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int i = 0; i < 6; i++) {
	//	for (int j = 0; j <= i+1; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j<2*(6-i)-1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//int i = 0;
	//for (i = 0; i <= 10000; i++) {
	//	int count = 1;
	//	int sum = 0;
	//	int tmp = i;
	//	while (tmp / 10) {
	//		count++;
	//		tmp = tmp / 10;
	//	}
	//	tmp = i;
	//	while (tmp) {
	//		sum += (unsigned int)pow(tmp % 10, count);
	//		tmp = tmp / 10;
	//	}
	//	if (sum == i) {
	//		printf("%d\n", i);
	//	}
	//}
	//SnSum(2,5);
//	return 0;
//}