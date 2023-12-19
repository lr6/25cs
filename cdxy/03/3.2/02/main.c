#include <stdio.h>
// 关系运算符优先级小于 算术运算符
int main() {
    int a;
    while(scanf("%d", &a)) {
        if(a > 3 && a < 10) {
            printf("a in 3 <-> 10\n");
        } else {
            printf("a out 3 <-> 10\n");
        }
    }
    return 0;
}
