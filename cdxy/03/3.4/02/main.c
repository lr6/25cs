#include <stdio.h>

int main() {
    int i;
    char j;
    float f;
    scanf("%d %c %f", &i, &j, &f);
    float sum = i + j + f;
    printf("%0.2f\n", sum);
    return 0;
}
