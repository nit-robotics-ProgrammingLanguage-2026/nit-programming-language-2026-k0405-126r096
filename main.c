#include <stdio.h>

int main(void) {
    double x;
    double a;

    scanf("%lf", &x);
    a = x * 360.0 / (2.0 * 3.141592 * 2.0);
    printf("%f\n", a);

    return 0;
}