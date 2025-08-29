// Day 3 of 100 days of code
// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
	     float c,F;
	     printf("Enter the value Celsius temperature: ");
	     scanf("%f",&c);
	     F=((9.0/5.0)*c)+32; // 9/5 is integer and the output is 1.8 to to get this result 
	                        // we will use decimal .0 else it will give 1 in integer form but we  need in full decimal form 
	     printf("Fahrenheit=%f",F);
	     return 0;
	     
}
// Day 3 of 100 days of code
// Write a program to swap two numbers using a third variable.
include <stdio.h> 
int main()
{ 
    int a,b,c;
printf("Enter value of a: "); 
scanf("%d",&a); 
printf("Enter value of b: "); 
scanf("%d",&b);
c=a;  // assigning the value of a to c 
a=b;  // assigning the value of b to a
b=c;  // assignig the value of c to b
printf("a=%d,b=%d",a,b); 
return 0; 
    
}
