// Write a function to add two numbers and return the sum.
/*#include <stdio.h>
int sum(int x,int y);
int main(){
   int a,b,s;
   printf("Enter the two numbers: ");
   scanf("%d %d",&a,&b);
   s=sum(a,b);
   printf("Sum of two numbers is %d",s);
   return 0;
}
int sum(int x,int y){
    int sums;
    sums=x+y;
    return sums;
}*/
//Write a function to find the maximum of two numbers.
/*#include <stdio.h>
void max(int x,int y);
int main(){
    int a,b,maxi;
    printf("Enter the two values: ");
    scanf("%d %d",&a,&b);
    max(a,b);
    return 0;
}
void max(int x,int y){
    if(x>y)
    {
        printf("X is maximum");
    }
    else
    {
        printf("Y is maximum");
    }
}
*/

//Write a function that takes a number and checks if it’s even or odd.
/*#include<stdio.h>
void evenodd(int x){
    int s;
    if(x%2==0){
        printf("%d is even",x);
    }
    else{
        printf("%d is odd",x);
    }
}
int main(){
    int a;
    printf("Enter the value for a: ");
    scanf("%d",&a);
    evenodd(a);
    return 0;
}
*/
//Write a function to print a line of stars (*) for a given number (e.g., printStars(5) → *****).
/*#include<stdio.h>
void stars(int x){
    int i;
    for(i=0;i<=x;i++){
        printf("* ");
    }
}
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    stars(a);
    return 0;
}
*/

//Write a function to calculate the square of a number.
/*#include<stdio.h>
int sq(int x){
    int square;
    square=x*x;
   
    return square;
}
int main(){
    int a,squ;
    printf("enter the number: ");
    scanf("%d",&a);
    squ=sq(a);
     printf("square of number is: %d",squ);
    return 0;
}
*/

//Write a function that returns the factorial of a number.
/*#include <stdio.h>
int fact(int x){
    int facto=1,i;
    for(i=1;i<=x;i++){
        facto=facto*i;
    }
    return facto;
}
int main(){
    int a,factorial;
    printf("Enter the number: ");
    scanf("%d",&a);
    factorial=fact(a);
    printf("Fcatorial of %d is %d",a,factorial);
    return 0;
}
*/

// Write a function to generate Fibonacci series up to n terms.
#include<stdio.h>
void fibo(int n){
    int a=0,b=1,next,i;
   for(i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Fibonacci series: ");
    fibo(num);
    return 0;
}

//Write a recursive function to print numbers from 1 to n.
/*#include <stdio.h>

void num(int n) {
    if (n == 0)
        return;
    num(n - 1);
    printf("%d ", n);
}

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Numbers are: ");
    num(a);
    return 0;
}
*/

//Write a recursive function to print numbers from n to 1.
/*#include<stdio.h>
void num(int n)
{
    if(n==0)
    return;
    printf("%d ",n);
    num(n-1);
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Numbers are: ");
    num(a);
    return 0;
}
*/
//Write a recursive function to find the sum of first n natural numbers.
/*#include<stdio.h>
int sum(int x)
{
    int s;
    if(x==0)
    return 0;
   
    return x + sum(x - 1);
}
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("Sum is:%d ",sum(a));
    return 0;
}
*/
//Write a recursive function to find the factorial of a number.
/*#include<stdio.h>
int fact(int x){
    if(x==0)
    return 1;
   return x*fact(x-1);
}
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("Factorial is:%d",fact(a));
    return 0;
}
*/
//Write a recursive function to find the nth Fibonacci number.
/*#include<stdio.h>
int fibo(int x){
    int fib,fib1,fib2;
    if (x == 0)
    return 0;
    if (x == 1)
    return 1;
    fib1=fibo(x-1);
    fib2=fibo(x-2);
    fib=fib1+fib2;
    return fib;
}
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("nth fibonacci is:%d",fibo(a));
    return 0;
}
*/
// Using recursion 
#include<stdio.h>
int fibo(int x) {
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    return fibo(x - 1) + fibo(x - 2);
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibo(i));  // call fibo() for each term
    }

    return 0;
}



