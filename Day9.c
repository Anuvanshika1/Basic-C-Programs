// DAY 9
// Write a program to find the roots of a quadratic equation and categorize them.

// Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main(){
    int p;
    printf("Enter the percentage: ");
    scanf("%d",&p);
    if(p>=90){
        printf("Garde A");
    }
    else if((p>=80) && (p<=89))
    {
        printf("Grade B");
    }
    else if((p>=70) && (p<=79))
    {
        printf("Grade C");
    }
    else if((p>=60) && (p<=69))
    {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }
    return 0;
}


