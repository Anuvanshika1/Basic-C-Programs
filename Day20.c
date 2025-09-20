// DAY20
//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int a,b,i,num,multi=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    a=num%10;
    if(a%2!=0)
    {
        multi=a*multi;
    }
    b=num/10;
    num=b;
}
printf("The product of the odd number is: %d",multi);
    return 0;
}

// Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main(){
    int a,b=0,num,p=1,count=0,t;
    printf("Enter the binary number: ");
    scanf("%d",&num);
    t=num; // assigning the original value to t temporarily
    // counting the digits the user entered
    while(t>0){
        t=t/10;
        count++;  // count will increase after every iteration of division untill the value of t is greater than 1
    }
    while(num>0){
        a=num%10; // remainder
        if(a==1){  // checking if the remainder is equal to 1, if yes than at the "ones" position we will multiply it with 0
            b=b+0*p; // and with every iteration the value of p will be increasing to 1s,10s,100s,1000s
        }
        else{
            b=b+1*p; // if reaminder is equal to 0 than we need to multiply the place with 1 and adding it to previous b value
        }
        num=num/10;  // new number value
        p=p*10;  // increasing the value of place where we need to put the values
    }
    printf("The 1s complement of the binary number is: %0*d",count,b); // we used %0*d so include 0 rather than using space in the last place if its 0
    return 0;
}
