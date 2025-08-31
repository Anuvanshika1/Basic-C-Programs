// DAY 8 
// Write a program to input a character and check whether it is an uppercase alphabet lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char C;
    printf("Enter your value: ");
    scanf("%c",&C);
    if(C>='0' && C<='9') 
    {
        printf("Digit");
    }
    else if (C>='A' && C<='Z')
    {
        printf("Uppercase Alphabet");
    }
    else if (C>='a' && C<='z')
    {
        printf("Lowercase Alphabet");
    }
    else 
    { 
        printf ("Special Character");
        
    }
    
    return 0;
}


// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main(){ int a,b,c;
    printf("Enter your three values: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if((a>b) && (a>c))
    {
        printf("%d is greater",a);
    }
    else if ((b>a) && (b>c))
    {
        printf("%d is greater",b);
    }
    else {
        printf("%d is greater",c);
    }
    return 0;
}