//Write a program to create a file and write “Hello World” into it
/* 
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Hello.txt","w");
    if(fptr==NULL){
        printf("File can not be opened");
        return 1;
    }
    fprintf(fptr,"hello world");
    fclose(fptr);
    return 0;
    
}
*/
//Write a program to read and display the content of a text file.
/* 
#include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    fptr=fopen("filename.txt","r");
    if(fptr==NULL){
        printf("File not found");
        return 1;
    }
    while((ch=fgetc(fptr))!=EOF){
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}
*/

//Write a program to append user-entered text to an existing file.
/*
#include<stdio.h>
int main(){
    FILE *fptr;
    char t[50];
    fptr=fopen("filename.txt","a");
    if(fptr==NULL){
        printf("File not found");
        return 1;
    }
    printf("enter text you want to append:");
    fgets(t,sizeof(t),stdin);
    fprintf(fptr,"%s",t);
    fclose(fptr);
    return 0;
}
*/

//Write a program to count the number of characters in a file.
/* 
#include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    int c=0;
    fptr=fopen("filename.txt","r");
    if(fptr==NULL){
        printf("File not found");
        return 1;
    }
   
    while((ch=fgetc(fptr))!=EOF){
        c++;
    }
     fclose(fptr);
    printf("the number of characters in a file are: %d",c);
    return 0;
}
*/
//Write a program to count the number of words in a file.
/* 
#include<stdio.h>
int main(){
    FILE *fptr;
    int c=0;
    char ch[50];
    fptr=fopen("filename.txt","r");
    if(fptr==NULL){
        printf("File not found");
        return 1;
    }

   while((fscanf(fptr,"%s",ch))!=EOF){
        c++;
    }
     fclose(fptr);
    printf("the number of words in a file are: %d",c);
    return 0;
}
*/
//Write a program to check whether a file exists or not.
/*
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("filename.txt","r");
    if(fptr==NULL)
    {
        printf("File not found");
        return 1;
    }
    else {
        printf("File exits");
    }
    fclose(fptr);
    return 0;
}
*/
//Write a program to copy the contents of one file into another file.
/* 
#include<stdio.h>
int main(){
    FILE *fptr;
    FILE *fptr2;
    char ch[100];
    fptr=fopen("filename.txt","r");
    fptr2=fopen("filename2.txt","w");
     if (fptr == NULL || fptr2 == NULL) {
        printf("files not found\n");
        return 1;
    }
    while((ch=fgetc(fptr))!=EOF) // copying character by character in ch
    // using fgets
    /* while (fgets(ch, sizeof(ch), fptr)) 
    {
        fputs(ch, fptr2);
    }
    */
    /*
    {
        //fputc(ch,fptr2);  character that needs to be displayed to  file pointer where to copy
        fprintf(fptr2,"%s",ch); // where to copy, what format, what to copy
    }
    fclose(fptr);
    fclose(fptr2);
    return 0;
}

*/
//Write a program to read a file line by line using fgets().
/* 
#include<stdio.h>
int main(){
    FILE *fptr;
    char ch[50];
    fptr=fopen("Filename.txt","r");
    if(fptr==NULL){
        printf("file not found");
        return 1;
    }
    while(fgets(ch,sizeof(ch),fptr)!=NULL){
       printf("%s",ch);
    }
    fclose(fptr);
    return 0;
}
*/
//Write a program to count the number of lines in a file.
/*
#include<stdio.h>
int main(){
    FILE *fptr;
    int c=0;
    char ch[100];
    fptr=fopen("Filename.txt","r");
    if(fptr==NULL){
        printf("file not found");
        return 1;
    }
    while(fgets(ch,sizeof(ch),fptr)!=NULL){
       c++;
    }
    fclose(fptr);
    return 0;
}
*/ 
//Write a program to read numbers from a file and calculate their sum.
#include<stdio.h>
int main(){
    FILE *fptr;
    int sum=0;
    fptr=fopen("Filename.txt","r");
    if (fptr == NULL) {
        printf("File not found");
        return 1;
    }
    while(fscanf(fptr,"%d",&num)!=EOF)
    {
       sum=sum+num;
    }
    fclose(fptr);
    printf("Sum of the numbers=%d",sum);
    return 0;
    
}




