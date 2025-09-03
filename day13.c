// DAY 13
// question 25
// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
   int n,p,a;
   char sym;
  printf("Enter the value of n and p and the symbol: ");
  scanf("%d %d %c",&n,&p,&sym);
  switch(sym)
  {
      case '+' :
       a=n+p;
      printf("%d",a);
      break;
      case '-' :
       a=n-p;
      printf("%d",a);
      break;
      case '*' :
       a=n*p;
      printf("%d",a);
      break;
      case '/' :
       a=n/p;
      printf("%d",a);
      break;
      case '%' :
       a= n%p;
      printf("%d",a);
      break;
      
  }
  
  return 0;
}


// Write a program to print numbers from 1 to n.
#include <stdio.h>
int main(){
    int i,n;
    printf("Enter the n numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf(" %d ",i);
    }
    return 0;
}
