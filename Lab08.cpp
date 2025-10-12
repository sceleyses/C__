#include <stdio.h>
#define MAX 100


void task01();
void task02();
void task03();
void task04_or_05(int task_num);
void task06();
void task07();
double Determinant(double matrix[MAX][MAX], int n);
void task23();

int main() {
    int task_number;
    printf("Enter the number of task:");
    scanf_s("%d", &task_number);
    switch (task_number) {
        case 1:
            task01();
            break;
        case 2:
            task02();
            break;
        case 3:
            task03();
            break;
        case 4:
            task04_or_05(task_number);
            break;
        case 5:
            task04_or_05(task_number);
            break;
        case 6:
            task06();
            break;
        case 7:
            task07();
            break;
        case 23:
            task23();
            break;
        default:
            printf("Invalid task number!\n");
            break;
    }
}


void task01() {
    int matrix[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    int M, N;
    printf("Enter M (number) and N (placement):");
    scanf_s("%d%d", &M, &N);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == M) matrix[i][j] = N;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void task02() {
    double matrix[3][3] = {
        {1.0, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i,j;
    printf("Enter i and j:");
    scanf_s("%d%d", &i, &j);
    if (i < 0 || i > 2 || j < 0 || j > 2) {
        printf("Invalid input!\n");
        return;
    }

    double a;
    printf("Enter a:");
    scanf_s("%d", &a);
    matrix[i][j] = a;
    for (int k = 0; k < 3; k++) {
        for (int n = 0; n < 3; n++) {
            printf("%.1lf ", matrix[k][n]);
        }
        printf("\n");
    }
    return;
}

void task03() {
    int m,n;
    printf("Enter m and n:");
    scanf_s("%d%d", &m, &n);
    if (m < 0 || n < 0) {
        printf("Invalid input!\n");
        return;
    } else if (m > 21 || n > 21) {
        printf("Invalid input!\n");
        return;
    }
    double matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            double num;
            printf_s("\nEnter number of [%d][%d] positioin:", i, j);
            scanf_s("%lf", &num);
            matrix[i][j] = num;
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.1lf ", matrix[i][j]);
        }
        printf("\n");
    }
    return;
}

void task04_or_05(int task_num) {
    int m, n;
    printf("Enter m and n: ");
    scanf_s("%d %d", &m, &n);

    if (m <= 0 || n <= 0 || m >= 25 || n >= 25) {
        printf("Invalid input.\n");
        return;
    }

    double matrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("\nEnter the [%d][%d] value: ", i, j);
            scanf_s("%lf", &matrix[i][j]);
        }
    }

    printf("\nMatrix entered:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    if (task_num == 5) {
        printf("Transponse matrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%.2lf ", matrix[j][i]);
            }
            printf("\n");
        }
    }
    return;
}

void task06() {
    int N, M;
    int k;
    int A[MAX][MAX];

    printf("Enter number of rows N (<=100): ");
    scanf("%d", &N);
    printf("Enter number of columns M (<=100): ");
    scanf("%d", &M);

    printf("Enter diagonal index k (i - j = k): ");
    scanf("%d", &k);

    printf("Enter matrix elements row by row:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int sum = 0;
    int found = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i - j == k) {
                sum += A[i][j];
                found = 1;
            }
        }
    }

    if (found) {
        printf("Sum of elements along diagonal i-j=%d is %d\n", k, sum);
    } else {
        printf("0\n");
    }

    return;
}

double Determinant(double matrix[MAX][MAX], int n) {
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    }

    double det = 0;
    double temp[MAX][MAX];

    for (int p = 0; p < n; p++) {
        int row = 1;
        for (int i = 1; i < n; i++) {
            int col = 0;
            for (int j = 0; j < n; j++) {
                if (j == p) continue;
                temp[row-1][col] = matrix[i][j];
                col++;
            }
            row++;
        }
        det += matrix[0][p] * Determinant(temp, n-1) * ((p % 2 == 0) ? 1 : -1);
    }

    return det;
}


void task07(){
    int n;
    double matrix[MAX][MAX];

    printf("Enter size of square matrix (n <= 10): ");
    scanf("%d", &n);

    printf("Enter matrix elements row by row:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    double det = Determinant(matrix, n);
    printf("Determinant = %.2lf\n", det);

    return;
}


void task23() {
    int n;
    printf("Enter n (matrix order 2n):");
    scanf_s("%d", &n);

    int N = 2 * n;
    double matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("\nEnter matrix [%d][%d]:", i, j);
            scanf_s("\n%lf", &matrix[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    double rotated[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rotated[i][j] = matrix[j][N - 1 - i];
        }
    }

    printf("Result:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f ", rotated[i][j]);
        }
        printf("\n");
    }

    return;
}



