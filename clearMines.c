#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW]
	[MAX_COL]) {
	memset(showMap, '*', MAX_ROW * MAX_COL);
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	int mineCount = 0;
	srand((unsigned int)time(0));
	while (mineCount <= MINE_COUNT) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '#') {
			continue;
		}
		mineMap[row][col] = '#';
		mineCount++;
	}
}

void print(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", theMap[row][col]);
		}
		printf("\n");
	}
}

void update(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL],
	int row, int col) {
	int count = 0;
	for (int r = row - 1; r < row + 1; r++) {
		for (int c = col - 1; c < col + 1; c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				continue;
			}
			if (r == row && c == col) {
				continue;
			}
			if (mineMap[r][c] == '#') {
				count++;
			}
		}
	}
	showMap[row][col] = '0' + count;
}
int main() {
	char showMap[MAX_ROW][MAX_COL];
	char mineMap[MAX_ROW][MAX_COL];
	init(showMap, mineMap);
	int openedCount = 0;
	while (1) {
		system("cls");
		print(showMap);
		int row = 0;
		int col = 0;
		printf("please input(row col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("INPUT WRONG!!!please input again!!\n");
			Sleep(1000);
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("HAVE INPUT!!!!please input again!!\n");
			Sleep(1000);
			continue;
		}
		if (mineMap[row][col] == '#') {
			printf("GAME OVER!!!\n");
			print(mineMap);
			break;
		}
		update(showMap, mineMap, row, col);
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("WINNER WINNER CHICKEN CHICKEN!!~");
			break;
		}
	}
	return 0;
}