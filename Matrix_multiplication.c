// Wap to do matrix multiplication 

#include <stdio.h>

int main() {
   int m,n,p,q;
   int A[10][10],B[10][10],result[10][10];
   // input the dimensions of matrix A, like how many columns and rows you want ask the user
   printf("Enter the rows and columns of matrix A(m,n): ");
   scanf("%d %d",&m,&n);
   
  // input the dimensions of matrix B, like how many columns and rows you want ask the user
   printf("Enter the rows and columns of matrix B(p,q): ");
   scanf("%d %d",&p,&q);
   
  // Now we have to check if the multiplication is possible or not and that we can check by seeing if the column of matrix A (n) is equal to row of matrix B(p)
  if(n!=p){
      printf("Multiplication is not possible. Column of matrix A should be equal to row of matrix B.\n");
      return 1;  // exit the program
  }
  
  // now if the multiplication is possible , we will take the input of the values for matrix A row by row like firstly for the 1st row and than for the 2nd row
  printf("Enter elements of matrix A (%d x %d) in row major order:\n",m,n);
  for(int i=0;i<m;i++)  // using for loop to get the values at the place i and j. like we gave 2x2 i=0 and less than 2, same for j than the value entered by user will go to the 0th place of the A matrix
  {
      for(int j=0;j<n;j++)
      {
          scanf("%d",&A[i][j]);  // if the conditions are true like the i < m and j<n than it will take the values at place 0 first
      }
  }
  
  // input for matrix B
  printf("Enter elements of matrix B (%d x %d) in row major order:\n",p,q);
  for(int i=0;i<p;i++) // same for the matrix B 
  {
      for(int j=0;j<q;j++)
      {
          scanf("%d",&B[i][j]);
      }
  }
  // initialize the result of matrix to 0
  for(int i=0;i<m;i++)
  {            
      for(int j=0;j<q;j++)
      {
          result[i][j]=0;
      }
  }
  //multiply matrix
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<q;j++)
      {
          for(int k=0;k<n;k++)
          {
              result[i][j]+=A[i][k]*B[k][j];
          }
      }
  }
  
  // output for matrix A
  printf("\nMatrix A (%d x %d):\n",m,n);
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("%5d",A[i][j]);
          printf("\n");
      }
  }
  
  // output matrix B
  printf("\nMatrix B (%d x %d):\n",p,q);
  for(int i=0;i<p;i++)
  {
      for(int j=0;j<q;j++)
      {
          printf("%5d",B[i][j]);
          printf("\n");
      }
  }
  
  //output resultant matrix
  printf("\nResultant matrix (A x B) (%d x %d):\n",m,q);
  for(int i=0;i<m;i++){
      for(int j=0;j<q;j++){
          printf(" %d ",result[i][j]);
          printf("\n");
      }
  }
    return 0;
}