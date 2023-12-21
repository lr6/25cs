#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    int a = 1;
    if(i == 0) {
        printf("1");
    } else {
        while(i) {
            a *= i;
            i--;
        }
        printf("%d\n", a);
    }
    return 0;
}
