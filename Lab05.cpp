#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void task01_a();
void task01_b();
int task02_a(int k);
int task02_b(int a);
int task02_c(int a);
int task02_d();
bool is_odd(int n);
void task03();
int next_element(int a);
int calculate_steps(int n);
void task04_a();
long long factorial(int n);
void task04_b();
void task05();
void task06_a();
void task06_b();
void task06_c();
void task07();
double task07_a(int k);
double task07_b(int k);
void task08_a();
void task08_b();
double task11_a(int k);
void task11_c();
void task16_k();


int main() {
    int task_number;
    printf("Enter the number of task:");
    scanf("%d", &task_number);

    switch (task_number) {
        case 1:
            char task_letter;
            printf("Enter the letter of task:");
            scanf(" %c", &task_letter);
            switch (task_letter) {
                case 'a':
                    task01_a();
                    break;
                case 'b':
                    task01_b();
                    break;
                default:
                    printf("Invalid task letter!\n");
                    break;
            }
            break;
        case 2:
            char tsk_letter;
            printf("Enter the letter of task:");
            scanf(" %c", &tsk_letter);
            switch (tsk_letter) {
                case 'a':
                    int k;
                    printf("Enter the k:");
                    scanf("%d", &k);

                    for (int i = 0; i <= k; i++) {
                        printf("F%d = %d\n", i, task02_a(i));
                    }
                    break;

                case 'b':
                    int a;
                    printf("Enter the a:");
                    scanf("%d", &a);
                    printf("the biggest Fn <= %d = %d", a, task02_b(a));
                    break;
                case 'c':
                    int A;
                    printf("Enter the a:");
                    scanf("%d", &A);
                    printf("the lowest Fn >= %d = %d", A, task02_c(A));
                    break;
                case 'd':
                    printf("The sum of all Fn <= 1000 = %d", task02_d());
                    break;

                default:
                    printf("Invalid task letter!\n");
                    break;
            } break;

        case 3:
            task03();
            break;
        case 4:
            char task_let;
            printf("Enter the letter of task:");
            scanf(" %c", &task_let);
            switch (task_let) {
                case 'a':
                    task04_a();
                    break;
                case 'b':
                    task04_b();
                    break;

                default:
                    printf("Invalid task letter!\n");
                    break;
            } break;

        case 5:
            task05();
            break;
        case 6:
            char task_l;
            printf("Enter the letter of task:");
            scanf(" %c", &task_l);
            switch (task_l) {
                case 'a':
                    task06_a();
                    break;
                case 'b':
                    task06_b();
                    break;
                case 'c':
                    task06_c();
                    break;
                default:
                    printf("Invalid task letter!\n");
                    break;
            }break;
        case 7:
            task07();
            break;
        case 8:
            char task_l1;
            printf("Enter the letter of task:");
            scanf(" %c", &task_l1);
            switch (task_l1) {
                case 'a':
                    task08_a();
                    break;
                case 'b':
                    task08_b();
                    break;
                default:
                    printf("Invalid task letter!\n");
                    break;
            }
            break;
        case 11:
            task11_c();
            break;
        case 16:
            task16_k();
            break;
        default:
            printf("Invalid task number!\n");
            break;
    }

    return 0;
}

void task01_a() {
    double a;
    printf("Enter the a:");
    scanf_s("%lf", &a);

    double result = 0;
    int n = 1;

    while (result <= a) {
        result += 1.0 / n;
        n++;
    }
    printf("\nThe answer is: %lf", result);

    return;
}

void task01_b() {
    double a;
    printf("Enter the a:");
    scanf_s("%lf", &a);

    double result = 0;
    int n = 1;

    while (result <= a) {
        result += 1.0 / n;
        n++;
    }
    printf("\nThe answer is: %d", (n-1));

    return;
}

int task02_a(int k) {

    if (k == 0) {
        return 0;
    }
    if (k == 1) {
        return 1;
    }

    int prev = 0;
    int curr = 1;
    for (int i = 2; i <= k; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int task02_b(int a) {
    int prev = 0;
    int curr = 1;
    int index = 0;

    while (curr <= a) {
        int next = prev + curr;
        prev = curr;
        curr = next;
        index++;
    }

    return index-1;
}

int task02_c(int a) {
    int prev = 0;
    int curr = 1;
    int index = 0;

    while (curr <= a) {
        int next = prev + curr;
        prev = curr;
        curr = next;
        index++;
    }

    return index;
}

int task02_d() {
    int detailed_sum = 0;
    int prev = 0, curr = 1;
    while (curr <= 1000) {
        detailed_sum += curr;
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    return detailed_sum;
}

bool is_odd(int n) {
    return n % 2 == 0;
}

int next_element(int a) {
    if (is_odd(a)) {
        return a / 2;
    } else {
        return 3 * a + 1;
    }
}

int calculate_steps(int n) {
    int steps = 0;
    int current = n;

    printf("Sequence for n = %d: ", n);
    printf("%d", current);

    while (current != 1) {
        current = next_element(current);
        steps++;
        printf(" -> %d", current);
    }
    printf(" (Steps: %d)\n", steps);

    return steps;
}

void task03() {
    int n;
    printf("Enter the n:");
    scanf_s("%d", &n);


    int steps_for_n = calculate_steps(n);
    printf("\nFor n = %d we need %d steps to achieve 1\n\n", n, steps_for_n);


    int max_steps = 0;
    int number_with_max_steps = 1;

    for (int i = 1; i < 1000; i++) {
        int current = i;
        int steps = 0;

        while (current != 1) {
            current = next_element(current);
            steps++;
        }

        if (steps > max_steps) {
            max_steps = steps;
            number_with_max_steps = i;
        }
    }

    printf("The nummer with the biggest count of steps: %d\n", number_with_max_steps);
    printf("Steps: %d\n", max_steps);

    printf("\nWhole sequence for n = %d:\n", number_with_max_steps);
    calculate_steps(number_with_max_steps);

    return;
}

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void task04_a() {
    int n;
    printf("Enter the n:");
    scanf_s("%d", &n);

    double P = 1.0;
    printf("P0 = %.6f\n", P);

    for (int k = 1; k <= n; k++) {
        double a_k = 1.0 + 1.0 / factorial(k);
        P = P * a_k;
        printf("P%d = %.6f \n", k, P);
    }

    printf("Final result: P%d = %.6f\n", n, P);
    return;
}

void task04_b() {
    int n;
    printf("Enter n: ");
    scanf_s("%d", &n);

    double P = 1.0;
    printf("P0 = %.6f\n", P);

    for (int k = 1; k <= n; k++) {
        double sign = (k % 2 == 1) ? 1.0 : -1.0;
        double numerator = sign * k * k;
        double denominator = 2.0 * k;
        double a_k = 1.0 + numerator / denominator;

        P = P * a_k;
        printf("P%d = %.6f (a%d = %.6f)\n", k, P, k, a_k);
    }

    printf("Final result: P%d = %.6f\n", n, P);

    return;
}

void task05() {
    int x1 = -99, x2 = -99, x3 = -99;
    int x_current;
    int n = 4;

    for (int i = 1; i <= 3; i++) {
        printf("x%d = %d\n", i, x1);
    }

    while (1) {
        x_current = x3 + x1 + 100;

        printf("x%d = %d\n", n, x_current);


        if (x_current > 0) {
            printf("\nLeast positive term: x%d = %d\n", n, x_current);
            break;
        }


        x1 = x2;
        x2 = x3;
        x3 = x_current;
        n++;
    }

    return;
}


void task06_a() {
    int n, b;
    printf("Enter n:");
    scanf_s("%d", &n);
    printf("Enter b:");
    scanf_s("%d", &b);

    double result = b;

    for (int i = 1; i < n; i++) {
        result = b + 1.0 / result;
        printf("n=%d: %.8f\n", i, result);
    }
    printf("Final result: %lf", result);

    return;
}



void task06_b() {
    int n;

    printf("Enter n: ");
    scanf_s("%d", &n);

    double result = 4 * n + 2;

    for (int i = n - 1; i >= 0; i--) {
        result = 4 * i + 2 + 1.0 / result;
    }
    result = 2 + 1.0 / result;

    printf("L%d = %.10f\n", n, result);

    return;
}

void task06_c() {
    int n;

    printf("Enter n: ");
    scanf_s("%d", &n);
    double result = 2.0;

    for (int i = 2 * n - 1; i >= 1; i--) {
        if (i % 2 == 1) {
            result = 1.0 + 1.0 / result;
        } else {
            result = 2.0 + 1.0 / result;
        }
    }

    printf("x2(%d) = %.10f\n", n, result);

    return;
}

double task07_a(int k) {
    if (k == 1) {
        return 0.0;
    }
    if (k == 2) {
        return 1.0;
    }

    return task07_a(k-1)/k + task07_a(k-2)*task07_b(k-1);
}

double task07_b(int k) {
    if (k == 1) {
        return 1.0;
    }
    if (k == 2) {
        return 0.0;
    }

    return task07_b(k-1) + task07_a(k-1);
}

void task07() {
    int n;
    double S = 0.0;

    printf("Enter n:");
    scanf_s("%d", &n);

    printf("num        Sn               Ak               Bk\n");
    for (int k = 1; k <= n; k++) {
        double a_k = task07_a(k);
        double b_k = task07_b(k);
        double denominator = a_k + b_k;
        double term;

        if (denominator != 0) {
            term = pow(2, k) / denominator;
        }

        S += term;

        printf("%d\t%.6f\t%.6f\t%.6f\n", k, a_k, b_k, term);
    }

    printf("------------------------------------------------\n");
    printf("S_%d = %.10f\n", n, S);

    return;
}

void task08_a() {
    double x;
    double epsilon;
    printf("Enter x:");
    scanf_s("%lf", &x);
    printf("Enter epsilon:");
    scanf_s("%lf", &epsilon);


    double sum = 1.0;
    double term = 1.0;
    int n = 1;

    while (fabs(term) > epsilon) {
        term = term * x / n;
        sum += term;
        n++;

        if (n > 1000) break;
    }

    printf("For e^%.2f: sum = %.10f, iterations = %d\n", x, sum, n);

    return;
}

void task08_b() {
    double x;
    double epsilon;
    printf("Enter x:");
    scanf_s("%lf", &x);
    printf("Enter epsilon:");
    scanf_s("%lf", &epsilon);

    double sum = x;
    double term = x;
    int n = 1;

    while (fabs(term) > epsilon) {
        term = term * (-x * x) / (2 * n + 1) * (2 * n - 1) / (2 * n);
        sum += term;
        n++;

        if (n > 1000) break;
    }

    printf("For F(%.2f): sum = %.10f, iterations = %d\n", x, sum, n);

    return;
}

double task11_a(int k) {
    if (k == 1) {
        return 1.0;
    }
    if (k == 2) {
        return 1.0;
    }

    return task11_a(k-1) + task11_a(k-1)/pow(2, k);
}

void task11_c() {
    int n;
    double S = 0.0;

    printf("Enter n:");
    scanf_s("%d", &n);
    printf("num        Sn\n");
    for (int k = 1; k <= n; k++) {
        double ak = task11_a(k);
        double term =  factorial(k)/ ak;
        S += term;
        printf("%d\t%.6f\n", k, term);
    }

    return;
}

void task16_k() {
    double x, epsilon;

    printf("Enter x:");
    scanf_s("%lf", &x);

    printf("Enter epsilon:");
    scanf_s("%lf", &epsilon);

    double sum = 1.0;
    double term = 1.0;
    int n = 1;


    printf("0\t%.6f\t%.6f\n", 1.0, 1.0);

    while (true) {
        term = term * x * (3 - 2*n) / (2*n);

        if (fabs(term) < epsilon) {
            break;
        }

        sum += term;

        printf("%d\t%.6f\t%.6f\n", n, term, sum);
        n++;

        if (n > 100) break;
    }

    double exact = sqrt(1 + x);
    printf("Approximate value: %.8f\n", sum);
    printf("Exact value:       %.8f\n", exact);
    printf("Difference:        %.8f\n", fabs(sum - exact));
    printf("Iterations:        %d\n", n);

    return;
}