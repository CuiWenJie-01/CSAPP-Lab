/*
 * tmin - return minimum two's complement integer
 * Legal ops: ! ~ & ^ | + << >>
 * Max ops: 10
 */
#include<stdio.h>

int tmin(void) {
    return 1 << 31;
}

int main() {
    printf("%d\n", tmin());
    return 0;
}