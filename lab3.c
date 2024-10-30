#include <stdio.h>
#include <math.h>

int main(){
    double x = 0, epsilon = 0,term=0, sum = 0, fraction = 1;
    int n = 1;
    int sign = -1;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter epsilon: ");
    scanf("%lf", &epsilon);

    term = x;
    sum = term;

    while(fabs(term) >= epsilon){
        fraction *= (2.0 * n - 1.0)/(2.0 * n);
        term = (pow(x, 2.0 * n + 1.0) / (2.0 * n + 1.0)) * sign * fraction;
        sum += term;
        printf("n: %d, term: %lf, sum: %lf, fraction: %lf\n", n,term, sum, fraction);
        sign *= -1;
        n++;
    }

    printf("The result is: %lf", sum);
    return 0;
}