// Write a program to convert F to C

#include <stdio.h>

double ftoC(float f);
int main() {
    float f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius: %.2f\n", ftoC(f));

    return 0;
}

double ftoC(float f) {
    float c = (5.0/9.0) * (f - 32);
    return c;
}
