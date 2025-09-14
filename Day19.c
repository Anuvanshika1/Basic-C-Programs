//Day19
// Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int x,y,z,lcm,n,a,b;
    printf("Enter two values:  ");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    if(y>x){
        z=x;
        x=y;
        y=z;
    }
    while(x%y!=0){
        n=x%y;  //this remainder we will divide with y
        x=y;
        y=n;
    }
    printf("HCF is %d\n",n);
      lcm=(a*b)/n;
    printf("lcm=%d \n",lcm);
    
    return 0;
}

// Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
   int a,b=0,c,n;
   printf("Enter the number: ");
   scanf("%d",&n);
   while(n>0){
       a=n%10;  //remainder store here
       b=b+a;  // it will add the sum
       n=n/10;  // quotient will store here
       
   }
   printf("Sum of the digits is: %d",b);
   return 0;
}


