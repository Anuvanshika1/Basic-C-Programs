// Day 22
// Write a program to check if a number is a strong number.

 #include <stdio.h>

int main() {
    int x,num,y,j,sum=0,fact;
    printf("Enter a number: ");
    scanf("%d",&num);
    x=num;
    while(x>0){
        y=x%10; 
        fact=1;// store the last digit
        for(j=1;j<=y;j++){
            fact=fact*j;
            
        }
        sum=fact+sum;
        x=x/10;  // new number
    }
    if(num==sum){
        printf("Number is strong\n");
    }
    else{
        printf("Number is not strong\n");
    }

    return 0;
}

// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int i,num,x;
    float y,sum=1;
    printf("Enter the count you need sum: \n");
    scanf("%d",&num);
    
    for(i=2;i<=num;i++)
    {
        y=(2.0*i-1)/(2.0*i);
      sum=sum+y;
    }
    printf("sum is: %0.2f",sum);
    return 0;
}