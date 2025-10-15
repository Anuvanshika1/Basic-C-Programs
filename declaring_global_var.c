// declare a global variable outside all functions and use it inside various functions to understand its accessbility

#include<stdio.h>
int i=2;  //declaring global variable 
// declaration of functions
void f1();
void f2();
void f3();
// function definition
void f1()
{
    printf("%d is the global variable inside f1\n",i);
}
void f2(){
    i=6;  // changing the value of global variable inside f2
     printf("%d is the global variable modified inside f2\n",i);
}
void f3(){
    i=20;
    printf("%d is the global variable modified inside f3\n",i);
}
// main function inside which we will call the other functions and see the final value of global variable. 
int main(){
    printf("value of i global variable in main function is:%d\n",i );
    f1();
    f2();
    f3();
    printf("Final global variable is %d\n",i);
    return 0;
}
