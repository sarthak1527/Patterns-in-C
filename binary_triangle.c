#include <stdio.h>

int main() {
    int i, j;
    int n = 4; // number of rows

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            // If sum of row and column indices is even, print 1; else print 0
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
