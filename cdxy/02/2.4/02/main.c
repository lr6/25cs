#include <stdio.h>

int main() {
    int i, ret;
    float f;
    char c;
    ret = scanf("%d %c%f", &i,&c,&f); // %c 前面要加空格，除非c%在最前面
    printf("i=%d,c=%c,f=%5.2f,ret=%d\n", i, c, f, ret);
    return 0;
}
