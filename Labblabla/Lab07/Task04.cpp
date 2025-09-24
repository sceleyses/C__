#include <stdio.h>

#define N 5
int max(int array[N]);
void task4();

int main() {
    task4();
    return 0;
}

void task4() {
    int array[N];
    for (int i = 0; i < N; i++) {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\n\nMax number is %d", max(array));
}

int max(int array[N]) {
    int maximum = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }
    return maximum;
}