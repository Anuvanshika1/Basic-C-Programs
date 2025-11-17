// Input a string and print it using a character pointer.
/*
#include<stdio.h>
int main(){
    int m;
    char ch[45];
    printf("Enter the string: ");
    scanf("%s",ch);
    char *ptr = ch;
    printf("The string is:%s",ptr);
    return 0;
}
*/

//Calculate string length using a pointer (no strlen()).
/*
#include<stdio.h>
int main(){
    int i,m,k=0;
    char ch[45];
    printf("Enter the string: ");
    fgets(ch,45,stdin);
    char *ptr=ch;
    for(i=0;*(ptr+i)!='\0';i++){
       k++;
    }
    // removing the newline character counted by fgets as it stores \n character too so subtracting 1 from total length mean \n than decrease the count
    if(k>0 && ch[k-1]=='\n'){
        k--;
    }
    printf("Length of the string is %d",k);
}
*/

//Count vowels in a string using a character pointer.
/*
#include<stdio.h>
int main(){
    int i,m,k=0;
    char ch[45];
    printf("Enter the string: ");
    fgets(ch,45,stdin);
    char *ptr=ch;
    for(i=0;*(ptr+i)!='\0';i++){
     if(*(ptr+i)=='a' || *(ptr+i)=='A' || 
        *(ptr+i)=='e' || *(ptr+i)=='E' ||
        *(ptr+i)=='i' || *(ptr+i)=='I' ||
        *(ptr+i)=='o' || *(ptr+i)=='O' ||
        *(ptr+i)=='u' || *(ptr+i)=='U' ) 
     k++;
    }
  
    printf("The number of vowels are:%d",k);
    return 0;
}
*/
//Copy one string into another using pointers (no strcpy())
#include<stdio.h>

int main() {
    char ch[45];
    char chs[35];

    printf("Enter the 1st string: ");
    scanf("%s", ch);

    printf("Enter the 2nd string: ");
    scanf("%s", chs);

    char *p = ch;   // pointer to source
    char *q = chs;  // pointer to destination

    while(*p != '\0') {
        *q = *p;  // copy character
        p++;
        q++;
    }

    *q = '\0';  // null terminate destination

    printf("Copied string is: %s", chs);

    return 0;
}