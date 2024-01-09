#include <stdio.h>

/**
 * 数组的越界访问
 * 可用内存视图查看j的内存被占
 * */
int main() {
    int a[5]={1,2,3,4,5};
    int i = 1;
    int j = 2;
    a[5] = 8;
    a[6] = 9;
    printf("j=%d\n", j);
    return 0;
}
