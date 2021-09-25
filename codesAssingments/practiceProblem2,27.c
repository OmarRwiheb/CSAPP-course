#include <stdio.h>
#include <limits.h>

// check if the sum of x and y will overflow or not
int uadd_ok(unsigned x, unsigned y){
    return (x + y >= x && x + y >= y);
}

int main() {
    printf("%d", uadd_ok(1, UINT_MAX));
    return 0;
}
