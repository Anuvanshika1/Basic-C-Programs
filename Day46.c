// Day 46
// Remove all vowels from a string.

#include <stdio.h>

int main() {
    char a[20],r[20];
    int i,j=0;
 
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
      if(!(a[i]=='a' || a[i]=='A'|| a[i]=='i' || a[i]=='I' || a[i]=='u' || a[i]=='U'|| a[i]=='E' || a[i]=='e'|| a[i]=='O'|| a[i]=='o'))
      {
         r[j]=a[i]; // copying the consonants one characters into another array // r[j] and incrementing j.
         j++;
      }
     
  }
  r[j]='\0'; 
  printf("%s",r);
  return 0;
    
}

// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char a[20];
    int i,j=0,r=0;
    int flag=0;
 
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
      if(a[i] >='a' && a[i] <='z')
      {
        for (j = i + 1; a[j] != '\0'; j++) 
        {
            if (a[i] == a[j])  // comparing the array with itself to see if we have repeating character or not
            {
            r=a[i];  // storing the first repeating letter in r variable
            flag = 1; 
             break;
                }
            }
        }
     
  }
if(flag==1)
{
    printf("The repeating lowercase letter is: %c",r);
}
else
{
    printf("No repeating lowercase letters found");
}

  return 0;
}   
  