//Day34
// Insert an element in an array at a given position.

#include<stdio.h>
int main(){
    int i,j,n,num,arr[20],k;
    printf("Enter the total numbers you want: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index where you want to add and number you want to add: ");
    scanf("%d %d",&k,&n);
    for(i=0;i<num;i++){
        
          for(j = num; j > i+k; j--) // shifting the array to the right untill the insertion place will come that if i=0 and index to insert is 2 that 0+2 place, loop will untill we make the arr[2] emty by shifting them one by one
          {
                arr[j] = arr[j-1]; 
            }
            arr[i+k]=n;  // adding the number at i+k index,as if we have i=0 and we want to add at 2nd index so, it will be 0+2=2 so 3rd index;  than after shifting i+k space we will add the element to that particular place 
            break;
        
       
    }
    num++; // increasing the value of original num by 1 so that the extra space created above can increase and attain the last value
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);  // printing the new array
    }
    return 0;
}

//Delete an element from an array. 

#include<stdio.h>
int main(){
    int i,j,n,num,arr[20],k;
    printf("Enter the total numbers you want: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index where you want to delete ");
    scanf("%d",&k);
    for(i=k;i<num-1;i++) /* Shift all elements after index k one position to                      the left.
                          We loop until i < num - 1 because arr[i+1] must be a valid index
                         If we used i < num, arr[i+1] would access arr[num], which is out of bounds */
    {
       arr[i]=arr[i+1]; // because if i have k=4 and num=5 and i am shifting towards left than at index arr[4] = arr[4+1] that arr[5] we should have something,but if i use i<num than it wouldn't have anything to put at arr[4] and in num-1 it would be i<5-1=4 so, it wouldn't go beyond
                
       
    }
    num--; // decreasing the value of original num by 1 so that the space at the last can be avoided above can be decreased and attain the last value
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);  // printing the new array
    }
    return 0;
}