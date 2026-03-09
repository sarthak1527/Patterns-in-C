#include <stdio.h>

int main() {
    int choice, n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nSelect the pattern to generate:\n");
    printf("1. Right Triangle\n");
    printf("2. Pyramid\n");
    printf("3. Inverted Pyramid\n");
    printf("4. Number Triangle\n");
    printf("5. Diamond Pattern\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nRight Triangle Pattern:\n");
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= i; j++)
                    printf("*");
                printf("\n");
            }
            break;

        case 2:
            printf("\nPyramid Pattern:\n");
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= n-i; j++)
                    printf(" ");
                for(j = 1; j <= 2*i-1; j++)
                    printf("*");
                printf("\n");
            }
            break;

        case 3:
            printf("\nInverted Pyramid Pattern:\n");
            for(i = n; i >= 1; i--) {
                for(j = 1; j <= n-i; j++)
                    printf(" ");
                for(j = 1; j <= 2*i-1; j++)
                    printf("*");
                printf("\n");
            }
            break;

        case 4:
            printf("\nNumber Triangle Pattern:\n");
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= i; j++)
                    printf("%d ", j);
                printf("\n");
            }
            break;

        case 5:
            printf("\nDiamond Pattern:\n");
            // Top half
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= n-i; j++)
                    printf(" ");
                for(j = 1; j <= 2*i-1; j++)
                    printf("*");
                printf("\n");
            }
            // Bottom half
            for(i = n-1; i >= 1; i--) {
                for(j = 1; j <= n-i; j++)
                    printf(" ");
                for(j = 1; j <= 2*i-1; j++)
                    printf("*");
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
