#include <stdio.h>
#include <math.h>

int main(){
    double x = 0, y = 0;
    
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    if(x >= -1 && x <= 1 && pow(x,2) - pow(y,2) <= 4){
        printf("Point (%lf, %lf) is in the area (semicircle)\n", x, y);
    }
    else if ((x >=1 && x <=3) && (y >= (x-3) && y <= (3-x))){
        printf("Point (%lf, %lf) is in the area (triangle)\n", x, y);
    }   
    else{
        printf("Point (%lf, %lf) is not in the area\n", x, y);
    }

    return 0;
}