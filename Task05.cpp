#include <stdio.h>

int main() {
    int x, y;
    printf("x, y:");
    scanf("%d %d", &x, &y);
    int min_number, max_number;
    min_number = x < y ? x : y; //if x<y return x else y
    max_number = x > y ? x : y;
    printf("min number: %d\n", min_number);
    printf("max number: %d\n", max_number);

    return 0;
}