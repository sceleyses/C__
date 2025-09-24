#include <stdio.h>

#define N 4

int main() {
}

void task2() {

    int array[N] = {5, 112, 4, 3};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = n-1; i != -1; i--) {
        printf("%d,", array[i]);//специфікатор

    }

}