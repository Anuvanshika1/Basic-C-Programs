// Day 16 
// Write a program to take a number as input and print its equivalent binary 
 // representation.

#include <stdio.h>

int main() {
   int binary=0,n,p=1,x;  // initialzing p=1, as we need to start with the Ones place
   printf("Enter a number: ");
   scanf("%d",&n);
   while(n>0){
       x=n%2; //it will store the binary number we need
      
       binary=binary+x*p; // it will add the x values to the correct place from ones to                    thousands
      
       p=p*10; // for getting the current decimal place 
       
       n=n/2; // new number for divident
       
   }
   printf("binary number is: %d",binary);

    return 0;
}

// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main()
{
    int p=0,n,x,y,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
    x=n%10; // will give the one digit out of the whole n number
    p=p*10+x;  // this will give me the next forward numbers
    n=n/10;  // this will give the new n value to be used in x
    }
    if(temp==p)
    {
         printf("it is palindrome number");
    }
    else{
        printf("it is not palindrome number");
        }
    return 0;
}