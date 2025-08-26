/*
 * isTmax - returns 1 if x is the maximum two's complement integer
 *           returns 0 otherwise
 * Legal ops: ! ~ & ^ | + << >>
 * Max ops: 10
 */
#include<stdio.h>
int isTmax(int x) {
    return !(~(x+1)^x|!(x+1));
}

int main() {
    printf("%d\n", isTmax(2147483647)); // Should return 1
    printf("%d\n", isTmax(0));          // Should return 0
    printf("%d\n", isTmax(-1));         // Should return 0
    printf("%d\n", isTmax(2147483646)); // Should return 0
    return 0;
}