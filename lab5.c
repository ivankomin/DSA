#include <stdio.h>
#include <stdlib.h>

int main(){
    const int SizeOfStack = 15;
    typedef struct{
        double elements[SizeOfStack];
        int TopOfStack;
    }Stack;

    int N = 0, M = 0;
    Stack MyStack;
    MyStack.TopOfStack = 0;
    double arr[15] = {9.3, 1.0, 7.8, 8.4, 3.9, 6.8, 9.0, 1.8, 0.9, 1.4, 3.9, 8.1, 1.9, 5.3, 1.6};
    printf("Enter how many elements you want to insert: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        if (MyStack.TopOfStack < SizeOfStack){
            MyStack.elements[MyStack.TopOfStack] = arr[i];
            MyStack.TopOfStack++;
        }
    }
    
    double min = MyStack.elements[MyStack.TopOfStack - 1];
    int minIndex = MyStack.TopOfStack - 1;
    int originalTop = MyStack.TopOfStack;
    
    while (MyStack.TopOfStack > 0) {
        MyStack.TopOfStack--;
        if (MyStack.elements[MyStack.TopOfStack] < min) {
            min = MyStack.elements[MyStack.TopOfStack];
            minIndex = MyStack.TopOfStack;
        }
    }
    MyStack.TopOfStack = originalTop;  
    printf("Enter how many elements you want to delete: ");
    scanf("%d", &M);

    while (M > 0 && MyStack.TopOfStack - 1 > minIndex) {
        MyStack.TopOfStack--;
        M--;
    }
    return 0;
}