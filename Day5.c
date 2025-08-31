// Day 5 of hundred days of code
// write a program to get the Simple interest Principal rate of interest 

#include <stdio.h>
int main(){
    float P,R,T,SI;
    printf("Enter the principle value= \n");
    scanf("%f",&P);
    printf("Enter the rate value= \n");
    scanf("%f",&R);
    printf("Enter the Time value= \n");
    scanf("%f",&T);
    
    SI=P*R*T/100;
    printf("Simple interest value is %f",SI);
    return 0;
    
}
// Compound Interest
#include <stdio.h>
#include <math.h>
int main() { 
    float P,r,t,A,C;
    printf("Enter the value of Principal value(P),rate(r) and time(t): ");
    scanf("%f %f %f",&P,&r,&t);

    A= P* pow((1 + r/100),t);
    C=A-P;
    printf("Compounded interest is: %.2f",C);
    return 0;
}

// Write a program to convert user input seconds to Hours,minutes and second format
#include <stdio.h>
int main(){
    int S,m,h,s,r;
    printf("Enter the value of Seconds: ");
    scanf("%d",&S);
    h=S/3600;
    r=S%3600;
    m=r/60;
    s=r%60;
    printf("h:m:s is %d:%d:%d",h,m,s);
    
    return 0;
}
