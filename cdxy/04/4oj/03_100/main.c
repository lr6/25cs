#include <stdio.h>

/**
 * 100元换零钱，10 5 2 1四种面值都要有，加起来总共40张
 * 有多少中方法
 * 每一层的边界判断都是可以缩小的
 * */
int main() {
    int r = 0;
    for(int i = 1; i < 100 / 10; i++) {
        for( int j = 1; j < 100 / 5; j++) {
            for(int m = 1; m < 37; m++) {
                for(int n = 1; n < 37; n++) {
                    if(i*10 + j*5 + m*2 + n == 100 && i+j+m+n == 40) {
                        r++;
                    }
                }
            }
        }
    }
    printf("%d\n", r);
    return 0;
}
