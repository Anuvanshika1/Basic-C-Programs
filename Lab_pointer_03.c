/// Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.
// %p -> hexadecimal
#include <stdio.h>
void point(int *x,int *y){
    *x=25;
    *y=45;
}
int main(){
    int a,b;
    
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    point(&a,&b);
    printf("Values of a and b: %d %d",a,b);
    return 0;
    
}

    
    
    
    
