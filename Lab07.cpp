#include <stdio.h>
#include <math.h>
#define N 5


void task01();
void task02();
void task03();
int grater_Euler(int array[N]);
void task04();
void task05();
int max(int array[N]);
int input_vector(float* arr, int n);
void outVector(const float* arr, int n);
int addVectors(const float* v1, const float* v2, float* v3, int n);
float scalVectors(const float* v1, const float* v2, int n);
int test();
void task09_g();
int min(int array[N]);
void task14();


int main() {
    int task_number;
    printf("Enter the number of task:");
    scanf("%d", &task_number);

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
            task04();
            break;
        case 5:
            task05();
            break;
        case 6:
            test();
            break;
        case 9:
            task09_g();
            break;
        case 14:
            task14();
            break;
        default:
            printf("Wrong task number");
            break;
    }
}

void task01() {
    int array[N] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]); // підрахування розміру масиву
    int counter = 0;

    double x;
    printf("x=");
    scanf_s("%lf", &x);
    for (int i = 0; i < n; i++) {
        if (array[i] < x) {
            counter++;
        }
    }
    printf("Answer: %d", counter);
    return;
}


void task02() {

    int array[N] = {5, 112, 4, 3};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = n-1; i != -1; i--) {
        printf("%d,", array[i]);//специфікатор

    }

}


int grater_Euler(int array[N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += array[i]> exp(1) ? 1 : 0;
    }
    return sum;
}

void task03() {

    int array[N];
    int num;
    for (int i = 0; i < N; i++) {
        printf("\nEnter number: ");
        scanf_s("%d", &num);
        array[i] = num;
    }

    for (int i = 0; i < N; i++) {
        printf("%d,", array[i]);
    }

    int result = grater_Euler(array);
    printf("\nThe euler result is: %d\n", result);

}

//int grater_euler1(int array[], size_t n) {}
//int grater_euler2(int* array_start, int* array_size) {}

int max(int array[N]) {
    int maximum = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }
    return maximum;
}

void task04() {
    int array[N];
    for (int i = 0; i < N; i++) {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\n\nMax number is %d", max(array));
}


int odd(int array[N]) {
    int odd_num = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] % 2) {
            continue;
        } else {
            odd_num++;
        }
    }
    return odd_num;
}

int even(int array[N]) {
    int even_num = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] % 2) {
            even_num++;
        }

    }
    return even_num;
}

void task05() {
    int array[N];
    for (int i = 0; i < N; i++) {
        printf("\nEnter number %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }

    printf("\n\nOdd numbers: %d", odd(array));
    printf("\n\nEven numbers: %d", even(array));

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
    if (scanf("%d", &n) != 1) {
        printf("Input error!\n");
        return 0;
    }

    if (n <= 0 || n >= 20) {
        printf("Invalid dimension! Must be 0 < n < 20\n");
        return 0;
    }

    printf("Vector 1:\n");
    if (input_vector(v1, n) != n) {
        printf("Input error for vector 1!\n");
        return 0;
    }

    printf("Vector 2:\n");
    if (input_vector(v2, n) != n) {
        printf("Input error for vector 2!\n");
        return 0;
    }

    printf("\nResults:\n");
    printf("First ");
    outVector(v1, n);
    printf("Second ");
    outVector(v2, n);

    if (addVectors(v1, v2, v3, n)) {
        printf("Sum of vectors: ");
        outVector(v3, n);
    } else {
        printf("Error calculating vector sum!\n");
    }

    float scalar = scalVectors(v1, v2, n);
    printf("Scalar product: %.2f\n", scalar);

    return 1;
}

int min(int array[], int size) {
    int minimum = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }
    return minimum;
}

void task09_g() {
    int n;
    printf("Enter n:");
    scanf_s("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d:", i + 1);
        scanf_s("%d", &array[i]);
    }
    int min_num = min(array, n);
    int ans = pow(min_num, 2) - min_num;
    printf("Answer: %d", ans);

}

void task14() {

    int n;
    printf("Enter n:");
    scanf_s("%d", &n);
    double arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d:", i + 1);
        scanf_s("%lf", &arr[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum +=  arr[i];
    }
    double mean = sum / n;

    double deviationSum = 0.0;
    for (int i = 0; i < n; i++) {
        deviationSum += fabs(arr[i] - mean);
    }
    double result = deviationSum / n;

    printf("Answer: %.2f\n", result);

}

