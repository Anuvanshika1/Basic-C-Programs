// Day 43
// Reverse a string
#include <stdio.h>

int main() {
    char a[20];
    int i,j;
    int len=0;
    int temp;
  printf("Enter the string character by character: ");
  for(i=0;i<20;i++)
  {
      scanf("%c",&a[i]); // getting the input from user one by one 
      if (a[i] == '\n') // if the user pressed enter than break the loop
      { 
            break;
        }
      len++;
  }
  a[i]='\0'; // to add null character to tell the compiler its a string
  for(i=0,j=len-1;i<j;i++,j--) // starting i from 0 and j from the last character the total length -1 excluding the null character and interchanging them.
  {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
     
  }

  printf("%s",a);
    return 0;
}

//Check if the string is a palindrome or not

#include <stdio.h>

int main() {
    char a[20];
    int i,j;
    int len=0;
    int flag=1;
 
  printf("Enter the string character by character: ");
  for(i=0;i<20;i++)
  {
      scanf("%c",&a[i]); // getting the input from user one by one 
      if (a[i] == '\n') // if the user pressed enter than break the loop
        { 
            break;
        }
      len++;
  }
  a[i]='\0'; // to add null character to tell the compiler its a string
  for(i=0,j=len-1;i<j;i++,j--) // starting i from 0 and j from the last character the total length -1 excluding the null character and interchanging them.
  { 
      if( a[i]==a[j] )
     {
      flag=0;
     }
     else
     {
         flag=1;
         break;
     }
     
  }
    if(flag==0)
    {
      printf("Palindrome");
    }
    else
    {
      printf("Not palindrome");
    }

    return 0;
}
