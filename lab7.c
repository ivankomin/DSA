#include <stdio.h>

#define SIZE 6

int main() {
    int matrix[SIZE][SIZE] = {0}; // Ініціалізація матриці
    int value = 1; // Значення для заповнення матриці

    // Верхня половина (рух змійкою зверху вниз)
    for (int i = 0; i < SIZE / 2; i++) {
        if (i % 2 == 0) { // Рядки з індексом 0, 2: справа наліво
            for (int j = SIZE - 1; j >= 0; j--) {
                matrix[i][j] = value++;
            }
        } else { // Рядки з індексом 1: зліва направо
            for (int j = 0; j < SIZE; j++) {
                matrix[i][j] = value++;
            }
        }
    }

    // Нижня половина (рух змійкою знизу вгору)
    value = SIZE * SIZE; // Початкове значення для нижньої частини
    for (int i = SIZE - 1; i >= SIZE / 2; i--) {
        if ((SIZE - 1 - i) % 2 == 0) { // Рядки з індексом 5, 3: зліва направо
            for (int j = 0; j < SIZE; j++) {
                matrix[i][j] = value--;
            }
        } else { // Рядок з індексом 4: справа наліво
            for (int j = SIZE - 1; j >= 0; j--) {
                matrix[i][j] = value--;
            }
        }
    }

    // Виведення матриці
    printf("Заповнена матриця:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
