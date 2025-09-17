#include <stdio.h>
#include <math.h>

int main() {

    const float pi_f = 3.14159265358979323846f;
    const double pi_d = 3.14159265358979323846;
    const long double pi_ld = 3.141592653589793238462643383279502884L;

    const float e_f = 2.71828182845904523536f;
    const double e_d = 2.71828182845904523536;
    const long double e_ld = 2.718281828459045235360287471352662498L;

    printf("10^-4: %.2f %.2f %.2Lf\n", 1e-4f, 1e-4, 1e-4L);
    printf("24.33E5: %.2f %.2f %.2Lf\n", 24.33e5f, 24.33e5, 24.33e5L);
    printf("pi: %.2f %.2f %.2Lf\n", pi_f, pi_d, pi_ld);
    printf("e: %.2f %.2f %.2Lf\n", e_f, e_d, e_ld);
    printf("sqrt(5): %.2f %.2f %.2Lf\n", sqrtf(5.0f), sqrt(5.0), sqrtl(5.0L));
    printf("ln(100): %.2f %.2f %.2Lf\n", logf(100.0f), log(100.0), logl(100.0L));

    return 0;
}