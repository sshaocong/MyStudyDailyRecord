#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void yang(int arr[3][3], int num) {
	int row = 0;
	int col = 2;
	int tmp = arr[row][col];
	while (1) {
		if (tmp == num) {
			printf("1");
			break;
		}
		else if (tmp < num && col>=0) {
			tmp = arr[++row][col];
		}
		else if (tmp > num && col >= 0) {
			tmp = arr[row][--col];
		}
		else {
			printf("0");
			break;
		}
	}
}

int main() {
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int num = 0;
	printf("����Ϊ:\n");
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			printf("%3d", arr[row][col]);
		}
		printf("\n");
	}
	scanf("%d", &num);
	yang(arr, num);
	return 0;
}


////��ǰ�Ƚϵ�Ԫ������δ֪,
////�����ǰ�Ƚϵ�����������˴��� void* ���� int* ����ֵ
//typedef int(*Cmp)(void*, void*);
//// ͨ�� void* ��ʵ��,�Ϳ���֧�ֶ������͵���������.
////�˴� size ��ʾ������Ԫ�صĸ���.
////unitsize��ʾ������ÿ��Ԫ�صĴ�С.
////ÿ��Ԫ�صĴ�С�����ǰ��������������е�,��Ϊ�˴�ʹ���� void* ��֧�ֶ�����������
////���Ծ���Ҫ�ֶ�ָ��ÿ��Ԫ�ض೤.
//void bubbleSortGeneral(void* arr, int size, int unitsize, Cmp cmp) {
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			//��Ϊ void* �޷�������,���Խ� arr ǿת�� char*
//			char* carr = (char*)arr;
//			//Ҫȥ�ȵ���cur �� cur - 1.
//			//p1 ָ����� cur - 1 ���Ԫ�ص��׵�ַ
//			char* p1 = carr + (cur - 1) * unitsize;
//			//p2 ָ����� cur ���Ԫ�ص��׵�ַ
//			char* p2 = carr + cur * unitsize;
//			if (cmp(p1, p2) != 1) {
//				//����һ����ʱ�ռ���н���
//				char tmp[1024] = { 0 };
//				//�Ȱ� p1 ָ����ڴ濽���� tmp ��.
//				memcpy(tmp, p1, unitsize);
//				//�� p2 �ڴ濽���� p1 ��
//				memcpy(p1, p2, unitsize);
//				//�� tmp �ڴ濽���� p2 ��
//				memcpy(p2, tmp, unitsize);
//			}
//		}
//	}
//}
//
//typedef struct Student {
//	int id;
//	char name[256];
//	int score;
//}Student;
//
////��ѧ��˳���ս�����
//int cmpScore(void* x, void* y) {
//	//��x �� y ���� ���� Student* �����.
//	Student* sx = (Student*)x;
//	Student* sy = (Student*)y;
//	return sx->score > sy->score ? 1 : 0;
//}
//
//int main() {
//	Student students[] = {
//		{1,"����",90},
//		{2,"����",80},
//		{3,"����",85},
//		{4,"����",91}
//	};
//	int size = sizeof(students) / sizeof(students[0]);
//	int unitsize = sizeof(Student);
//	bubbleSortGeneral(students, size, unitsize, cmpScore);
//	for (int i = 0; i < size; i++) {
//		printf("%s\n", students[i].name);
//	}
//	return 0;
//}
//typedef int(*Cmp)(const void*,const void*);
//
//typedef struct Student {
//	int id;
//	char name[1024];
//	int score;
//}Student;
//
//int cmpDesc(const void* x,const void* y) {
//	int* ix = (int*)x;
//	int* iy = (int*)y;
//	/*return *ix > *iy ? 1 : 0;*/
//	return (*ix - *iy);
//}
//
//int cmpScore(const void* x,const void* y) {
//	Student* sx = (Student*)x;
//	Student* sy = (Student*)y;
//	return sx->score < sy->score ? 1 : 0;
//}
//
//
//int main() {
//	int arr[] = {9,5,2,7,3,6,1,8,4};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int unitSize = sizeof(int);
//	qsort(arr,size,unitSize,cmpDesc);
//	for (int i = 0; i < size; i++) {
//		printf("%d\n",arr[i]);
//	}
//	printf("=======================\n");
//	Student students[] = {
//		{1,"����",89},
//		{2,"����",87},
//		{3,"����",93},
//		{4,"����",90}
//	};
//	int size1 = sizeof(students) / sizeof(students[0]);
//	int unitSize1 = sizeof(Student);
//	qsort(students, size1, unitSize1, cmpScore);
//	for (int i = 0; i < size1; i++) {
//		printf("%s\n", students[i].name);
//	}
//	return 0;
//}

//typedef struct Student {
//	int age;
//	char name[256];
//	int bmi;
//}Student;
//
//typedef int(*Cmp)(void*, void*);
//
//void bubbleqsort(void* arr, int size, int unitsize, Cmp cmp) {
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			char* carr = (char*)arr;
//			char* p1 = carr + (cur - 1) * unitsize;
//			char* p2 = carr + cur * unitsize;
//			if (cmp(p1, p2) != 1) {
//				char tmp[25600] = { 0 };
//				memcpy(tmp, p1, unitsize);
//				memcpy(p1, p2, unitsize);
//				memcpy(p2, tmp, unitsize);
//			}
//		}
//	}
//}
//
//int cmpAge(void* x, void* y) {
//	Student* sx = (Student*)x;
//	Student* sy = (Student*)y;
//	return sx->age > sy->age ? 1 : 0;
//}
//
//int main() {
//	Student students[] = {
//		{15,"zhangsan",20},
//		{18,"zhaosi",11},
//		{17,"xieguangkun",16},
//		{16,"liuneng",19}
//
//	};
//	int size = sizeof(students) / sizeof(students[0]);
//	int unitsize = sizeof(Student);
//	bubbleqsort(students,size,unitsize,cmpAge);
//	for (int i = 0; i < size; i++) {
//		printf("%s\n",students[i].name);
//	}
//	return 0;
//}

//typedef int(*Cmp)(void*, void*);
//
//typedef struct Student {
//	int id;
//	char name[1024];
//	int score;
//}Student;
//
//
//void bubbleQsort(void* arr,int size,int unitSize,Cmp cmp){
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			char* carr = (char*)arr;
//			char* p1 = carr + (cur - 1) * unitSize;
//			char* p2 = carr + cur * unitSize;
//			if (cmp(p1, p2)!=1) {
//				char tmp[102400] = { 0 };
//				memcpy(tmp, p1, unitSize);
//				memcpy(p1, p2, unitSize);
//				memcpy(p2, tmp, unitSize);
//			}
//		}
//	}
//
//}
//
//int less(void* x, void* y) {
//	int* ix = (int*)x;
//	int* iy = (int*)y;
//	return *ix < *iy ? 1 : 0;
//}
//
//int CmpScore(void* x, void* y) {
//	Student* sx = (Student*)x;
//	Student* sy = (Student*)y;
//	return sx->score > sy->score ? 1 : 0;
//}
//
//int main() {
//	int arr[] = {9,5,2,7,3,6,1,8,4};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int unitSize = sizeof(int);
//	bubbleQsort(arr,size,unitSize,less);
//	for (int i = 0; i < size; i++) {
//		printf("%d\n",arr[i]);
//	}
//	printf("=======================\n");
//	Student students[] = {
//		{1,"����",89},
//		{2,"����",87},
//		{3,"����",93},
//		{4,"����",90}
//	};
//	int size1 = sizeof(students) / sizeof(students[0]);
//	int unitSize1 = sizeof(Student);
//	bubbleQsort(students, size1, unitSize1, CmpScore);
//	for (int i = 0; i < size1; i++) {
//		printf("%s\n", students[i].name);
//	}
//	return 0;
//}


//typedef int(*Cmp)(void* x, void* y);
//
//void bubbleSortGeneral(void* arr, int size, int unitSize, Cmp cmp) {
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			char* carr = (char*)arr;
//			char* p1 = carr+(cur-1)*unitSize;
//			char* p2 = carr +cur*unitSize;
//			if (cmp(p1, p2)) {
//				char tmp[1024] = { 0 };
//				memcpy(tmp, p1, unitSize);
//				memcpy(p1, p2, unitSize);
//				memcpy(p2, tmp, unitSize);
//			}
//		}
//	}
//}
//
//int less(void* x, void* y) {
//	int* ix = (int*)x;
//	int* iy = (int*)y;
//	return ix < iy ? 1 : 0;
//}
//
//int main() {
//	int arr[] = {9,5,2,7,3,6,1,8,4};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int unitSize = sizeof(arr[0]);
//	bubbleSortGeneral(arr,size,unitSize,less);
//	
//	for (int i = 0; i < size; i++) {
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}