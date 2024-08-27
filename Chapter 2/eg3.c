// Write a C program to find the area of a triangle using 3 sides

#include <stdio.h>
#include <math.h>

double areaOfTriangle(float a, float b, float c);

int main() {
    float a, b, c;
    printf("Enter a, b and c respectively: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("%.2f\n", areaOfTriangle(a, b, c));

    return 0;
}

double areaOfTriangle(float a, float b, float c) {
    float s = (a + b + c) / 2.0;

    return sqrt(s * ( s - a) * (s -b) * (s -c));
}