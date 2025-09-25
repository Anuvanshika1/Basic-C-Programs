// Day 25
// Write a program to print the following pattern:
5
45
345
2345
12345

#include <stdio.h>

int main() {
    int i,j,z;
    for(i=1;i<=5;i++)
    {  
        z=6-i; // to get the reverse numbers one by one
        for(j=z;j<=5;j++) 
        {
           
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

//Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

#include<stdio.h>
int main(){
    int i,j,k;
 
    for(i=1;i<=5;i++)
    {
        for(k=1;k<i;k++)  // this loop will add spaces before starting of the stars
        {
            printf(" ",k); // one space less than i for every iteration until it becomes greater than i
        }
      
        for(j=i;j<=5;j++)
        { 
            printf("*",j);
            
        }
    printf("\n");
  
    }
    return 0;
    
}