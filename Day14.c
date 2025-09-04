//DAY 14
//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
    int i,sum=0,n;
    printf("Enter the numbers for odd number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {   
        if(i%2!=0)
        {  
            sum=sum+i; 
        }
       
    }
     printf("%d",sum);
    return 0;
}

// Write a program to print the product of even numbers from 1 to n.
 #include <stdio.h>
int main(){
    int i,pro=1,n;
    printf("Enter the numbers for even number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {   
        if(i%2==0)
        {  
            pro=pro*i; 
        }
       
    }
     printf("%d",sum);
    return 0;
}

