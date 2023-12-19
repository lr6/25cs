#include <stdio.h>

// 逻辑非 优先级 高于 算术运算符
// 逻辑与 逻辑或 低于 算术运算符
// 记住优先级
int main() {
    int i, j;
    while(scanf("%d", &i)) {
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
            printf("ok\n");
        } else {
            printf("not ok\n");
        }
    }
    i = !!j;
    printf("i = %d", i);
    return 0;
}
