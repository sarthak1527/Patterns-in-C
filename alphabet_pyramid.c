#include <stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        /* Print spaces */
        for (int s = 0; s < n - i; s++)
            printf(" ");

        /* Print ascending characters */
        for (int j = 0; j < i; j++)
            printf("%c", 'A' + j);

        /* Print descending characters */
        for (int j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}
