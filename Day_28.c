// Day 28
// Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int num, i, j,flag;

    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) {      
        flag = 1;        
        
        for(j = 2; j*j <= i; j++) {  
            if(i % j == 0) {
                flag = 0;       
                break;
            }
        }
        if(flag==1) {
            printf("%d ",i);
        }
    }

    return 0;
}

// Read and print elements of a one-dimensional array.

#include<stdio.h>
int main(){
    int A[20],n,i;
    printf("Enter the number you want to add: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){  
        scanf("%d",&A[i]);  // getting the values at the memory spaces
    }
    printf("The numbers are: "); // printing the numbers from the array one by one
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}