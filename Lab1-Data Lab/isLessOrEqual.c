/**
 * isLessOrEqual - if x <= y then return 1, else return 0
 * Example: isLessOrEqual(4,5) = 1.
 * Legal ops: ! ~ & ^ | + << >>
 * Max ops: 24
 */
#include<stdio.h>
int isLessOrEqual(int x, int y) {
    int signx = (x >> 31) & 1;  // 提取 x 的符号位（0 表示非负，1 表示负）
    int signy = (y >> 31) & 1;  // 提取 y 的符号位（0 表示非负，1 表示负）
    int flag1 = signx & (!signy); // 处理异号情况：x 为负且 y 非负时，flag1=1（x <= y 成立）
    int e = signx ^ signy;       // 判断符号是否相同：e=0 表示同号，e=1 表示异号
    int flag2 = ((!e) & ((x + ~y) >> 31) & 1); // 处理同号情况：通过计算 x + ~y 的符号位判断 x <= y
    return flag1 | flag2;        // 组合结果：异号或同号条件下满足条件时返回 1
}
// 添加 main 函数用于测试
int main() {
    printf("isLessOrEqual(4, 5) = %d\n", isLessOrEqual(4, 5));   // 应输出 1
    printf("isLessOrEqual(5, 4) = %d\n", isLessOrEqual(5, 4));   // 应输出 0
    printf("isLessOrEqual(-1, 0) = %d\n", isLessOrEqual(-1, 0)); // 应输出 1
    printf("isLessOrEqual(0, 0) = %d\n", isLessOrEqual(0, 0));   // 应输出 1
    return 0;
}