/*WAP to saw the use of dynamic memory allocation in c. */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
