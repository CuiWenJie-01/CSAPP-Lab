/*
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 * where bits are numbered from 0 (least significant) to 31 (most significant)
 * Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 * Legal ops: ! ~ & ^ | + << >>
 * Max ops: 12
 */
#include<stdio.h>
int allOddBits(int x) {
   int y = 0xAA + (0xAA << 8);
    y = y + (y << 16);
    return !((x&y)^y);
}

int main() {
    printf("%d\n", allOddBits(0xFFFFFFFD)); // Should return 0
    printf("%d\n", allOddBits(0xAAAAAAAA)); // Should return 1
    return 0;
}