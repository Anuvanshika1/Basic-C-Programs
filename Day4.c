// Write a program to swap two numbers without using a third variable.
// Day 4 of 100 days of coding.
#include <stdio.h>

int main() {
	int a,b;
	printf("Enter the number for a: ");
	scanf("%d",&a);
	printf("Enter the number for b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value for a and b after swapping is : %d,%d", a,b);
	return 0;

}

// Write a program to find and display the sum of the first n natural numbers.


 #include <stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=(n*(n+1))/2;
    printf("Value of %d natural number: %d",n,i);
    return 0;
}
    
