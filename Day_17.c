//DAY17
// check if a number is armstrong number or not

#include <stdio.h>
#include <math.h>
int main() {
    int n,y=0,x,m,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    m=n;  // assigning the value of n to m for doing the counting
  while(m>0){
      m=m/10; // it will count the number of digits by each time it will be divided with 10 untill all the digits get divide
      count++; //it will increase the count as soon as the number will be divided by 10
  }
  m=n; // assigning the value again because we need the old value of n 
    while(m>0){
        x=m%10;
        y=y+pow(x,count);  // using it because we want to add + we need the power of that digit we got from modulous that is the last digit that will become
        m=m/10;  // new value of n
        
    }
    if(n==y)
    {
        printf("number is armstrong number");
    }
    else
    {
        printf("number not armstrong");
        
    }
    
    return 0;
}

// Check if the number is prime or not
#include <stdio.h>
int main(){
    int i,n,c=0; 
    printf("Enter a number: ");
    scanf("%d",&n);

  for (i=2;i<n;i++)
    {
        if(n%i==0) //number will be divisible by i means its not a prime number
        {
        c++; // we introduced this c, because whenever the number n will be divisible to i than the value of c will increase by 1.
        break; // the loop break here and will go outside of the for loop
        }
    }
    if(c==0){
        printf("Number is prime");
    }
    else {
        printf("NUmber is not prime");
    }
    
   
    return 0;
}

