// Day 47
// check if two strings are anagrams of each other
#include <stdio.h>

int main() {
    char a[20], k[20];
    int i;
    int flag = 1; 
    int counti[256] = {0}, countk[256] = {0}; 

    printf("Enter the first string character by character: ");
    for (i = 0; i < 20; i++) {
        scanf("%c", &a[i]);
        if (a[i] == '\n')
            break;
        counti[a[i]]++; // count frequency for each character
    }
    a[i] = '\0';

    //second string
    printf("Enter the second string character by character: ");
    for (i = 0; i < 20; i++) {
        scanf("%c", &k[i]);
        if (k[i] == '\n')
            break;
        countk[k[i]]++; // count frequency of each character of the second string
    }
    k[i] = '\0';

    // Compare both frequency arrays
    for (i = 0; i < 256; i++) {
        if (counti[i] != countk[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}


// Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char a[100];         
    char longest[100];    // to store the longest word
    int i;                
    int current_len = 0;  // length of the current word
    int max_len = 0;      // length of the longest word found
    int start = 0;        // starting index of current word
    int long_start = 0;   // starting index of longest word

    printf("Enter a sentence: ");
    fgets(a, 100, stdin);  // takes the whole sentence (with spaces)

    for (i = 0; a[i] != '\0'; i++) 
    {  // loop through each character
        if (a[i] != ' ' && a[i] != '\n') 
        {
            // counting letters in the current word
            current_len++;
        } 
        else 
         {
            // end of a word (found space or newline)
            if (current_len > max_len) 
            {
                max_len = current_len;         // update max length
                long_start = start;            // mark start of longest word
            }
            current_len = 0;                   // reset for next word after 
            start = i + 1;                     // next word starts after space
        }
    }

    // check the last word (if string doesn’t end with a space)
    if (current_len > max_len) {
        max_len = current_len;
        long_start = start;
    }

    // now copy the longest word into another array
    int j;
    for (j = 0; j < max_len; j++) 
    {
        longest[j] = a[long_start + j];
    }
    longest[j] = '\0'; // end of string

    printf("The longest word is: %s\n", longest);
    printf("Length of longest word: %d\n", max_len);

    return 0;
}
