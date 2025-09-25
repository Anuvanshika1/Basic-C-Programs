// write a program to concatenate 2 string manually
#include<stdio.h>
int main(){
    char str1[100],str2[50];
    int i=0,j=0;
    // input strings
    printf("Enter first string: ");
    scanf("%s",str1);
     printf("Enter second string: ");
    scanf("%s",str2);
    // find the end of the string
    while(str1[i]!='\0'){
        i++;
    }
    // append the second string to the first
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    // null terminate the concatenated string
    str1[i]='\0';
    // output the concatenated string
    printf("Concatenated string:%s\n",str1);
    return 0;
}
