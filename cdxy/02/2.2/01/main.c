#include <stdio.h>

int main() {
    int i = 5;
    float c = i / 2; // 这里是做整形运算，因为左右操作数都是整数
    float d = (float)i / 2;
    printf("%f\n", c);
    printf("%f\n", d);
    return 0;
}
