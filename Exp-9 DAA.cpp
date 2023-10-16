#include <stdio.h>
void multiplyMatrices(int A[][100], int B[][100], int result[][100], int row1, int col1, int col2) {
    int i, j, k;

    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (k = 0; k < col1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[100][100], B[100][100], result[100][100];
    int row1, col1, row2, col2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1; 
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, B, result, row1, col1, col2);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
