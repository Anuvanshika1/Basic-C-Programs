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

// DAY 2 OF C CODING
// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
	int main()
	{ 
	    float r,A,P;
	    printf("Give the value of r: ");
	    scanf("%f",&r);
	    A=3.14*r*r;   
	    P=2*3.14*r;  // Perimeter formula for circle 3.14 represents Pie value
	    printf("Area of circle is: %f \n",A);
	      
	    printf("Perimeter of circle is :%f \n",P);

return 0;
}
