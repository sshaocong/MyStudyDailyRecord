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
//	printf("������Ҫ���ҵ�����:");
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
//			printf("�ҵ���num���±��� %d", mid);
//			break;
//		}
//		if (left > right) {
//			printf("�Ҳ���!");
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
//	printf("������Ҫ���ҵ�����:");
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
//			printf("�ҵ���num�±���%d\n", mid);
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
//    //mem => memory �ڴ�
//    //set:����,����
//    //memset�Ĺ��ܾ��ǰ�һ���ڴ��ϵ�ÿ���ֽڶ����ó�һ�������ֵ
//    //��ά�����ÿ��Ԫ�ض�����һ���������ڴ�ռ��ϲ��ֵ�
//    memset(showMap, '*', MAX_ROW * MAX_COL);
//    memset(mineMap, '0', MAX_ROW * MAX_COL);
//    //�����������
//    srand((unsigned int)time(0));
//    //�������ʮ��λ����Ϊ����.
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
////����һ������ͬ�¾߱���ӡ���ֵ�ͼ�Ĺ���
////ȡ����ʵ����ʲô
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
//    // ��ʾ��Χ���׸���
//    int count = 0;
//    for (int r = row - 1; r <= row + 1; r++) {
//        for (int c = col - 1; c <= col + 1; c++) {
//            if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
//                //��ʱr,c���곬�����̷�Χ,ֱ������
//                continue;
//            }
//            if (r == row && c == col) {
//                // �м�λ�� ����Ҫ�ж�,ֱ���´�ѭ��
//                continue;
//            }
//            if (mineMap[r][c] == '#') {
//                count++;
//            }
//        }
//    }
//    //���ֱ�Ӹ�ֵ�Ļ�,��ʱ����count��2,
//    //��ǰrow colδ֪��Ԫ�ؾͱ����ó���ASCII ֵΪ2���ַ�
//    //������'2'
//    //������������ת��,ֻ��c����ôд
//    showMap[row][col] = '0' + count;
//}
//
//int main() {
//    //1.������ͼ����ʼ��
//    char showMap[MAX_ROW][MAX_COL] = { 0 };
//    char mineMap[MAX_ROW][MAX_COL] = { 0 };
//    init(showMap, mineMap);
//    int openedCount = 0;
//    while (1) {
//        system("cls");
//        //2.��ӡ��ͼ
//        print(showMap);
//        //3.�����������
//        int row = 0;
//        int col = 0;
//        printf("����������(row col):");
//        scanf("%d %d", &row, &col);
//        //���кϷ����ж�
//        if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
//            printf("������������!����������!\n");
//            Sleep(1000);
//            continue;
//        }
//        if (showMap[row][col] != '*') {
//            printf("�������λ�����Ѿ�������! ����������!\n");
//            Sleep(1000);
//            continue;
//        }
//        // 4.�ж��Ƿ����
//        if (mineMap[row][col] == '#') {
//            printf("��������!!��Ϸ����!!\n");
//            printf("���׵�ͼ:\n");
//            print(mineMap);
//            break;
//        }
//        //5.����showMap ,��ʾ��ǰλ�� ��Χ�ж�����
//        update(showMap, mineMap, row, col);
//        openedCount++;
//        //6.������Ϸʤ�����ж�,ͳ�Ƶ�ǰһ�������˶��ٸ�����
//        if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
//            printf("��ϲ�� ��ʤ��!\n");
//        }
//    }
//    return 0;
//}