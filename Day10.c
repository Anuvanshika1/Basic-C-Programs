// DAY 10
// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include <stdio.h>

int main() { int a,b,c;
printf("Enter the value for side 1: ");
scanf("%d",&a);
printf("Enter the value for side 2: ");
scanf("%d",&b);
printf("Enter the value for side 3: ");
scanf("%d",&c);

if ((a==c) &&(b==c) && (a==b))
    {
        printf("Triangle is Equilateral");
        
    }
else if ((a==c)||(b==c)||(a==b))
{
    printf("Triangle is Isoceles");
    
}
else {
    printf("Triangle is scalene");
    
}
return 0;


}

// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main(){
    int n;
    printf("Enter your value: ");
    scanf("%d",&n);
    switch (n){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default: 
        printf("Choose Between 1-7");
    }
    return 0; 
    
}
    
    