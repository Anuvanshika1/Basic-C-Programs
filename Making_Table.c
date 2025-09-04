// wap to print the multiplication table of the number entered by the user. the output should be in the correct format. num*1=num1
#include <stdio.h>
int main(){
    int num1,n,out;
    printf("enter the value of n: ");
    scanf("%d",&n);
    num1=1;
    while(num1<=10){
        out=num1*n;
        printf("%d*%d=%d\n",n,num1,out);
        num1=num1+1;
    }
    
    return 0;
}



