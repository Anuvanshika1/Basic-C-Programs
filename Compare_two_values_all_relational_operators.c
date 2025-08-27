// write a program to change the use of relational operator by comparing two values(user inputs)

#include<stdio.h>
int main(){
    int x,y,r1,r2,r3,r4,r5,r6;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    r1 = x>=y;
    r2 = x<=y;
    r3 = x>y;
    r4 = x<y;
    r5 = x==y;
    r6 = x!=y;
    printf("value of x>=y:%d \n" 
    "values of x<=y: %d \n"
    "values of x>y: %d \n"
    "values of x<y: %d \n"
    "values of x==y: %d \n"
    "values of x!=y: %d \n",r1,r2,r3,r4,r5,r6);
    return 0;
}