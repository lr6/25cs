#include <stdio.h>

// scanf 读取字符数组,会忽略 空格和\n
int main() {
    char c[10];
    char d[10];
    scanf("%s", c);
    printf("c=%s\n", c);
    scanf("%s%s", c, d);
    printf("c=%s,d=%s\n", c, d);
    return 0;
}
