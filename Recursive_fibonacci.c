// Develop a recursive function FIBO (num) that accepts an integer argument. 
// Write a C program that invokes this function to generate the Fibonacci sequence up to num. 
#include<stdio.h>
int fibo(int num) {
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return fibo(num - 1) + fibo(num - 2);
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibo(i));  // calling fibo() for each term using loop
    }

    return 0;
}

