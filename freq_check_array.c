// C program to read a list of integers and store it ina single dimensional array. wap to find the frequency of a particular number in a list of integers.
#include<stdio.h>
int main(){
    int i,n,num; // num indicates the number whose frequency we need to find
    int arr[100];
    int freq=0;
    
    printf("Enter the number of elements(max 100): ");
    scanf("%d",&n);
    
    if(n<1||n>100){
        printf("Enter a valid number of elements between 1 and 100.\n");
        return 0;
    }
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //ask the user to enter a number whose frequency need to be found
    printf("Enter the number to find its frequency: ");
    scanf("%d",&num);
   
   for(i=0;i<n;i++)  // we put the loop to go through each each number to check the if condition
   {
       
    if(arr[i]==num)  // if the number of array is equal to num than the freq will be increased
    {
        freq++;
    }
   }
    printf("The frequency of number %d is: %d times",num,freq);


return 0;
}