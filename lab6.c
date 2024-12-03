#include <stdio.h>

int main(){
    const unsigned N = 10;
    int n = 0;
    char arr1[N], arr2[N], arr3[N];
    for (int i = 0; i < N; i++){
        arr1[i] = 62 + 3*i;
        arr2[i] = 74 - i;
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (arr1[i] == arr2[j]){
                arr3[n] = arr1[i];
                n++;
            }
        }
    }
    //Linear Search
    char minLin = arr3[0];
    for (int i = 1; i < n; i++){
        if (arr3[i] < minLin){
            minLin = arr3[i];
        }
    }
    char maxLin = arr3[0];
    for (int i = 1; i < n; i++){
        if (arr3[i] > maxLin){
            maxLin = arr3[i];
        }
    }
    
    printf("Min (linear): %c\n", minLin);
    printf("Max (linear): %c\n", maxLin);
    printf("Sum (linear): %d\n", maxLin + minLin);

    //Binary Search
    int l = 0;
    int r = n - 1;
    int mid = 0;

    while (l < r) {
        mid = (l + r) / 2;
        if (arr3[mid] > arr3[r]) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    char minBin = arr3[l];

    l = 0;
    r = n - 1;

    while (l < r) {
        mid = (l + r) / 2;
        if (arr3[mid] < arr3[r]) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    char maxBin = arr3[l];
    
    printf("Min (binary): %c\n", minBin);
    printf("Max (binary): %c\n", maxBin);
    printf("Sum (binary): %d\n", maxBin + minBin);
    return 0;
}