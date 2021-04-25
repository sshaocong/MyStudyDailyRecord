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
        //���кϷ���У��.
        if (row < 0 || row >= Max_row || col < 0 || col >= Max_col) {
            printf("coordinate wrong! please input again!\n");
            continue;
        }
        //���û�����λ��������
        if (chess3[row][col] != ' ') {
            printf("pleas enter another coordinate!\n");
            continue;
        }
        //��������
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

//����1��ʾ���� 0��ʾû��
int isFull(char chess3[Max_row][Max_col]) {
    //�������̿�����û�пո�.
    for (int row = 0; row < Max_row; row++) {
        for (int col = 0; row < Max_col; col++) {
            if (chess3[row][col] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}
//�˴�Լ��;
//������� x ��ʾ��һ�ʤ
//������� o ��ʾ���Ի�ʤ
//������� ' ' ��ʾʤ��δ��,��Ҫ��������
//�������q ��ʾ����
char isGameOver(char chess3[Max_row][Max_col]) {
    //ɨ���������м��Խ���
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
    //�ж��Ƿ����
    if (isFull(chess3)) {
        return 'q';
    }
    //ʤ��δ��
    return ' ';
}

int main() {
    char chess3[Max_row][Max_col];
    //1.�����̽��г�ʼ��.
    init(chess3);
    char winner = ' ';
    while (1) {
        //2.��ӡ����.
        print(chess3);
        //3.�������.
        playerMove(chess3);
        //4.�ж�ʤ��
        winner = isGameOver(chess3);
        if (winner != ' ') {
            break;
        }
        //5.��������
        computerMove(chess3);
        //6.�ж�ʤ��
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