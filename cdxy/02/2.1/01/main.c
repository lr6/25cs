#include <stdio.h>
// 符号常量 是直接替换的，所以值为7
#define PI 3+2
int main() {
    int i = PI * 2;
    printf("i=%d\n", i);
    printf("i size=%d\n", sizeof(i));
    return 0;
}
