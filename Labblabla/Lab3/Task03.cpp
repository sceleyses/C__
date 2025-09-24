#include <stdio.h>



int main() {
    int a, b, c;
    int res1;
    long long res2;

    int inp_corr = scanf("%d %d %d", &a, &b, &c);
    if (inp_corr != 3) {
        printf("Incorrect input");
    }
    else {
        res1 = (long long)a * b * c;
        printf("%lld\n", res1);

        res2 = (long long)a * b * c;
        printf("%lld\n", res2);
    }


}