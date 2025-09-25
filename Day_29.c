// day 29
// Find the sum of array elements.

#include<stdio.h>
int main(){
    int A[20],n,i,sum=0;
    printf("Enter the number you want to add: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){  
        scanf("%d",&A[i]);  // getting the values at the memory spaces
    }
  
    for(i=0;i<n;i++){
        sum=sum+A[i];
    }
    printf("Sum is: %d",sum);
    return 0;
   
}

// Find the maximum and minimum element in an array.
#include<stdio.h>
int main(){
    int A[20],n,i,maximum,minimum;
    printf("Enter the number you want to add: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){  
        scanf("%d",&A[i]);  // getting the values at the memory spaces
    }
    maximum=A[0],minimum=A[0]; // initalizing maxinmum and minimum the first value of array element so that we can compare them with all.
    for(i=1;i<n;i++)
    {
        if(maximum<A[i])
        {
            maximum=A[i];
        }
   
        if(minimum>A[i])
        {
            minimum=A[i];
        }
}
    
    printf("Maximun number and minimum is:%d %d",maximum,minimum);
    
    return 0;
   
}