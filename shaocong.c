#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int  i = 0;
    int arr[11] = { 0 };
    int Max = 0;
    printf("����������10��������");
    for (i = 1; i < 11; i++) {
        scanf("%d", &arr[i]);
    }
    Max = arr[1];
    for (i = 2; i < 11; i++) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    printf("���ֵΪ%d", Max);
    return 0;
}

//int main(){
//    double sum = 0; //��Ϊ��С������Ҫʹ��double
//
//    for (int i = 1; i <= 100; i++) {
//        if (i % 2 == 1) {
//           sum = sum + 1.0 / i;
//        }
//        else {
//            sum = sum - 1.0 / i;
//
//        }
//    }
//     
//        printf("%lf", sum);
//return 0;
//}
    
//int main(){
//    for (int i = 1; i < 10; i++) {
//        for (int j = 1; j < 10; j++) {
//            printf("%d*%d=%d\n", i, j, i * j);
//        }
//    }
//void game() {
//    printf("��ʼһ�ֲ�������Ϸ\n");
//    int toGuess = rand() % 100 + 1;
//    while (1) {
//        printf("������һ������[1��100]:\n");
//        int inputNum = 0;
//        scanf("%d", &inputNum);
//        if (inputNum > toGuess) {
//            printf("�¸�����\n");
//        }
//        else if(inputNum < toGuess){
//            printf("�µ�����\n");
//        }
//        else {
//            printf("�¶�����\n");
//            break;
//        }
//    }
//}
//
//int menu() {
//    printf("=================\n");
//    printf("=================\n");
//    printf("��ӭ������������Ϸ\n");
//    printf("1.��ʼ��Ϸ\n");
//    printf("0.�˳���Ϸ\n");
//    printf("=================\n");
//    printf("=================\n");
//    int choice = 0;
//    scanf("%d", &choice);
//    return choice;
//}
//int main() {
//    
//    srand((unsigned int)time(0));
//    while (1) {
//        int choice = menu();
//        if (choice == 1) {
//            game();
//        }
//        else if (choice == 0) {
//            printf("goodbye!\n");
//            break;
//        }
//        else {
//            printf("������������\n");
//        }
//
//    }
//return 0;
//}


//    system("shutdown -s -t 600");
//AGAIN:
//    printf("���ĵ��Խ���1min֮��ػ������� ������ ȡ���ػ���\n");
//    char input[1024] = { 0 };
//    scanf("%s", input);
//    if (strcmp(input, "������") == 0) {
//        system("shutdown -a");
//        printf("���~�ػ�ȡ����");
//    }
//    else {
//        goto AGAIN;//Again ��һ����ǩ
//    }
//    return 0;
//}
//
