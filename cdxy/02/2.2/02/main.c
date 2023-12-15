#include <stdio.h>

/*
 * %c 字符
 * %d 带符号整数
 * %f 浮点型
 * %s 一串字符
 * */
int main() {
    int age = 21;
    printf("Hi %s, you are %d years old.\n", "bob", age);
    int i = 1001;
    float f = 96.4;
    printf("i=%-4d;f=%5.2f\n", i, f);
    i = 10;
    f = 92.2;
    printf("i=%-4d;f=%5.2f\n", i, f); // 默认右对齐，加个负号，左对齐
    return 0;
}
