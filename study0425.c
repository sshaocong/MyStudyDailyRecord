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
	printf("请落子...\n");
	while (1) {
		int row = 0;
		int col = 0;
		printf("请输入落子位置坐标(row col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("输入非法请重新输入!\n");
			continue;
		}
		if (chess[row][col] != ' ') {
			printf("输入的坐标,已落子,请重新输入!\n");
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
	//1.初始化棋盘
	init(chess3);
	char winner = ' ';
	while (1) {
		//2.打印棋盘
		print(chess3);
		//3.玩家1下棋;
		playerMove(chess3);
		//4.判定胜负
		winner = isWin(chess3);
		if (winner != ' ') {
			break;
		}
		//5.电脑下棋
		computerMove(chess3);
		//6.判定胜负
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

//实现一个对整形数组的冒泡排序
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

////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
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

////将数组A中的内容和数组B中的内容进行交换。（数组一样大)
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
////冒泡排序法
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
//        //相当于取出其中的某一行 ,这一行是一个数组.
//        for (int col = 0; col < 4; col++) {
//            //相当于对取出的一维数组再取下标 就可以得到其中的元素了.
//            printf("%p", &arr[row][col]);
//        }
//        printf("\n");
//    }
//    return 0;
//}