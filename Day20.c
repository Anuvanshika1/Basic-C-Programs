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

#include <stdio.h>
int main() {
int num,com=0;
    int p=1,r,t,digits;

    printf("Enter a binary number: ");
    scanf("%d",&num);
    t=num; 
    // counting the total number of digits, so that the output wouldn't remove the last 0
     while (t>0) {
        digits++;
        t=t/10;
    }
 
    while (num > 0) {
        r = num%10;   // getting the remainder
        if (r == 0)  // if the remainder is equal to 0 we will change that to 1
        {
            com= com+1*p; // the place value starts from 1 to if 0 than it will turn to 1 and the complement changes from 0 to 1
            }
        else
        {
            com=com+0*p;  // if remainder is equal to 1 than it will be turned to 0 
            } 

        num=num/10;    // the value of new num
        p=p*10;     // we need increase place value after every condition 
    }

    printf("1's Complement is: %0*d\n",digits,com);// preserving the preceding zeros instead of putting space in front

    return 0;
}

