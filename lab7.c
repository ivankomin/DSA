#include <stdio.h>
#define SIZE 6

void traverseMatrix(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE]);
void bubbleSort(int arr[], int size);
int main() {
    int matrix1[SIZE][SIZE] = {
    {12, -5, 19, -10, 7, -2},
    {-8, 14, -3, 0, 16, -11},
    {5, -20, 9, 8, -6, 13},
    {-12, 15, 4, -7, 1, 18},
    {20, -9, 3, 11, -4, 6},
    {-19, 2, -15, 10, -1, 17}
};
    int matrix2[SIZE][SIZE] = {0};
    int arr[SIZE] = {0};
    int k = 0;
    traverseMatrix(matrix1, matrix2);

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == j && matrix2[i][j] > 0) {
                arr[k] = matrix2[i][j];
                k++;
            }
        }
    }

    printf("\nInitial matrix (matrix1):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nResulting matrix (matrix2):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nArray: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }  
    bubbleSort(arr, k);
    printf("\nSorted array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void traverseMatrix(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE]) {
     int index = 0;
    // Upper half of the traversal (top to middle)
    for (int i = 0; i < SIZE / 2; i++) {
        if (i % 2 == 0) { // Even rows: right-to-left
            for (int j = SIZE - 1; j >= 0; j--) {
                matrix2[i][j] = matrix1[index / SIZE][index % SIZE];
                index++;
            }
        } else { // Odd rows: left-to-right
            for (int j = 0; j < SIZE; j++) {
                matrix2[i][j] = matrix1[index / SIZE][index % SIZE];
                index++;
            }
        }
    }

    // Lower half of the traversal (bottom to middle)
    for (int i = SIZE - 1; i >= SIZE / 2; i--) {
        if ((SIZE - 1 - i) % 2 == 0) { // Even reverse rows: bottom-to-top, left-to-right
            for (int j = 0; j < SIZE; j++) {
                matrix2[i][j] = matrix1[index / SIZE][index % SIZE];
                index++;
            }
        } else { // Odd reverse rows: bottom-to-top, right-to-left
            for (int j = SIZE - 1; j >= 0; j--) {
                matrix2[i][j] = matrix1[index / SIZE][index % SIZE];
                index++;
            }
        }
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}