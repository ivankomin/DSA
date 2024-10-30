#include <stdio.h>
#include <math.h>

int main() {
    double a, b, sum, dif, prod, quo;
    
    // Запитуємо користувача ввести перше число, яке не є нулем
    printf("Enter number 1 that isn't 0: ");
    if (scanf("%lf", &a) != 1 || a == 0) {
        // Перевіряємо, чи ввели число та чи не є воно нулем
        printf("Invalid input or number is 0.\n");
        return 0;
    }
    
    // Запитуємо користувача ввести друге число, яке не є нулем
    printf("Enter number 2 that isn't 0: ");
    if (scanf("%lf", &b) != 1 || b == 0) {
        // Перевіряємо, чи ввели число та чи не є воно нулем
        printf("Invalid input or number is 0.\n");
        return 0;
    }
    
    // Обчислюємо квадрати введених чисел
    a = pow(a, 2);
    b = pow(b, 2);

    // Обчислюємо суму, різницю, добуток і частку квадратів чисел
    sum = a + b;
    dif = a - b;
    prod = a * b;
    quo = a / b;
    
    // Виводимо результати на екран
    printf("Square of number 1 is %0.2lf\nSquare of number 2 is %0.2lf\n", a, b);
    printf("Sum of squares is %0.2lf\nDifference of squares is %0.2lf\nProduct of squares is %0.2lf\nQuotient of squares is %0.2lf", sum, dif, prod, quo);

    return 0;
}
