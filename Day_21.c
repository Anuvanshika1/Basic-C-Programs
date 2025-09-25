// WAP to swap the first and last digit of a number
#include <stdio.h>

int main() {
    int num, temp_num;
    int first_digit, last_digit;
    int power_of_ten = 1;
    int num_digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
// Handle single-digit numbers
    if (num >= 0 && num <= 9) {
        printf("Number with swapped digits: %d\n", num);
        return 0;
    }

    temp_num = num;

    // Find the last digit
    last_digit = temp_num % 10;

    // Count digits and find the power of 10 for the first digit
    while (temp_num >= 10) 
    {
        temp_num =temp_num/ 10;
        power_of_ten = power_of_ten* 10; // it will help us calculate the place of the digits.
        num_digits++;
    }
    
    first_digit = temp_num;

    // Remove the first digit
    int middle_part = num - (first_digit * power_of_ten);

    // Remove the last digit
    middle_part = middle_part / 10;

    // Reconstruct the number with swapped digits
    int swapped_num = last_digit * power_of_ten + middle_part * 10 + first_digit;

    printf("Number with swapped digits: %d\n", swapped_num);

   return 0;
}


//Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){
    int i,num,a=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            a=a+i;
        }
    }

    if(a==num){
        printf("Perfect Number");
    }
    else{
        printf("Not perfect number");
    }
    return 0;
}