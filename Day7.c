// Day7
// program to check if the given year is leap year or not

#include <stdio.h>

int main()
{  int L,Y,M;
printf("Enter the value of year: ");
scanf("%d",&Y);
L=Y%4;
M=Y%100;
if((L==0) && (M!=0) || (Y%400)==0){
    printf("Year is leap year");
}
else {
    printf("Year is not a leap year");
}

return 0;
}

// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main(){
    char v;
    printf("Enter the Alphabet: ");
    scanf("%c",&v);
    if ((v=='a')|| (v=='e') || (v=='i') || (v=='o') ||(v=='u') ||
    (v=='A')|| (v=='E') || (v=='I') || (v=='O') ||(v=='U')) 
    {
        printf("Entered value is Vowel");
    }
    else 
    {
        printf("Value is Consonant");
        
    }
    
    return 0;
}
