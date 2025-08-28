// write a program to check given triangle is valid or not or validity is established than check triangle is equilateral, isosceles,scalene)
#include <stdio.h>

int main()
{ int a,b,c;
printf("Enter the value for side 1: ");
scanf("%d",&a);
printf("Enter the value for side 2: ");
scanf("%d",&b);
printf("Enter the value for side 3: ");
scanf("%d",&c);

if ((a+b>c) && (b+c>a) && (a+c>b))
{
    printf("Triangle is valid \n");
    if ((a==c) &&(b==c) && (a==b))
    {
        printf("Triangle is Equilateral");
        
    }
    else if ((a==c)||(b==c)||(a==b))
    {
    printf("Triangle is Isoceles");
    
    }
    else 
    {
    printf("Triangle is scalene");
    }
}
else {
    printf("Triangle not valid");
}


return 0;
}