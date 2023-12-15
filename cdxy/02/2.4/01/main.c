#include <stdio.h>

/*
 * scanf 读取 整形数 浮点数 ，会忽略 \n 和 空格
 * */
int main() {
    int i;
    char c;
    float f;
    scanf("%d", &i);
    printf("i=%d\n", i);
    fflush(stdin);
    scanf("%c", &c);
    printf("c=%c\n", c);
    fflush(stdin);
    scanf("%f", &f);
    printf("f=%5.2f\n", f);
    return 0;
}
