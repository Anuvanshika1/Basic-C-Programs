// declare a local variable inside a function and try to access it outside the function. compare this with accessing the global variable within the function.
#include<stdio.h>
// declaring global variable for comparison
int i=7;
//function decalration
void lv1();
void lv1(){
    int i=7;
    printf("Value of i is %d\n",i);
}
int main(){
    printf("%d is the value of i in lv1 function \n",i); // here if i try to access the local variable it will show the error.
    // but when tried with global variable it will work.
   lv1();
    return 0;
}
