// C program to count and display positive,negative, odd and even number in an array
#include<stdio.h>
int main(){
    int i,n;
    int arr[100];
    int positive=0,negative=0,even=0,odd=0;
    printf("Enter the number of elements(max 100): ");
    scanf("%d",&n);
    if(n<2||n>100){
        printf("Enter a valid number of elements between 1 and 100.\n");
        return 0;
    }
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    // count positive and negative
    if(arr[i]>0)
    positive++;
    else if(arr[i]<0)
    negative++;
    
    if(arr[i]!=0)
    {
    //count even and odd
    if (arr[i]%2==0)
    even++;
    else
    odd++;
    }
}
// output the result
printf("Count of positive numbers: %d\n",positive);
printf("Count of negative numbers: %d\n",negative);
printf("Count of even numbers: %d\n",even);
printf("Count of odd numbers: %d\n",odd);
return 0;
}