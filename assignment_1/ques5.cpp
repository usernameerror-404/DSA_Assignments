// question 5: row and column sums
// assgnment 1

#include <stdio.h>
int main() {
    int a[10][10];
    int n, m, i, j;
    int rowSum, colSum;

    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    printf("Enter matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        rowSum = 0;
        for (j = 0; j < m; j++) {
            rowSum = rowSum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i, rowSum);
    }

    for (j = 0; j < m; j++) {
        colSum = 0;
        for (i = 0; i < n; i++) {
            colSum = colSum + a[i][j];
        }
        printf("Sum of col %d = %d\n", j, colSum);
    }

    return 0;
}
