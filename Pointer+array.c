//Declare an array of 5 integers. Use a pointer to print all elements.
/*
#include<stdio.h>
int main(){
    int i,n;
    int arr[5]={1,2,3,6,7};
    int *p=arr;
    printf("The numbers of the array are: ");
    for(i=0;i<5;i++){
        n=*(p+i);
        printf("%d\t",n);
    }
    return 0;
}
*/

//Find the maximum element in an array using a pointer.
/*
#include<stdio.h>
int max(int *arr,int n )
{  int m=*arr;// lets say max number is a[0] that can be reprsented as *arr as array is a pointer and pointer points to the first index of the array;
    int i;
 for(i=0;i<n;i++){
     
     if(m<*(arr+i))
     {
         m=*(arr+i);
     }
 }
 return m;
}

int main(){
    int arr[25],num,i,p;
    printf("Enter the total number of elements:");
    scanf("%d",&num);
    printf("Enter the value of the elements: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    p=max(arr,num);
    printf("The max element in the array is; %d",p);
    return 0;
}
*/

// Reverse an array using pointer notation (no indexing inside logic).
/*
#include<stdio.h>
void rev(int *arr,int n )
{   int m;
    int i;
    for(i=0;i<n/2;i++)
    {  
        m=*(arr+i); // storing the left element that is 0th index values
        *(arr+i)=*(arr+n-1-i); // assigning 0th index the last index value
        *(arr+n-1-i)=m; // storing the 0th index value in last index
    }
  
}

int main(){
    int arr[25],num,i,p;
    printf("Enter the total number of elements:");
    scanf("%d",&num);
    printf("Enter the value of the elements: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    p=rev(arr,num);
    printf("The rev element in the array is:");
    for(i=0;i<num;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
*/

// Calculate the sum of array elements using pointers.
/*
#include<stdio.h>
int sum(int *arr,int n )
{ 
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {  
        sum=*(arr+i)+sum;
    }
  return sum;
}

int main(){
    int arr[25],num,i,p;
    printf("Enter the total number of elements:");
    scanf("%d",&num);
    printf("Enter the value of the elements: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    p=sum(arr,num);
    printf("The sum of the element in the array is: %d",p);
    
    return 0;
}
*/

// Use pointer arithmetic (p+1) to print array elements and their addresses.
#include<stdio.h>
int main(){
    int arr[25],num,i,p;
    printf("Enter the total number of elements:");
    scanf("%d",&num);
    printf("Enter the value of the elements: ");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    

    printf("The addresses and elements in the array is:\n");
    for(i=0;i<num;i++){
        printf("The address and value of %d element is %d, %p\n",i,*(arr+i),(arr+i));
    }
    
    return 0;
}







