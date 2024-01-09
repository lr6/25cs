#include <stdio.h>
#include <string.h>

/**
 * str系列字符串操作函数
 * strlen 计算字符串长度
 * strcpy 把一个字符串复制到字符数组中
 * strcmp 比较两个字符串大小
 * strcat 把两个字符串连接在一起
 * */
int main() {

    int len;
    char c[20];
    char d[100]="hello";
    gets(c);
    puts(c);
    len = strlen(c);
    int mylen = mystrlen(c);
    printf("len=%d\n", len);
    printf("mylen=%d\n", mylen);
    strcat(c, d);
    puts(c);
    puts(d);
    strcpy(d, c);
    puts(c);
    puts(d);
    printf("c?d%d\n", strcmp(c, d));
    len = strlen(c);
    mylen = mystrlen(c);
    printf("len=%d\n", len);
    printf("sizeof(c)=%d\n", sizeof(c));
    printf("mylen=%d\n", mylen);
    return 0;
}
int mystrlen(const char c[]) {
    int i = 0;
    while(c[i++]);
    return i - 1;
}


