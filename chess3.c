#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define Max_row 3
#define Max_col 3

void init(char chess3[Max_row][Max_col]) {
    for (int row = 0; row < Max_row; row++) {
        for (int col = 0; col < Max_col; col++) {
            chess3[row][col] = ' ';
        }
    }
}

void print(char chess3[Max_row][Max_col]) {
    printf("+---+---+---+\n");
    for (int row = 0; row < Max_row; row++) {
        printf("|");
        for (int col = 0; col < Max_col; col++) {
            printf(" %c |", chess3[row][col]);
        }
        printf("\n+---+---+---+\n");
    }
}

void playerMove(char chess3[Max_row][Max_col]) {
    printf("please play chess...\n");
    while (1) {
        printf("please input coordinate(row col):");
        int row = 0;
        int col = 0;
        scanf("%d %d", &row, &col);
        //进行合法性校验.
        if (row < 0 || row >= Max_row || col < 0 || col >= Max_col) {
            printf("coordinate wrong! please input again!\n");
            continue;
        }
        //若用户输入位置已有子
        if (chess3[row][col] != ' ') {
            printf("pleas enter another coordinate!\n");
            continue;
        }
        //进行落子
        chess3[row][col] = 'x';
        break;
    }
}

void computerMove(char chess3[Max_row][Max_col]) {
    while (1) {
        int row = rand() % Max_row;
        int col = rand() % Max_col;
        if (chess3[row][col] != ' ') {
            continue;
        }
        chess3[row][col] = 'o';
        break;
    }
}

//返回1表示满了 0表示没满
int isFull(char chess3[Max_row][Max_col]) {
    //遍历棋盘看看有没有空格.
    for (int row = 0; row < Max_row; row++) {
        for (int col = 0; row < Max_col; col++) {
            if (chess3[row][col] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}
//此处约定;
//如果返回 x 表示玩家获胜
//如果返回 o 表示电脑获胜
//如果返回 ' ' 表示胜负未分,还要继续下棋
//如果返回q 表示和棋
char isGameOver(char chess3[Max_row][Max_col]) {
    //扫描所有行列及对角线
    for (int row = 0; row < Max_row; row++) {
        if (chess3[row][0] != ' '
            && chess3[row][0] == chess3[row][1]
            && chess3[row][0] == chess3[row][2]) {
            return chess3[row][0];
        }
    }
    for (int col = 0; col < Max_col; col++) {
        if (chess3[0][col] != ' '
            && chess3[0][col] == chess3[1][col]
            && chess3[0][col] == chess3[2][col]) {
            return chess3[0][col];
        }
    }
    if (chess3[0][0] != ' '
        && chess3[0][0] == chess3[1][1]
        && chess3[0][0] == chess3[2][2]) {
        return chess3[0][0];
    }
    if (chess3[0][2] != ' '
        && chess3[0][2] == chess3[1][1]
        && chess3[0][2] == chess3[2][0]) {
        return chess3[0][2];
    }
    //判定是否和棋
    if (isFull(chess3)) {
        return 'q';
    }
    //胜负未分
    return ' ';
}

int main() {
    char chess3[Max_row][Max_col];
    //1.对棋盘进行初始化.
    init(chess3);
    char winner = ' ';
    while (1) {
        //2.打印棋盘.
        print(chess3);
        //3.玩家落子.
        playerMove(chess3);
        //4.判定胜负
        winner = isGameOver(chess3);
        if (winner != ' ') {
            break;
        }
        //5.电脑落子
        computerMove(chess3);
        //6.判定胜负
        char winner = isGameOver(chess3);
        if (winner != ' ') {
            break;
        }
    }
    if (winner == 'x') {
        printf("you win!\n");
    }
    else if (winner == 'x') {
        printf("you should go to hospital!\n");
    }
    else {
        printf("you = rz!\n");
    }
    return 0;
}