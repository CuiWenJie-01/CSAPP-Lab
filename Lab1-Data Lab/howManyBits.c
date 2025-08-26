/**
 * howManyBits - return the minimum number of bits required to represent x in
 * two's complement
Examples:
howManyBits(12) = 5
howManyBits(298) = 10
howManyBits(-5) = 4
howManyBits(0) = 1
howManyBits(-1) = 1
howManyBits(0x80000000) = 32
Legal ops: ! ~ & ^ | + << >>
Max ops: 90
 */
#include<stdio.h>
int howManyBits(int x) {
    // 获取符号位，flag=0表示正数，flag=-1表示负数
    int flag = x >> 31;
    // 如果是负数，取反（补码表示）；否则原样
    x = ((~flag) & x) | (flag & (~x));
    // 检查高16位是否有1，有则bit_16=16，否则为0
    int bit_16 = (!!(x >> 16)) << 4; 
    x = x >> bit_16;
    // 检查高8位是否有1，有则bit_8=8，否则为0
    int bit_8 = !!(x>>8)<<3;
    x = x >> bit_8;
    // 检查高4位是否有1，有则bit_4=4，否则为0
    int bit_4 = !!(x >> 4) << 2;
    x = x >> bit_4;
    // 检查高2位是否有1，有则bit_2=2，否则为0
    int bit_2 = !!(x >> 2) << 1;
    x = x >> bit_2;
    // 检查高1位是否有1，有则bit_1=1，否则为0
    int bit_1 = !!(x >> 1);
    x = x >> bit_1;
    // 剩下最后一位
    int bit_0 = x;
    // 总位数 = 所需位数 + 1（符号位）
    return bit_16+bit_8+bit_4+bit_2+bit_1+bit_0+1;
}
// 添加 main 函数用于测试
int main() {
    printf("howManyBits(12) = %d\n", howManyBits(12));           // 应输出 5
    printf("howManyBits(298) = %d\n", howManyBits(298));         // 应输出 10
    printf("howManyBits(-5) = %d\n", howManyBits(-5));           // 应输出 4
    printf("howManyBits(0) = %d\n", howManyBits(0));             // 应输出 1
    printf("howManyBits(-1) = %d\n", howManyBits(-1));           // 应输出 1
    printf("howManyBits(0x80000000) = %d\n", howManyBits(0x80000000)); // 应输出 32
    return 0;
}