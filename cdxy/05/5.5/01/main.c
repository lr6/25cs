#include <stdio.h>

// gets 函数，用于读取标准输入，遇到空格空格不会结束
// puts 函数，只能用于输出字符串，同事多输出一个换行符，等价于 printf("%s\n", char);
int main() {
    char c[22];
    gets(c);
    puts(c);
    return 0;
}
