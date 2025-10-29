
// linear search 
// wap to implement linear search 
#include<stdio.h>
int main(){
    int k,i,arr[30],flag=0,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d element is found at %d position",k,i);
    }
    else{
        printf("Element not found");
    }
    return 0;
    }

