#include <stdio.h>

int input_vector(float* arr, int n);
void outVector(const float* arr, int n);
int addVectors(const float* v1, const float* v2, float* v3, int n);
float scalVectors(const float* v1, const float* v2, int n);
int test();

int main() {
    test();
    return 0;
}

int input_vector(float* arr, int n) {
    int k = 0;
    printf("Enter %d real numbers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%f", &arr[i]) == 1) {
            k++;
        }
    }
    return k;
}

void outVector(const float* arr, int n) {
    printf("Vector: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int addVectors(const float* v1, const float* v2, float* v3, int n) {
    if (n <= 0) return 0;
    for (int i = 0; i < n; i++) {
        v3[i] = v1[i] + v2[i];
    }
    return 1;
}

float scalVectors(const float* v1, const float* v2, int n) {
    float product = 0.0;
    for (int i = 0; i < n; i++) {
        product += v1[i] * v2[i];
    }
    return product;
}

int test() {
    float v1[20], v2[20], v3[20];
    int n;

    printf("Enter vector dimension (n < 20): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 20) {
        printf("Invalid dimension!\n");
        return 0;
    }

    printf("Vector 1:\n");
    if (input_vector(v1, n) != n) {
        printf("Input error!\n");
        return 0;
    }

    printf("Vector 2:\n");
    if (input_vector(v2, n) != n) {
        printf("Input error!\n");
        return 0;
    }

    printf("\nResults:\n");
    outVector(v1, n);
    outVector(v2, n);

    if (addVectors(v1, v2, v3, n)) {
        printf("Vector sum: ");
        outVector(v3, n);
    }

    float scalar = scalVectors(v1, v2, n);
    printf("Scalar product: %.2f\n", scalar);

    return 1;
}