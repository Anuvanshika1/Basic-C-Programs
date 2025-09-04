// wap to enter numbers till the user wants. at the end, it should display the count of positive,negative and zeros entered.

  #include <stdio.h>
int main(){
    int v,n,p=0,neg=0,zero=0;
    while(1)
    {
        printf("Do you want to enter a number, enter 1 for yes and 0 for no: ");
        scanf("%d",&v);
        if(v==1)
        {
            printf("Enter the value: ");
            scanf("%d",&n);
            if(n>0)
            {
                p=p+1;
            }
            else if(n<0)
            {
                neg=neg+1;
                
            }
            else 
            {
                zero=zero+1;
                
            }
            
        
        }
        else if (v==0)
        {
            break;
        }
        else
       {
         printf("You entered a wrong number");
       }
      
    }
     printf("Count for entered numbers positive=%d ,negative:%d and zero are: %d",p,neg,zero); 
    return 0;
}




