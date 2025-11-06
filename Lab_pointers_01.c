// Declare different types of pointers(int;float;char) and initialize them with the addresses of the variables. Print the values of both the pointers and the variables they point to.
// %p -> hexadecimal
#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    int *p;
    float *f;
    char *ch;
    p=&a;
    f=&b;
    ch=&c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf(" %c",&c);
    
    printf("%d is the value of a and %p is the address\n",*p,p);
    printf("%f is the value of b and %p is the address\n",*f,f);
    printf("%c is the value of c and %p is the address\n",*ch,ch);
    return 0;
}

