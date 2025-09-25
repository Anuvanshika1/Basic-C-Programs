// Day 27
// Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
#include<stdio.h>
int main()
{ int i,j,z;
  for(i=1;i<=5;i++){
      z=2*i-1;
      for(j=1;j<=z;j++){
          printf("*");
      }
      printf("\n");
  }
  // for the lower portion
  for(i=4;i>=1;i--){
      z=2*i-1;
      for(j=1;j<=z;j++){
          printf("*");
      }
      printf("\n");
      
  }
   
    return 0;
    
}

// Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
   
   #include<stdio.h>
int main()
{ int i,j,z,k;
  for(i=1;i<=4;i++)
  {
      for(k=5;k>i;k--)
      {
          printf(" ");
      }
      z=2*i-1;
      for(j=1;j<=z;j++)
      {
          printf("*");
      }
      printf("\n");
  }
  // for the lower portion
  for(i=3;i>=1;i--)
  {
      for(k=1;k<=5-i;k++)  // for proper spacing we need 2 space in the first bottom pattern so considering that we took the values. as the i decreases the spacing will increasing as per the upper half spacing
      {
          printf(" ");
      }
      z=2*i-1;
      for(j=1;j<=z;j++)
      {
          printf("*");
      }
      printf("\n");
      
  }
   
    return 0;
    
}