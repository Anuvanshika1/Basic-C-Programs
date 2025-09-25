// write a program to compare two string manually
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0,flag=0;
    //input the strings
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    
    //compare character by character
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    //if lengths are different like the str1 had 3 character and str2 have 5 character, but the both have same charcter values, so we need to eliminate that by comparing the length too.
    if(str1[i]!= '\0' || str2[i]!= '\0')
    {
        flag=1;
    }
    
    if (flag==0)
    {
        printf("Both the strings are same.\n");
   }
else {
    printf("Both the strings are not same.");
        
    }
    return 0;
}
    