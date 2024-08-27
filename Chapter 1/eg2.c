#include <stdio.h>
#include <math.h>

int main() {
    int x, y, alpha, beta, omega, theta, t;
    printf("Enter x, y, alpha, beta, omega, theta, and t respectively: ");
    scanf("%d %d %d %d %d %d %d", &x, &y, &alpha, &beta, &omega, &theta, &t);

    // Ensure that there is no division by zero.
    if (x == 0 && y == 0) {
        printf("Invalid input: x and y cannot both be zero.\n");
        return 1;
    }

    int result1 = (int)(sin(y / (sqrt(pow(x, 2) + pow(y, 2)))));
    printf("%d \n", result1);

    // Ensure theta is not zero to avoid division by zero.
    if (theta == 0) {
        printf("Invalid input: theta cannot be zero.\n");
        return 1;
    }

    int z = (alpha + beta) / sin(theta) + (int)fabs(x);
    printf("%d \n", z);

    double result2 = sin(omega * t) * cos((omega * 3.14) / t);
    printf("%f \n", result2);

    return 0;
}
