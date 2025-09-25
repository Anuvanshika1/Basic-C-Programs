// Day 23
// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main(){
    int num,i;
    float y,sum=0;
    printf("Enter a number until which you need to count: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        y=(2.0*i)/(4.0*i-1);  // 2i will give 2,4,6,8 and 4i-1 will give 3,7,11 as there difference is of 4 numbers so this will work
        sum=sum+y;
    }
    printf("The sum of the series is: %0.2f",sum);
    return 0;
}

// Write a program to print the following pattern:
*****
*****
*****
*****
*****

#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("*",j);
        }
        printf("\n");
    }

    return 0;
}