#include <stdio.h>

/**
 * 一维数组
 * 方括号中的99以前的标准必须为常量表达式
 * */
int main() {
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int b[10] = { 1, 2, 3, 4, 5 }; // 后面0补全
    // int c[0]; // 长度为0,没有意义
    // int d[1]; d[1]={1} // 这样写,编译不过
    printf("Hello, World!\n");
    return 0;
}