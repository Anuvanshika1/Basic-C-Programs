// Day 39
// Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
int main(){
    int v[20][20],flag=1;
    int i,j,m,n;
    printf("Enter the value for size of matrix1: ");
    scanf("%d %d",&m,&n);

     
   for(i=0;i<m;i++)  // starting the loop with the row =0 fo matrix 1 
   {
       for(j=0;j<n;j++) // going inside and getting the value of column=0
       {
       scanf("%d",&v[i][j]);
       }
   }
for(i=0;i<m;i++) 
   {
       for(j=i+1;j<n && j<m;j++)  // checking the first element of row 0 to the 2nd element of column 2 and than 3rd element of column 3
       { 
       if(v[i][i]==v[j][j]) // v[0][0]=1 = v[1][1]=5 and v[0][0]=1= v[2][2] = 1
       {
           flag=0;
           break;
       }
       if (flag==0)
       {
           break;
       }
      
        }
   }
   if(flag==0)
   {
       printf("False no distinct");
   }
   else
   {
       printf("true distinct");
   }

    return 0;
}

// Find the sum of main diagonal elements for a square matrix.
// main diagonal means i==j like [0][0] [1][1] [2][2]
#include<stdio.h>
int main(){
    int v[20][20],sum=0;
    int i,j,m,n;
    printf("Enter the value for size of matrix1: ");
    scanf("%d %d",&m,&n);
if(m != n){
        printf("Not a square matrix, no main diagonal.\n");
        return 0;
    }
     
   for(i=0;i<m;i++)  // starting the loop with the row =0 fo matrix 1 
   {
       for(j=0;j<n;j++) // going inside and getting the value of column=0
       {
       scanf("%d",&v[i][j]);
       }
   }
for(i=0;i<m;i++) 
   {
       sum=sum+v[i][i];
   }
   printf("Sum of diagonal is: %d",sum);

    return 0;
}