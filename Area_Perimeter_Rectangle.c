// DAY 2 OF C PROGRAMMING CODING 
// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>


	int main()
	{ 
	    int L,W,A,P;
	    printf("Give the value of L: ");
	    scanf("%d",&L);
	    printf("Give the value of W: ");
	    scanf("%d",&W);
	    A=L*W;   
	    P=2*(L+W);  
	    printf("Area of rectangle is: %d \n",A);
	      
	    printf("Perimeter of rectangle is :%d \n",P);

return 0;
}

