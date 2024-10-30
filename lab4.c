#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isSquare(double x){
    if (x != 0 && sqrt(x) == floor(sqrt(x))){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    unsigned a = 0, b = 0, count = 0;

    printf("Enter a: ");
    scanf("%u", &a);
    printf("Enter b: ");
    scanf("%u", &b);

    for (int i = a; i <= b; i++){
        if (isSquare((double)i)){
            count++;
        }
    }
    printf("The number of squares between %d and %d is %d\n", a, b, count);

    return 0;
}