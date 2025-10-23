// Day 44
// Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char a[20];
    int i;
    int countsp=0,countdi=0,countspe=0;
 
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
  for(i=0;a[i] != '\0';i++)
  {
      if(a[i]==' ')
      {
          countsp++;
      }
      else if(a[i]>='0' && a[i]<='9')
      {
          countdi++;
      }
      else if(!((a[i] >= 'a' && a[i] <= 'z') ||
      (a[i] >= 'A' && a[i] <= 'Z') ||
      (a[i] >= '0' && a[i] <= '9')||
      (a[i]==' ')))
      {
          countspe++;
      }
  }
  printf("Spaces=%d,Digits=%d and Special=%d",countsp,countdi,countspe);
    return 0;
}

// Replace spaces with hyphens in a string.

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
      if(a[i]==' ')
      {
      a[i]='-';
      }
  }
  printf("%s",a);
  return 0;
    
}
  