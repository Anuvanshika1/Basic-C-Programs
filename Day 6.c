// Day 6 of 100 days of coding
// Q11 (Conditional Statements)
// Write a program to input an integer and check whether it is even or odd using if–else.
 #include<stdio.h>
 int main(){
     int a,b;
     printf("Enter value of a: ");
     scanf("%d",&a);
     b=a%2;
     if(b==0)
     {printf("Value is Even");
     }
     else {printf("Value is odd");
     return 0;
 }

// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

  #include<stdio.h>
 int main(){
     int a;
     printf("Enter value of a: ");
     scanf("%d",&a);
     
     if(a==0)
     { 
         printf("Value is Zero");
     }
     else if (a<0) 
     {
         printf("Value is negative");
         
     }
     
     else 
     {
         printf("Value is positive");
         
     }
     return 0;
 }  
