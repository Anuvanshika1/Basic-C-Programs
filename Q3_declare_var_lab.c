// Declare variables within different code blocks(enclosed by curly braces) and test their accesibility within and outside those blocks.
#include <stdio.h>
int main ()
{
    int x=10; //global to main()
    printf("x in main: %d\n",x); // accessible here
    {
        int y =20;
        printf("Inside block 1:\n");
        printf("x=%d\n",x); //accessible(from outer blocl)
        printf("y=%d\n",y);// accessible(declared here)
    }
    // printf("y=%d\n",y); // error:y is not declared in this scope
    {
        int z =30;
        printf("inside block 2:\n");
        printf("x=%d\n",x); // accessible
        printf("z=%d\n",z); // accessible
    }
    // printf("z=%d\n",z); // Error: z is not declared in this scope
    {
        int x =100; //local to this block, shadows outer x
        printf("Inside block 3(x is re-declared):\n");
        printf("x=%d\n",x); // prints 100
    }
    printf("Back in main:\n");
    printf("x=%d\n",x); // still prints 10 -outer x was not changed
    return 0;
}


