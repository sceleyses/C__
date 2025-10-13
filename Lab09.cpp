#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int input_arr(double* arr, unsigned n);
double sum_sqr(const double* arr, unsigned n);
void task01();
bool is_sqr(int n);
bool is_cube(int n);
int input_ints(int* arr, int n);
void task02();
double* create_vector(unsigned n);
void free_vector(double* vec);
double* vector_difference(const double* a, const double* b, unsigned n1, unsigned n2);
void print_vector(const double* vec, unsigned n);
void task03();
double** create_matrix_2d(unsigned n);
void free_matrix_2d(double** mat, unsigned n);
void input_matrix_2d(double** mat, unsigned n);
void print_matrix_2d(double** mat, unsigned n);
double** multiply_matrix_2d(double** A, double** B, unsigned n);
void task04_a();
double* create_matrix_1d(unsigned n);
void free_matrix_1d(double* mat);
void input_matrix_1d(double* mat, unsigned n);
void print_matrix_1d(double* mat, unsigned n);
double* multiply_matrix_1d(double* A, double* B, unsigned n);
void task04_b();
double** create_dynamic_matrix(unsigned rows, unsigned cols);
void input_dynamic_matrix(double** mat, unsigned rows, unsigned cols);
void print_dynamic_matrix(double** mat, unsigned rows, unsigned cols);
double** add_rows_to_matrix(double** mat, unsigned* rows, unsigned cols, unsigned m, unsigned k);
void free_dynamic_matrix(double** mat, unsigned rows);
void task09_f();

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
            char task_l;
            printf("Enter the letter of task:");
            scanf(" %c", &task_l);
            switch (task_l) {
                case 'a':
                    task04_a();
                    break;
                case 'b':
                    task04_b();
                    break;
                default:
                    printf("Invalid task letter!");
                    break;
            }
            break;
        case 9:
            task09_f();
            break;
        default:
            printf("Wrong task number");
            break;
    }
    return 0;
}

void task01() {
    unsigned n;

    printf("n = ");
    if (scanf_s("%u", &n) != 1 || n == 0) {
        printf("Invalid n\n");
        return;
    }

    double *arr = (double *) malloc(n * sizeof(*arr));
    if (!arr) {
        printf("Memory allocation error\n");
        return;
    }

    int k = input_arr(arr, n);
    if (k < (int)n) {
        printf("Only %d elements were entered\n", k);
    }

    printf("\nSum of squares is %lf\n", sum_sqr(arr, k));

    free(arr);
}

int input_arr(double* arr, unsigned n) {
    int k = 0;
    for (unsigned i = 0; i < n; i++) {
        printf("a[%u] = ", i);
        if (scanf_s("%lf", &arr[i]) != 1) {
            break;
        }
        k++;
    }
    return k;
}

double sum_sqr(const double* arr, unsigned n) {
    double total = 0;
    for (unsigned i = 0; i < n; i++) {
        total += (arr[i] * arr[i]);
    }
    return total;
}

bool is_sqr(int n) {
    if (n < 0) return false;
    int root = (int)sqrt(n);
    return (root * root == n);
}

bool is_cube(int n) {
    if (n < 0) {
        int root = (int)cbrt(-n);
        return (root * root * root == -n);
    } else {
        int root = (int)cbrt(n);
        return (root * root * root == n);
    }
}

int input_ints(int* arr, int n) {
    int k = 0;
    int value;
    do {
        printf("a[%d] = ", k);
        if (scanf("%d", &value) != 1) {
            break;
        }
        if (value == 0) {
            break;
        }
        arr[k] = value;
        k++;
    } while (k < n);
    return k;
}

void task02() {
    int* arr = (int *) malloc(100 * sizeof(int));
    if (!arr) {
        printf("Memory allocation error\n");
        return;
    }

    int n = input_ints(arr, 100);
    int count_sqr = 0;
    int count_cube = 0;

    for (int i = 0; i < n; i++) {
        if (is_sqr(arr[i])) {
            count_sqr++;
        }
        if (is_cube(arr[i])) {
            count_cube++;
        }
    }

    printf("There are %d perfect squares and %d perfect cubes\n", count_sqr, count_cube);
    free(arr);
}

double* create_vector(unsigned n) {
    double* vec = (double*)malloc(n * sizeof(double));
    if (!vec) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    for (unsigned i = 0; i < n; i++) {
        printf("vec[%u] = ", i);
        if (scanf("%lf", &vec[i]) != 1) {
            printf("Invalid input!\n");
            free(vec);
            return NULL;
        }
    }
    return vec;
}

void free_vector(double* vec) {
    free(vec);
}

double* vector_difference(const double* a, const double* b, unsigned n1, unsigned n2) {
    if (n1 != n2) {
        printf("Error: Vectors must have the same dimension!\n");
        return NULL;
    }

    double* diff = (double*)malloc(n1 * sizeof(double));
    if (!diff) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    for (unsigned i = 0; i < n1; i++) {
        diff[i] = a[i] - b[i];
    }
    return diff;
}

void print_vector(const double* vec, unsigned n) {
    printf("[");
    for (unsigned i = 0; i < n; i++) {
        printf("%lf", vec[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

void task03() {
    unsigned n1, n2;

    printf("Enter dimension of first vector: ");
    scanf("%u", &n1);
    double* v1 = create_vector(n1);
    if (!v1) return;

    printf("Enter dimension of second vector: ");
    scanf("%u", &n2);
    double* v2 = create_vector(n2);
    if (!v2) {
        free_vector(v1);
        return;
    }

    double* diff = vector_difference(v1, v2, n1, n2);
    if (diff) {
        printf("Difference vector: ");
        print_vector(diff, n1);
        free_vector(diff);
    }

    free_vector(v1);
    free_vector(v2);
}

double** create_matrix_2d(unsigned n) {
    double** mat = (double**)malloc(n * sizeof(double*));
    if (!mat) return NULL;

    for (unsigned i = 0; i < n; i++) {
        mat[i] = (double*)calloc(n, sizeof(double));
        if (!mat[i]) {
            for (unsigned j = 0; j < i; j++) free(mat[j]);
            free(mat);
            return NULL;
        }
    }
    return mat;
}

void free_matrix_2d(double** mat, unsigned n) {
    if (!mat) return;
    for (unsigned i = 0; i < n; i++) free(mat[i]);
    free(mat);
}

void input_matrix_2d(double** mat, unsigned n) {
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++) {
            printf("a[%u][%u] = ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }
}

void print_matrix_2d(double** mat, unsigned n) {
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++) {
            printf("%8.2lf ", mat[i][j]);
        }
        printf("\n");
    }
}

double** multiply_matrix_2d(double** A, double** B, unsigned n) {
    double** C = create_matrix_2d(n);
    if (!C) return NULL;

    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++) {
            C[i][j] = 0;
            for (unsigned k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

void task04_a() {
    unsigned n;
    printf("Enter matrix dimension n: ");
    scanf("%u", &n);

    printf("\nEnter first matrix:\n");
    double** A = create_matrix_2d(n);
    if (!A) return;
    input_matrix_2d(A, n);

    printf("\nEnter second matrix:\n");
    double** B = create_matrix_2d(n);
    if (!B) {
        free_matrix_2d(A, n);
        return;
    }
    input_matrix_2d(B, n);

    double** C = multiply_matrix_2d(A, B, n);
    if (C) {
        printf("\nResult (A * B):\n");
        print_matrix_2d(C, n);
        free_matrix_2d(C, n);
    }

    free_matrix_2d(A, n);
    free_matrix_2d(B, n);
}

double* create_matrix_1d(unsigned n) {
    return (double*)calloc(n * n, sizeof(double));
}

void free_matrix_1d(double* mat) {
    free(mat);
}

void input_matrix_1d(double* mat, unsigned n) {
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++) {
            printf("a[%u][%u] = ", i, j);
            scanf("%lf", &mat[i * n + j]);
        }
    }
}

void print_matrix_1d(double* mat, unsigned n) {
    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++) {
            printf("%8.2lf ", mat[i * n + j]);
        }
        printf("\n");
    }
}

double* multiply_matrix_1d(double* A, double* B, unsigned n) {
    double* C = create_matrix_1d(n);
    if (!C) return NULL;

    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = 0; j < n; j++) {
            for (unsigned k = 0; k < n; k++) {
                C[i * n + j] += A[i * n + k] * B[k * n + j];
            }
        }
    }
    return C;
}

void task04_b() {
    unsigned n;
    printf("Enter matrix dimension n: ");
    scanf_s("%u", &n);

    printf("\nEnter first matrix:\n");
    double* A = create_matrix_1d(n);
    if (!A) return;
    input_matrix_1d(A, n);

    printf("\nEnter second matrix:\n");
    double* B = create_matrix_1d(n);
    if (!B) {
        free_matrix_1d(A);
        return;
    }
    input_matrix_1d(B, n);

    double* C = multiply_matrix_1d(A, B, n);
    if (C) {
        printf("\nResult (A * B):\n");
        print_matrix_1d(C, n);
        free_matrix_1d(C);
    }

    free_matrix_1d(A);
    free_matrix_1d(B);
}

double** create_dynamic_matrix(unsigned rows, unsigned cols) {
    double** mat = (double**)malloc(rows * sizeof(double*));
    if (!mat) return NULL;

    for (unsigned i = 0; i < rows; i++) {
        mat[i] = (double*)malloc(cols * sizeof(double));
        if (!mat[i]) {
            for (unsigned j = 0; j < i; j++) {
                free(mat[j]);
            }
            free(mat);
            return NULL;
        }
    }
    return mat;
}

void input_dynamic_matrix(double** mat, unsigned rows, unsigned cols) {
    printf("Enter matrix elements (%ux%u):\n", rows, cols);
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            printf("\nmatrix[%u][%u] =", i, j);
            scanf_s("%lf", &mat[i][j]);
        }
    }
}

void print_dynamic_matrix(double** mat, unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            printf("%8.2f ", mat[i][j]);
        }
        printf("\n");
    }
}

double** add_rows_to_matrix(double** mat, unsigned* rows, unsigned cols, unsigned m, unsigned k) {
    unsigned new_rows = *rows + k;
    double** new_mat = (double**)malloc(new_rows * sizeof(double*));

    if (!new_mat) {
        printf("Memory allocation error!\n");
        return mat;
    }

    for (unsigned i = 0; i < m; i++) {
        new_mat[i] = mat[i];
    }

    for (unsigned i = m; i < m + k; i++) {
        new_mat[i] = (double*)malloc(cols * sizeof(double));
        if (!new_mat[i]) {
            printf("Memory allocation error for row %u!\n", i);
            for (unsigned j = m; j < i; j++) {
                free(new_mat[j]);
            }
            for (unsigned j = 0; j < m; j++) {
                new_mat[j] = NULL;
            }
            free(new_mat);
            return mat;
        }
        for (unsigned j = 0; j < cols; j++) {
            new_mat[i][j] = 0.0;
        }
    }

    for (unsigned i = m; i < *rows; i++) {
        new_mat[i + k] = mat[i];
    }

    free(mat);
    *rows = new_rows;
    return new_mat;
}

void free_dynamic_matrix(double** mat, unsigned rows) {
    if (!mat) return;
    for (unsigned i = 0; i < rows; i++) {
        free(mat[i]);
    }
    free(mat);
}

void task09_f() {
    unsigned N, M, k, m;

    printf("Enter number of rows N:");
    scanf_s("%u", &N);
    printf("Enter number of columns M:");
    scanf_s("%u", &M);

    if (N == 0 || M == 0) {
        printf("Invalid dimensions!\n");
        return;
    }

    double** matrix = create_dynamic_matrix(N, M);
    if (!matrix) {
        printf("Failed to create matrix!\n");
        return;
    }

    input_dynamic_matrix(matrix, N, M);

    printf("\nInitial matrix %ux%u:\n", N, M);
    print_dynamic_matrix(matrix, N, M);

    printf("\nEnter number of rows to add (k):");
    scanf_s("%u", &k);
    printf("Enter starting row index (m, 0-%u):", N);
    scanf_s("%u", &m);

    if (k == 0) {
        printf("k must be positive!\n");
    } else if (m > N) {
        printf("m must be between 0 and %u!\n", N);
    } else {
        matrix = add_rows_to_matrix(matrix, &N, M, m, k);

        if (matrix) {
            printf("\nMatrix after adding %u rows starting from row %u:\n", k, m);
            print_dynamic_matrix(matrix, N, M);
        }
    }

    free_dynamic_matrix(matrix, N);
}