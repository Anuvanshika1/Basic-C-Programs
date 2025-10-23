// Day 45
// Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char a[20],n;
    int i,count=0;
 
  printf("Enter the string character by character: ");
  for(i=0;i<20;i++)
  {
      scanf("%c",&a[i]); // getting the input from user one by one 
      if (a[i] == '\n') // if the user pressed enter than break the loop
        { 
            break;
        }
     
  }
  a[i]='\0'; // to add null character to tell the compiler its a string
  printf("Enter the character you want the frequency for: ");
  scanf("%c",&n);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]==n)
      {
          count++;
      }
  }
  printf("Frequency of %c is %d",n,count);
  return 0;
    
}
 
// Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char a[20];
    int i;
 
  printf("Enter the string character by character: ");
  for(i=0;i<20;i++)
  {
      scanf("%c",&a[i]); // getting the input from user one by one 
      if (a[i] == '\n') // if the user pressed enter than break the loop
        { 
            break;
        }
     
  }
  a[i]='\0'; // to add null character to tell the compiler its a string
  
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i] >='a' && a[i]<='z')
      {
          a[i]=a[i]-32;
      }
      else if(a[i] >='A' && a[i]<='Z')
      {
          a[i]=a[i]+32;
      }
  }
  printf("%s",a);
  return 0;
    
}
  