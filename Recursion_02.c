//Write a recursive function to find the sum of digits of a number
/*
#include<stdio.h>
int sum(int n)
{  

    if(n==0)
    {
    return 0;
    }
  
   return (n%10)+sum(n/10);
   
}
int main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=sum(a);
    printf("The sum of the digits of the number is:%d",b);
    return 0;
}
*/

/*sum(1234) → 4 + sum(123)

sum(123) → 3 + sum(12)

sum(12) → 2 + sum(1)

sum(1) → 1 + sum(0)

sum(0) → 0 (base case)*/

//Write a recursive function to find the reverse of a number.
/*
#include<stdio.h>
int rev(int n,int r)
{
    if(n==0)
    { // when the number will become 0 the function will return the value of r
        return r;
    }
    r= r*10+(n%10);
    return rev(n/10,r);  // extra parameter has been added here to store the value of the reverse digit, we can not store it directly using another local variable as with every recursive call that r=0 initialised will become 0, the reversed digit wouldn't be stores and the answer we will not get to we will store this value of r using another parameter.
}
int main(){
    int a,b;
   printf("Enter the number: ");
    scanf("%d",&a);
    b=rev(a,0);
    printf("The reverse of the digits of the number is:%d",b);
    return 0; 
}
*/
//Write a recursive function to count the number of digits in a number.
/*
#include<stdio.h>
int count(int n,int c)
{   int d;
    if(n==0)
    return c;
    d=n%10; //this will decrease the number to the base case
    return count(n/10,c+1); // here we will call the recursive function getting the new values of n and increasing the count of c by 1 after decreasing getting the modulus each time.
    
}
int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=count(a,0); // initializing the count to 0 and passing it to the function definition part
    printf("The total number of the digits is:%d",b);
    return 0;
}
*/

//Write a recursive function to find the GCD (HCF) of two numbers.
/*
#include<stdio.h>
int gcd(int x,int y)
    {
        if(y==0){  // when the 2nd value will reach 0 that is the x%y that will eventually become the new value of y than that value of x will be the gcd.
            return x;
        }
      
        return gcd(y,x%y); // in the recursive case the value of x in the paramater list will become y and the new value of y will become the modulus of x and y, so we passed that here.
        
    }
int main(){
    int a,b,c;
    printf("Enter the value of two numbers a and b: ");
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    printf("The value of gcd is %d",c);
    return 0;
}
*/

//Write a recursive function to convert a decimal number to binary.
/*
#include<stdio.h>
int bin(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%2)+10 * bin(n/2); // this will get us the conversion done 
    
}
int main(){
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=bin(a);
    printf("The binary conversion is:%d",b);
    return 0;
}
binary(5)
= (5 % 2) + 10 * binary(2) //(n/2)
= 1 + 10 * ((2 % 2) + 10 * binary(1))
= 1 + 10 * (0 + 10 * ((1 % 2) + 10 * binary(0)))
= 1 + 10 * (0 + 10 * (1 + 10 * 0))
= 1 + 10 * (0 + 10 * 1)
= 1 + 10 * 10
= 101
binary = 101
*/
//Write a recursive function to find the maximum element in an array.
#include<stdio.h>
int max(int a[],int n){
    int m;
    if(n==1){
        return a[0];
    }
    m=max(a,n-1);
    if(a[n-1]>m)
    {
        return a[n-1];
    }
    else {
        return m;
    }
}
int main(){
    int x[40],n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",x[i]);
    }
    j=max(x,n);
    printf("The max element of an array is %d",j);
    return 0;
}






