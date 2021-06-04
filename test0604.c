#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef int (*Cmp) (int x, int y);

void qsortBubble(int arr[], int size, Cmp cmp) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (cmp(arr[cur], arr[cur - 1])) {
				int tmp = arr[cur];
				arr[cur] = arr[cur - 1];
				arr[cur - 1] = tmp;
			}
		}
	}
}

int less(int x, int y) {
	return x < y ? 1 : 0;
}
int greater(int x, int y) {
	return x > y ? 1 : 0;
}
typedef struct Student {
	int id;
	char name[256];
	int score;

}Student;

typedef int(*Cmpstudent)(Student* x, Student* y);

void bubbleSortStudent(Student arr[], int size,Cmpstudent cmp) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (cmp(&arr[cur - 1], &arr[cur]) != 1) {
				Student tmp = arr[cur];
				arr[cur] = arr[cur - 1];
				arr[cur - 1] = tmp;

			}
		}
	}

}


int cmpIdDesc(Student* x, Student* y) {
	return x->id < y->id ? 1 : 0;
}

int cmpScore(Student* x, Student* y) {
	return x->score > y->score ? 1 : 0;
}

 

typedef int(*Cmp)(void* x, void* y);

void bubbleSortGeneral(void* arr, int size, int unitSize, Cmp cmp) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			char* carr = (char*)arr;
			char* p1 = carr + (cur - 1) * unitSize;
			char* p2 = carr + cur * unitSize;
			if (cmp(p1, p2) != 1) {
				char tmp[1024] = { 0 };
				memcpy(tmp, p1, unitSize);
				memcpy(p1, p2, unitSize);
				memcpy(p2, tmp, unitSize);
			}
		}
	}
}

int cmpInt(const void* x,const void* y) {
	int* ix = (int*)x;
	int* iy = (int*)y;
	return *ix > *iy ? 1 : 0;
}
int cmpStudent(void* x, void* y) {
	Student* sx = (Student*)x;
	Student* sy = (Student*)y;
	return sx->score < sy->score ? 1 : 0;

}


int main() {
	int arr[] = { 9,5,2,7,3,6,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int unitSize = sizeof(arr[0]);
	//bubbleSortGeneral(arr, size, unitSize,cmpInt);
	qsort(arr, size, unitSize, cmpInt);
	for (int i = 0; i < size; i++) {
		printf("%d\n",arr[i]);
	}
	return 0;
}




//int main() {
//	Student students[] = {
//		{1,"张三",91},
//		{2,"李四",95},
//		{3,"王五",90},
//		{4,"赵二",97}
//	};
//	int size = sizeof(students)/sizeof(students[0]);
//	//bubbleSortStudent(students,size,cmpIdDesc);
//	bubbleSortStudent(students, size, cmpScore);
//	for (int i = 0; i < size; i++) {
//		printf("%s\n", students[i].name);
//	}
	//int arr[] = { 9,5,2,7,3,6,8,1 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//qsortBubble(arr, size, less);
	//for (int i = 0; i < size; i++) {
	//	printf("%d\n", arr[i]);
	//}


//	return 0;
//}