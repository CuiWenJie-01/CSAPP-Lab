/*
isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
Example:
isAsciiDigit(0x35) = 1
isAsciiDigit(0x3a) = 0
isAsciiDigit(0x05) = 0
Legal ops: ! ~ & ^ | + << >>
Max ops: 15
*/
#include<stdio.h>
int isAsciiDigit(int x) {
    int diff1 = x + (~0x30 + 1);  // 计算 x - 0x30
    int diff2 = x + (~0x3A + 1);  // 计算 x - 0x3A
    return !(diff1 >> 31) & ((diff2 >> 31) & 1);
}
int main() {
    printf("isAsciiDigit(0x35) = %d\n", isAsciiDigit(0x35)); // 应输出 1
    printf("isAsciiDigit(0x3a) = %d\n", isAsciiDigit(0x3a)); // 应输出 0
    printf("isAsciiDigit(0x05) = %d\n", isAsciiDigit(0x05)); // 应输出 0
    return 0;
}

