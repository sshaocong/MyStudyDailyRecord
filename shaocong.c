#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int  i = 0;
    int arr[11] = { 0 };
    int Max = 0;
    printf("请任意输入10个整数：");
    for (i = 1; i < 11; i++) {
        scanf("%d", &arr[i]);
    }
    Max = arr[1];
    for (i = 2; i < 11; i++) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    printf("最大值为%d", Max);
    return 0;
}

//int main(){
//    double sum = 0; //因为是小数所以要使用double
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
//    printf("开始一局猜数字游戏\n");
//    int toGuess = rand() % 100 + 1;
//    while (1) {
//        printf("请输入一个整数[1，100]:\n");
//        int inputNum = 0;
//        scanf("%d", &inputNum);
//        if (inputNum > toGuess) {
//            printf("猜高啦！\n");
//        }
//        else if(inputNum < toGuess){
//            printf("猜低啦！\n");
//        }
//        else {
//            printf("猜对啦！\n");
//            break;
//        }
//    }
//}
//
//int menu() {
//    printf("=================\n");
//    printf("=================\n");
//    printf("欢迎来到猜数字游戏\n");
//    printf("1.开始游戏\n");
//    printf("0.退出游戏\n");
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
//            printf("您的输入有误！\n");
//        }
//
//    }
//return 0;
//}


//    system("shutdown -s -t 600");
//AGAIN:
//    printf("您的电脑将在1min之后关机，输入 我是猪 取消关机：\n");
//    char input[1024] = { 0 };
//    scanf("%s", input);
//    if (strcmp(input, "我是猪") == 0) {
//        system("shutdown -a");
//        printf("真乖~关机取消了");
//    }
//    else {
//        goto AGAIN;//Again 是一个标签
//    }
//    return 0;
//}
//
