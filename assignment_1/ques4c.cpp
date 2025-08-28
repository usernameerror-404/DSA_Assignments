// question 4 c part: transposing a matrix
//assgnment 1


#include <stdio.h>
int main() {
    int a[10][10], t[10][10];
    int n, m, i, j;

    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    printf("Enter matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
