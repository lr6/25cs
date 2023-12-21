#include <stdio.h>

// 对称数
int main() {
    int i, b = 0, backup_i;
    scanf("%d", &i);
    backup_i = i; // 保存之前的i
    while(i) {
        b = b * 10 + i % 10; // i % 10 取得是个位
        i = i / 10; // 这里是整除，直接扔掉个位
    }
    if(backup_i == b) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
