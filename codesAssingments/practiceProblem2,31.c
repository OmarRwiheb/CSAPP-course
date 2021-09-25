#include <stdio.h>
#include <limits.h>

// check if the sum of x and y will overflow or not
int tadd_ok(int x, int y) {
    return ((x > 0 && y > 0 && x + y > 0) || (x < 0 && y < 0 && x + y < 0));
}

int main() {

    printf("%d", tadd_ok(1, INT_MAX));

    return 0;
}
