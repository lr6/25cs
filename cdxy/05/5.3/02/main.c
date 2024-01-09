#include <stdio.h>

/**
 * 数组的传递
 * main 主函数
 * 数组传递，只能传递过去数组的起始地址（是个指针，8个字节），没有办法传递数据的长度
 * */
void print(int a[], int len) {
    for(int i = 0; i < len; i++) {
        printf("%d\n", a[i]);
    }
    a[3] = 333; // 子函数里面可以修改主函数传递进来的数组
}

int main() {
    int a[5]={1,2,3,4,5};
    int len = sizeof(a) / sizeof(int);
    print(a, len);
    printf("a[3]=%d", a[3]);
    return 0;
}
