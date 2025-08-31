// DAY 9
// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,D,X1,X2;
    printf("Enter the value of coffiecients of quadratic equation: ");
    scanf("%f, %f, %f",&a,&b,&c);
    D=b*b-4*a*c;
  
    if (D>0)
    {
         X1=(-b+sqrt(D))/(2*a);
         X2=(-b-sqrt(D))/(2*a);
        printf("Roots are real and different: %f,%f",X1,X2);
    }
    else if(D==0)
    {
        X1=X2=-b / (2*a);
        printf("Roots are real and equal: %f,%f",X1,X2);
    }
    else
    {
        printf("Roots are complex");
    }
    return 0;
}
// Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main(){
    int p;
    printf("Enter the percentage: ");
    scanf("%d",&p);
    if(p>=90){
        printf("Garde A");
    }
    else if((p>=80) && (p<=89))
    {
        printf("Grade B");
    }
    else if((p>=70) && (p<=79))
    {
        printf("Grade C");
    }
    else if((p>=60) && (p<=69))
    {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }
    return 0;
}


