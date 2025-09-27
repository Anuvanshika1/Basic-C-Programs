//Day 31
// Search for an element in an array using linear search.
#include<stdio.h>
int main(){
    int n,i,j,flag=0;
    int a[50];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to check: ");
    scanf("%d",&j);
    for(i=0;i<n;i++){
        if(j==a[i])
        {
            printf("Found at index %d",i);
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
            printf("-1");
        }
        
    
    return 0;
}


// Reverse an array without taking extra space.
#include<stdio.h>
int main(){
    int arr[15],i,n,j,k;
    
    printf("Enter the total numbers: ");
    scanf("%d",&n);
    
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    j=n-1;
    while(i<j){   // it will reverse the array in the memory using the 3rd variable without using extra space means without extra array
        k=arr[i]; // giving K the value of arr[0] 
        arr[i]=arr[j];  // giving arr[0] the value of last element of array
        arr[j]=k;  // giving arr[j] that contains the last element the value of first element
        i++;  // the i will be increasing from 1 untill it is less than j
        j--; // the j will decreasing from last untill it is greater than i
          // and where the i and j will have the same index they will exit the loop because that will remain same even after swapping
    }
    printf("Reversed array is: ");
    for(i=0;i<n;i++){
         printf("%d ", arr[i]);
    }
   
    return 0;
}