//Day 30
// Count even and odd numbers in an array.
#include<stdio.h>
int main(){
    int even=0,odd=0,n,i;
    int a[20];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even=%d,Odd=%d",even,odd);
    return 0;
}

// Count positive, negative, and zero elements in an array.

#include<stdio.h>
int main(){
    int positive=0,negative=0,zero=0,n,i;
    int a[50];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            positive++;
        }
        else if(a[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }
    printf("Positive=%d,Negative=%d,Zero=%d",positive,negative,zero);
    return 0;
}