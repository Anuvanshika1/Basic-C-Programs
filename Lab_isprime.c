// develop a c function isprime(num) that accepts an integer and returns 1 if "num" is prime else 0. WAP that invoke the function ISPRIME to generate prime numbers for a given range.
#include<stdio.h>
int isprime(int num);
int main(){
    int l,h,i,r;
    printf("Input the lower(l) and higher(h) limit: ");
    scanf("%d %d",&l,&h);
    for(i=l;i<=h;i++)
    {
         if(isprime(i) == 1) 
         {
            printf("%d ", i);
        }  // calling the isprime definition by passing the argument i to it
    }
   return 0;
   
}
int isprime(int num)
{
    int y,c=0;
    if(num<=1)
    {
        return 0;
    }
    for(y=2;y<num;y++)
    {
        if(num%y==0)
        {
            c=c+1; // not prime
         }
    }
    if(c==0)
        return 1;
    if(c==1)
         return 0;
}