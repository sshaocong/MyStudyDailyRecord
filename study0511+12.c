#include<stdio.h>
#include<string.h>



void reverse(char str[ ]) {
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right) {
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

void reverseString(char str[]) {
	int len = strlen(str) - 1;
	if (len == 0 || len == 1) {
		return;
	}
	char tmp = str[0];
	str[0] = str[len];

	str[len] = '\0';
	reverseString(str + 1);
	str[len] = tmp;
}

int  digSum(int num) {
	if (num < 10) {
		return num;
	}
    return num %10+digSum(num/10);	
}
int liancheng(int n, int k) {
	if (k == 1) {
		return n;
	}
	if (k == 0) {
		return 1;
	}
	return n * liancheng(n, k - 1);
}
int main() {
	//char str[ ] = "zhangyuehanshizhu";
	//reverseString(str);
	//printf("%s ", str);
	printf("%d\n",digSum(1234));
	printf("%d\n", liancheng(2, 10));
	return 0;
}