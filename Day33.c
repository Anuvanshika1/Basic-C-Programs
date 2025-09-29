//Day 33
// Search in a sorted array using binary search.
#include<stdio.h>
int main(){
    int i,j,n,num,arr[20],flag=0;
    printf("Enter the total numbers you want: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want the index: ");
    scanf("%d",&n);
    for(i=0;i<num;i++)
    {
        if(arr[i]==n)
        {
            printf("Found at index: %d",i);
        
        flag=1;
       break;
        }
    }
    if(flag==0){
        printf("-1");
    }
    return 0;
}

// Insert an element in a sorted array at the appropriate position.

#include<stdio.h>
int main(){
    int i,j,n,num,arr[20];
    printf("Enter the total numbers you want: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to add: ");
    scanf("%d",&n);
    for(i=0;i<num;i++){
        if(n>arr[i] && n<arr[i+1])
        { // shifted the arr[i] to the right to create space
        // Start from the current end (num) and shift elements right, 
        // stopping one position *after* the insertion point (insert_index)
          for(j = num; j > i+1; j--) {
                arr[j] = arr[j-1]; // putting the last digit at the total number of elements position i.e if 5 total numbers we put down in the array than the last number or 5th element at the arr[4] will be get the 5th position of the array that is arr[5] that currently doesn't exist but we will increase the size later. and similarly the 4th element at arr[3] will go the arr[4] and than the element at arr[2] that is the 3rd element will go to the 4th positon arr[3]. thus creating space after the i+1 position.
            }
            arr[i+1]=n;  // adding the number
            break;
        }
       
    }
    num++; // increasing the value of original num by 1 so that the extra space created above can increase and attain the last value
    for(i=0;i<num;i++)
    {
        printf("%d",arr[i]);  // printing the new array
    }
    return 0;
}