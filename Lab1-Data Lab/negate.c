/*
negate - return -x
Example: negate(1) = -1.
Legal ops: ! ~ & ^ | + << >>
Max ops: 5
*/
#include<stdio.h>
int negate(int x) {
    return ~x + 1;
}

int main() {
    printf("%d\n", negate(1)); // Should return -1
    printf("%d\n", negate(0)); // Should return 0
    printf("%d\n", negate(-1)); // Should return 1
    printf("%d\n", negate(2147483647)); // Should return -2147483647
    return 0;
}