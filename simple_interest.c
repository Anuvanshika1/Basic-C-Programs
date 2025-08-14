// write a progra to get the Principal rate of interest 

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

