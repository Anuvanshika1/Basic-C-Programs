//Day 32

// Merge two arrays.
#include <stdio.h>

int main() {
    int n1,n2,i,j,arr[20],mergedarr[30],ar2[20];
    // input for the first array
    printf("Enter the number of elements in 1st set: ");
    scanf("%d", &n1);
    
    printf("Enter the elements: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }
    // taking input for the 2nd array
     printf("Enter the number of elements in 2nd set: ");
    scanf("%d", &n2);
    
     printf("Enter the 2nd set of elements: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &ar2[i]);
    }
    
    // here we will copy the elements of first array to new array named mergedarr[] from the 0th index
    for(i=0;i<n1;i++){
        mergedarr[i]=arr[i];
    }
    // now, here again, we will copy the elements of 2nd array,but at this from the index where the array 1 had left like if i had taken 3 element in array 1 going to 0 1 2 position so than 3+0 mergedarr[3]=first element of array 2 going to the 4th position of mergedarr[] 
    for(i=0;i<n2;i++){
        mergedarr[n1+i]=ar2[i];
    }
    // printing of the array with the condition of i<n1+n2
    printf("\nMerged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedarr[i]);
    }

    return 0;
}

// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int n, i = 0, arr[20], count = 0;
    int freq[10] = {0};   // for digits 0–9 
    int maxCount = 0, mostFreqDigit = 0; // putting the most frequent digit =0

    printf("Enter the number: ");
    scanf("%d", &n);

    int temp = n;  // copy of n

    // Extract digits into arr[]
    while(temp > 0) {
        arr[i] = temp % 10;
        temp = temp / 10;
        i++;
        count++;
    }

    //  Count frequencies 
     
    for(i = 0; i < count; i++) {
        freq[arr[i]]++; // counting the frequency of the arr[i] that will be eventually the index for freq[i], so it will directly increase the frequency of that element at that index
    }

    // Step 3: Print frequencies & find max
    for(i = 0; i < 10; i++)
    {
        if(freq[i] > 0) 
        {
            printf("%d occurs %d times\n", i, freq[i]);
            if(freq[i] > maxCount) // we will checking the max count of all the elements and comparing it with 0 and assigning the new values to max count if any count is greater than previous maxcount
            {
                maxCount = freq[i];
                mostFreqDigit = i;
            }
        }
    }

    // Step 4: Print most frequent digit
    printf("Digit occurring most times: %d \n", mostFreqDigit);

    return 0;
}
