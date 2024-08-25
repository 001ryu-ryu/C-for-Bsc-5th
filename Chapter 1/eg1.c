// Convert the following mathematical equations into C expressions;

#include <stdio.h>

int main() {
int a, b, c, m, n; float sigmax, sigmay;

printf("Enter a: ");
scanf("%d", &a);

printf("Enter b: ");
scanf("%d", &b);

printf("Enter c: ");
scanf("%d", &c);

printf("Enter m: ");
scanf("%d", &m);

printf("Enter n: ");
scanf("%d", &n);

printf("Enter sigmax: ");
scanf("%f", &sigmax);

printf("Enter sigmay: ");
scanf("%f", &sigmay);

//1
// b*b = 4*a*c;

//2
float ans = (a + b) / 2;
printf("%f \n", ans);
//3
float result = (sigmax + sigmay)/(m + n);
printf("%f \n", result);
return 0;
}
