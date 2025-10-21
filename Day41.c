//Day41
// Count characters in a string without using built-in length functions.
#include <stdio.h>
int main() {
    char ch[20];
    int i, count = 0;

    printf("Enter your string: ");
    for(i=0;i<19;i++)  // this loop will take values for 19 spaces and checks if enter key has been pressed, if yes then break the loop else keep on counting
    {
        scanf("%c",&ch[i]);
        if(ch[i]=='\n')
        {
            break;
        }
        else
        {
        count++;
        }
    }
    
    // it will give 1 output for empty string
    if(count == 0) {
        count = 1;
    }

    printf("Length of string is %d\n", count);

    return 0;
}

// Print each character of a string on a new line.
#include <stdio.h>
int main() {
    char ch[20];
    int i;

    printf("Enter your string: ");
    for(i=0;i<19;i++)
    {
        scanf("%c",&ch[i]);
        if(ch[i]=='\n')
        {
            break;
        }
        else
        {
            printf("%c\n",ch[i]);
        }
    }
   

    return 0;
}
