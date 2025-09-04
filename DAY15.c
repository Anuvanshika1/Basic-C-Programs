//day15
// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int f=1,i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=i*f;
        
    }
    printf("%d",f);
    return 0;
}

// Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n,x,z=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
    x=n%10; // this will me 4 from 1234
    z=z*10+x; // this will help us building the reverse number 0*10+4=4
    n=n/10;  // this will give 123 as new n value, that will go again in while n>0 
             // than again 123>0 than 123%10=3, z new value is 4 so 4*10+3=43 and than 
             // 123/10= 12 as new n and the same thing on repeat untill n>0.
     
    }
    printf("number is : %d",z);
    return 0;
}
    
    
    
    
    
    
}
