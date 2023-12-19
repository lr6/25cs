#include <stdio.h>

// 逻辑与 逻辑或 短路运算符
int main() {
    int i = 1;
    i && printf("you can't see me!\n");
    i || printf("you can see me!\n");
    return 0;
}
