//write a non -recursive function FIBO(num) that accepts an integer argument. write a c program that invokes this function to generate the fibonacci sequence up to num
#include <stdio.h>

void FIBO(int num) {
    int x = 0, y = 1, next, i;


    for (i = 1; i <= num; i++) {
        printf("%d ", x);
        next = x + y; 
        x = y;       
        y = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);
    FIBO(n);   // function call

    return 0;
}

