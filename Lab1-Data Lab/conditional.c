/**
 * conditional - same as x ? y : z
 * Example: conditional(2,4,5) = 4
 * Legal ops: ! ~ & ^ | + << >>
 * Max ops: 16
 */
#include <stdio.h>
int conditional(int x, int y, int z) {
    x = ~(!x)+1;
    return (x&z)+(~x&y);
}

// 添加 main 函数用于测试
int main() {
    printf("conditional(2, 4, 5) = %d\n", conditional(2, 4, 5)); // 应输出 4
    printf("conditional(0, 4, 5) = %d\n", conditional(0, 4, 5)); // 应输出 5
    printf("conditional(-1, 4, 5) = %d\n", conditional(-1, 4, 5)); // 应输出 4
    return 0;
}