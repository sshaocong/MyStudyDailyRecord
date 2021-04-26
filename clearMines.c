#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]) {
	memset(showMap, '*', MAX_ROW * MAX_COL);
	memset(mineMap, '0', MAX_ROW * MAX_COL);
	srand((unsigned int)time(0));
	int mineCount = 0;
	while (mineCount<=MINE_COUNT) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		mineCount++;
	}
}

void print(char theMap[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ",theMap[row][col]);
		}
		printf("\n");
	}
}

void update(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL],
	int row, int col) {
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL) {
				continue;
			}
			if (r == row && c == col) {
				continue;
			}
			if (mineMap[r][c] == '1') {
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
		printf("请输入坐标(row col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("输入非法!!请重新输入!!\n");
			Sleep(1000);
			continue;
		}
		if (showMap[row][col] != '*') {
			printf("输入坐标已翻开!!请重新输入!!\n");
			Sleep(1000);
			continue;
		}
		if (mineMap[row][col] == '1') {
			printf("踩雷了!!游戏失败!!");
			break;
		}
		update(showMap, mineMap, row, col);
		openedCount++;
		if (openedCount == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("游戏胜利!!");
		}
	}
	return 0;
}