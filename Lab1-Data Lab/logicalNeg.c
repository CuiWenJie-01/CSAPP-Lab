/**
 * logicalNeg - implement the ! operator, using all of
 * the legal operators except !
 * Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 * Legal ops: ~ & ^ | + << >>
 * Max ops: 12
 */
#include<stdio.h>
int logicalNeg(int x) {
    return (((~ x + 1) | x) >> 31) + 1;
}

// 添加 main 函数用于测试
int main() {
    printf("logicalNeg(3) = %d\n", logicalNeg(3)); // 应输出 0
    printf("logicalNeg(0) = %d\n", logicalNeg(0)); // 应输出 1
    printf("logicalNeg(-5) = %d\n", logicalNeg(-5)); // 应输出 0
    return 0;
}