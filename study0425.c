#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX_ROW 3
#define MAX_COL 3

void init(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chess[row][col] = ' ';
		}
	}
}

void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("|");
		for (int col = 0; col < MAX_ROW; col++) {
			printf(" %c |", chess[row][col]);
		}
		printf("\n+---+---+---+\n");
	}
}
void playerMove(char chess[MAX_ROW][MAX_COL]) {
	printf("������...\n");
	while (1) {
		int row = 0;
		int col = 0;
		printf("����������λ������(row col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("����Ƿ�����������!\n");
			continue;
		}
		if (chess[row][col] != ' ') {
			printf("���������,������,����������!\n");
		   continue;
		}
		chess[row][col] = 'x';
		break;
	}
}

void computerMove(char chess[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chess[row][col] != ' ') {
			continue;
		}
		chess[row][col] = 'o';
		break;
	}
}

int isFull(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chess[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
char isWin(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		if (chess[row][0] != ' '
			&& chess[row][0] == chess[row][1]
			&& chess[row][0] == chess[row][2]) {
			return chess[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++) {
		if (chess[0][col] != ' '
			&& chess[0][col] == chess[1][col]
			&& chess[0][col] == chess[2][col]) {
			return chess[0][col];
		}
	}
	if (chess[0][0] != ' '
		&& chess[0][0] == chess[1][1]
		&& chess[0][0] == chess[2][2]) {
		return chess[0][0];
	}
	if (chess[0][2] != ' '
		&& chess[0][2] == chess[1][1]
		&& chess[0][2] == chess[2][0]) {
		return chess[0][2];
	}
	if (isFull(chess)) {
		return 'q';
	}
	return ' ';
}

int main() {
	char chess3[MAX_ROW][MAX_COL];
	//1.��ʼ������
	init(chess3);
	char winner = ' ';
	while (1) {
		//2.��ӡ����
		print(chess3);
		//3.���1����;
		playerMove(chess3);
		//4.�ж�ʤ��
		winner = isWin(chess3);
		if (winner != ' ') {
			break;
		}
		//5.��������
		computerMove(chess3);
		//6.�ж�ʤ��
		winner = isWin(chess3);
		if (winner != ' ') {
			break;
		}
	}
	if (winner == 'x') {
		printf("you win !");
	}
	else if (winner == "o") {
		printf("you lose!");
	}
	else {
		printf("55open?");
	}
	return 0;
}

//ʵ��һ�������������ð������
//void bubbleSort(int arr[],int size) {
//	int bound = size - 1;
//	for (; bound >0; bound--) {
//		for (int cur = 0; cur < bound; cur++) {
//			if (arr[cur] > arr[cur + 1]) {
//				int tmp = arr[cur + 1];
//				arr[cur + 1] = arr[cur];
//				arr[cur] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 4,7,1,6,9,5,8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, size);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
//void init(int arr[],int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = 0 ;
//	}
//}
//
//void print(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int size) {
//	for (int i = 0; i < 3; i++) {
//		int tmp = arr[size - 1 - i];
//		arr[size - 1 - i] = arr[i];
//		arr[i] = tmp;
//	}
//}
//int main() {
//	int arr[] = { 1,1,1,2,5,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, size);
//	print(arr, size);
//	init(arr,size);
//	print(arr, size);
//	return 0;
//}

////������A�е����ݺ�����B�е����ݽ��н�����������һ����)
//int main() {
//    int arr1[7] = { 10 };
//    int arr2[7] = { 11 };
//    for (int i = 0; i < 7; i++) {
//        int tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//    for (int i = 0; i < 7; i++) {
//        printf("%d ", arr1[i]);
//    }
//    printf("\n");
//    for (int i = 0; i < 7; i++) {
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}
////ð������
//void bubbleSort(int arr[], int size) {
//	int bound = 0;
//	for (; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			if (arr[cur - 1] > arr[cur]) {
//				int tmp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = tmp;
//			}
//		}
//	}
//}
//
//void bubbleSort2(int arr[], int size) {
//	for (int bound = size-1 ; bound >= 0; bound--) {
//		for (int cur = 0; cur < bound; cur++) {
//			if (arr[cur] > arr[cur + 1]) {
//				int tmp = arr[cur];
//				arr[cur] = arr[cur + 1];
//				arr[cur + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 4, 3, 9, 6, 8, 1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort2(arr,size);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main() {
//    int arr[3][4] = {
//      2, 4, 5
//    };
//    for (int row = 0; row < 3; row++) {
//        //�൱��ȡ�����е�ĳһ�� ,��һ����һ������.
//        for (int col = 0; col < 4; col++) {
//            //�൱�ڶ�ȡ����һά������ȡ�±� �Ϳ��Եõ����е�Ԫ����.
//            printf("%p", &arr[row][col]);
//        }
//        printf("\n");
//    }
//    return 0;
//}