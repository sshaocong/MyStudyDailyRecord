#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

void bubbleSort(int arr[], int size) {
	int bound = size-1;
	for (; bound > 0; bound--) {
		for (int cur = 0; cur < bound; cur++) {
			if (arr[cur] > arr[cur + 1]) {
				int tmp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] = tmp;
			}
		}
	}
}

void bubbleSort2(int arr[], int size) {
	int bound = 0;
	for (; bound < size - 1; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (arr[cur] < arr[cur - 1]) {
				int tmp = arr[cur];
				arr[cur] = arr[cur - 1];
				arr[cur - 1] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = { 6 ,2 ,1,8,7,4,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort2(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	return 0;

}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int num = 0;
//	printf("请输入要查找的数字:");
//	scanf("%d", &num);
//	int left = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int right = size - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (num < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("找到了num的下标是 %d", mid);
//			break;
//		}
//		if (left > right) {
//			printf("找不到!");
//		}
//	}
//	return 0;
//}
//bubbleSort(int arr[ ], int size) {
//	int bound = size-1;
//	for (; bound > 0; bound--) {
//		for (int cur = 0; cur < bound; cur++) {
//			if (arr[cur] > arr[cur + 1]) {
//				int tmp = arr[cur + 1];
//				arr[cur+1] = arr[cur];
//				arr[cur] = tmp;
//			}
//		}
//	}
//}
//
//bubbleSort2(int arr[], int size) {
//	int bound = 0;
//	for (; bound < size; bound++) {
//		for (int cur = size - 1; cur > 0; cur--) {
//			if (arr[cur] < arr[cur - 1]) {
//				int tmp = arr[cur];
//				arr[cur] = arr[cur - 1];
//				arr[cur - 1] = tmp;
//			}
//
//		}
//	}
//}
//int main() {
//	/*int arr[ ] = { 7 , 3 , 4 , 8 , 1 , 9 , 2 };*/
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//bubbleSort2(arr,size);
//	//for (int i = 0; i < size; i++) {
//	//	printf("%d ", arr[i]);
//	//}
//	int left = 0;
//	int right = size - 1;
//	int num = 0;
//	printf("请输入要查找的数字:");
//	scanf("%d", &num);
//	//int mid = (left + right) / 2;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (num < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("找到了num下标是%d\n", mid);
//			break;
//		}
// 
//	}
//	return 0;
//}

//#define MAX_ROW 9
//#define MAX_COL 9
//#define MINE_COUNT 10
//
//void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
//    //mem => memory 内存
//    //set:设置,集合
//    //memset的功能就是把一段内存上的每个字节都设置成一个具体的值
//    //二维数组的每个元素都是在一个连续的内存空间上布局的
//    memset(showMap, '*', MAX_ROW * MAX_COL);
//    memset(mineMap, '0', MAX_ROW * MAX_COL);
//    //设置随机种子
//    srand((unsigned int)time(0));
//    //随机产生十个位置作为地雷.
//    int mineCount = 0;
//    while (mineCount < MINE_COUNT) {
//        int row = rand() % MAX_ROW;
//        int col = rand() % MAX_COL;
//        if (mineMap[row][col] == '#') {
//            continue;
//        }
//        mineMap[row][col] = '#';
//        mineCount++;
//    }
//}
////用着一个函数同事具备打印两种地图的功能
////取决于实参填什么
//void print(char theMap[MAX_ROW][MAX_COL]) {
//    for (int row = 0; row < MAX_ROW; row++) {
//        for (int col = 0; col < MAX_COL; col++) {
//            printf("%c ", theMap[row][col]);
//        }
//        printf("\n");
//    }
//}
//
//void update(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL],
//    int row, int col) {
//    // 表示周围地雷个数
//    int count = 0;
//    for (int r = row - 1; r <= row + 1; r++) {
//        for (int c = col - 1; c <= col + 1; c++) {
//            if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
//                //此时r,c坐标超出棋盘范围,直接跳出
//                continue;
//            }
//            if (r == row && c == col) {
//                // 中间位置 不需要判断,直接下次循环
//                continue;
//            }
//            if (mineMap[r][c] == '#') {
//                count++;
//            }
//        }
//    }
//    //如果直接赋值的话,此时假设count是2,
//    //当前row col未知的元素就被设置成了ASCII 值为2的字符
//    //而不是'2'
//    //类似于这样的转换,只是c中这么写
//    showMap[row][col] = '0' + count;
//}
//
//int main() {
//    //1.创建地图并初始化
//    char showMap[MAX_ROW][MAX_COL] = { 0 };
//    char mineMap[MAX_ROW][MAX_COL] = { 0 };
//    init(showMap, mineMap);
//    int openedCount = 0;
//    while (1) {
//        system("cls");
//        //2.打印地图
//        print(showMap);
//        //3.玩家输入坐标
//        int row = 0;
//        int col = 0;
//        printf("请输入坐标(row col):");
//        scanf("%d %d", &row, &col);
//        //进行合法性判定
//        if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
//            printf("您的输入有误!请重新输入!\n");
//            Sleep(1000);
//            continue;
//        }
//        if (showMap[row][col] != '*') {
//            printf("您输入的位置上已经翻开了! 请重新输入!\n");
//            Sleep(1000);
//            continue;
//        }
//        // 4.判定是否踩雷
//        if (mineMap[row][col] == '#') {
//            printf("您踩雷了!!游戏结束!!\n");
//            printf("地雷地图:\n");
//            print(mineMap);
//            break;
//        }
//        //5.更新showMap ,显示当前位置 周围有多少雷
//        update(showMap, mineMap, row, col);
//        openedCount++;
//        //6.进行游戏胜利的判定,统计当前一共翻开了多少个格子
//        if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
//            printf("恭喜你 获胜了!\n");
//        }
//    }
//    return 0;
//}