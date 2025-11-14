/*1. Declare a pointer and print the value and address
Write a C program to:
Declare an integer variable
Declare an integer pointer
Store the address of the variable in the pointer
Print the value and address using both variable and pointer.*/

/*
#include<stdio.h>
int main(){
    int *p,i;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    p=&i;
    // using pointer
    printf("Value of i is %d\n",*p);
    printf("address of i is %p\n",p);
    // using variable
    printf("value of i is %d\n",i);
    printf("address is %p",&i);
    return 0;
}
*/

//Write a function that swaps two integers using pointers:
/*
#include<stdio.h>
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a,b;
    printf("Enter the value for a and b: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("Value after swap for a and b are %d and %d",a,b);
    return 0;
}
*/

// Ask the user to input two numbers and use pointers to calculate their sum.
/*#include<stdio.h>
int main(){
    int a,b,*p,*r;
    printf("Enter the value for a and b: ");
    scanf("%d %d",&a,&b);
    p=&a; // address of a stored at p and p points to value of a
    r=&b;
    int sum=*p+*r; // sum of the values stored at the pointers p and r
    printf("The sum of a and b is: %d",sum);
    return 0;
    
}
*/

// Write a program that takes two integers and prints the larger number using pointer comparison.
/*
#include<stdio.h>
void large(int *p,int*r){
    if(*p>*r){
        printf("%d is greater than %d",*p,*r);
    }
    else {
        printf("%d is greater than %d",*r,*p);
    }
}
int main(){
    int a,b;
    printf("Enter the value of a and b for comparison: ");
    scanf("%d %d",&a,&b);
    large(&a,&b);
    return 0;
}
*/

/*
Create:
an int variable
an int pointer pointing to that variable
a double pointer pointing to the pointer
Print the values at each level.
*/

#include<stdio.h>
int main(){
    int a,*p,**r;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    p=&a;
    r=&p;
    printf("Value and address of a is: %d,%u\n",a,&a);
    printf("Value and address of p is: %d,%u\n",p,&p);
    printf("value and Address of r is %d,%u\n",r,&r);
    
    return 0;
}


/* Write a program that:
Declares an integer a = 10
A pointer pointing to a
Use the pointer to change the value of a to 50
*/
/* 
#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    *p=50;
    printf("new value stored at pointer p is:%d",*p);
    return 0;
}
*/

/* 
Write a program that:
Declares a pointer initialized to NULL
Check whether the pointer is NULL
Print a message accordingly 
*/
/*
#include<stdio.h>
int main(){
    int *p=NULL;
    if(p==NULL){
        printf("The pointer is null");
    }
    else{
        printf("Pointer is not null");
    }
    return 0;
    
}
*/
// Use a pointer to increment the value of a variable by 1.
/*
#include<stdio.h>
int inc(int *p){
    *p=*p+1;
    return *p;
}
int main(){
  int a;
  printf("Enter the value of a:");
  scanf("%d",&a);
  inc(&a);
  printf("New value of a after increment is: %d",a);
  return 0;
}
*/
// Write a function that receives an integer pointer and doubles the value stored at that location.
/*
#include<stdio.h>
int inc(int *p){
    *p=*p * 2;
    return *p;
}
int main(){
  int a;
  printf("Enter the value of a:");
  scanf("%d",&a);
  inc(&a);
  printf("New value of a after increment is: %d",a);
  return 0;
}
*/

