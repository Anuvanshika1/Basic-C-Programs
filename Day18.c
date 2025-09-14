//Day18
//Write a program to print all factors of a given number.
#include <stdio.h>
int main(){
    int n,i,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=n%i;
        if(c==0){
        printf(" %d ",i);
        }
    }
    
    return 0;
}

// Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main(){
    int x,y,n,z;
    printf("Enter two values:  ");
    scanf("%d %d",&x,&y);
    if(y>x){
        z=x;
        x=y;
        y=z;
    }
    while(x%y!=0){
        n=x%y;  //this remainder we will divide with y
        x=y;
        y=n;
    }
    printf("HCF is %d",n);
    return 0;
}