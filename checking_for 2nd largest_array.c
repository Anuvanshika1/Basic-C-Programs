#include <stdio.h>

int main()  {
    int arr[100];
    int n,i;
    int largest,second;
    printf("Enter the number of elements(max 100): ");
    scanf("%d",&n);
    if(n<2||n>100) // to check if the number entered is in the range or not
    {
        printf("Please enter at least 2 numbers and not more than 100.\n");
        return 0;
    }
printf("Enter %d integers:\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);  // it will take the input in the array one by one untill the position of i is less than the total number of values
}
// initialize largest and second
if(arr[0]>arr[1])
{
    largest=arr[0];
    second=arr[1];
    
}
else {
    largest=arr[1];
    second=arr[0];
}

for(i=2;i<n;i++)
{
    if (arr[i]>largest)
    {
        second=largest;  // if the other value is greater than the previous largest value than we will first empty that previous largest value to second as it will become 2nd largest not and the largest value will be the new one
        largest=arr[i];
    }
    else if (arr[i] > second && arr[i]!=largest)
    {  
        second=arr[i];  // if that new value is greater than second largest value abd also it is not equal to largest value than that value will be assigned in 2nd largest 
    }
}
if(largest == second){
    printf("All elements are the same or no second largest exists.\n");
}
else {
    printf("The second largest number is:%d\n",second);
}
    return 0;
}
}

