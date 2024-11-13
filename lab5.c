#include <stdio.h>
#include <stdlib.h>

int main(){
    const int SizeOfStack = 15;
    
    typedef struct{
        double elements[SizeOfStack];
        int TopOfStack;
    }Stack;

    int N = 0, M = 0;
    printf("Enter how many elements you want to insert: ");
    scanf("%d", &N);
    Stack MyStack;
    MyStack.TopOfStack = 0;
    double arr[15] = {9.3, 1.0, 7.8, 8.4, 3.9, 6.8, 9.0, 1.8, 5.4, 1.4, 3.9, 8.1, 0.9, 5.3, 1.6};
    
    for (int i = 0; i < N; i++){
        if (MyStack.TopOfStack < SizeOfStack){
            MyStack.elements[MyStack.TopOfStack] = arr[i];
            MyStack.TopOfStack++;
        }
    }
    
    double min = MyStack.elements[0];
    int minIndex = 0;
    
    for (int i = 1; i < MyStack.TopOfStack; i++){
        if (MyStack.elements[i] < min) {
            min = MyStack.elements[i];
            minIndex = i;
        }
    }
    printf("Minimum element: %lf at index %d\n", min, minIndex);

    printf("Current size of the stack is %d.\n", MyStack.TopOfStack);
    for (int i = 0; i < MyStack.TopOfStack; i++){
        printf("%lf ", MyStack.elements[i]);
    }
    
    printf("\nEnter how many elements you want to delete: ");
    scanf("%d", &M);

    int deletions = M >= minIndex ? minIndex : M;
    
    for (int i = deletions; i < MyStack.TopOfStack; i++) {
        MyStack.elements[i - deletions] = MyStack.elements[i];
    }
    MyStack.TopOfStack -= deletions;

    printf("Current size of the stack is %d.\n", MyStack.TopOfStack);
    for (int i = 0; i < MyStack.TopOfStack; i++){
        printf("%lf ", MyStack.elements[i]);
    }
    return 0;
}

