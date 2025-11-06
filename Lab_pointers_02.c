// Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.
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
    
    printf("\n");
    
    // Values and addresses for increment and decrement for "a"
    
    printf("%d is the value of a and %p is the address before increment\n",*p,&p);
     printf("%d is the value of a and %p is the address after increment\n",*p,(p+1));
     printf("%d is the value of a and %p is the address after decrement\n",*p,(p-1));
     printf("\n");
     
    // Values and addresses for increment and decrement for "b"
    
    printf("%f is the value of b and %p is the address before increment\n",*f,&f);
    printf("%f is the value of b and %p is the address after increment\n",*f,(f+1));
    printf("%f is the value of b and %p is the address after decrement\n",*f,(f-1));
    printf("\n");
    
    // Values and addresses for increment and decrement for "c"
    
    printf("%c is the value of c and %p is the address before increment\n",*ch,&ch);
    printf("%c is the value of c and %p is the address after increment\n",*ch,(ch+1));
    printf("%c is the value of c and %p is the address after decrement\n",*ch,(ch-1));
    
    return 0;
}
    
    
    
    
    
