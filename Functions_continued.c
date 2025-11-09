// WAP to find the sum of digits of a number.
#include <stdio.h>
int sum(int n){
    int b,sums=0;
    while(n>0)
    {
    b=n%10;
    sums=b+sums;
    n=n/10;
    }
    return sums;
}
int main(){
    int a,s;
    printf("Enter the number: ");
    scanf("%d",&a);
    s=sum(a);
    printf("The sum of the digits is: %d",s);
    return 0;
}


//Write a function to check if a number is prime.
/*#include <stdio.h>
int prime(int n)
{   int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i*i<=n;i++)
    {
       if(n%i==0)
       {
           return 0;
       }
       
    }
    return 1;
}
int main(){
    int a,p;
    printf("Enter a number to check: ");
    scanf("%d",&a);
    if(prime(a) ==1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not prime");
    }
  
    return 0;
}
*/
//Write a function to find the reverse of a number.
/* #include<stdio.h>
int reverse(int n)
{
    int b,rev=0,i;
    while(n>0){
        b=n%10;
        rev=rev*10+b;
        n=n/10;
    }
    return rev;
}
int main(){
    int a,b,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    r=reverse(a);
    printf("The reverse of the number is %d",r);
    return 0;
}
*/
//Write a function to check if a number is palindrome.
/*#include<stdio.h>
int reverse(int n)
{
    int b,rev=0,i;
    while(n>0){
        b=n%10;
        rev=rev*10+b;
        n=n/10;
    }
    return rev;
}
int main(){
    int a,b,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    r=reverse(a);
    if(r==a)
    {
        printf("the number is palindrome");
    }
    else{
        printf("number not palindrome");
    }
    return 0;
}
*/
//Write a function to count the number of vowels in a string.
/*#include <stdio.h>
int vowel(char st[50])
{ int k=0;
int i;
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]=='a' || st[i]=='A' || st[i]=='e' || st[i]=='E' || st[i]=='i' || st[i]=='I' || st[i]=='o' || st[i]=='O' || st[i]=='U' || st[i]=='u')
        {
            k++;
        }
    }
    return k;
}
int main()
{
    char ch[50];
    int f;
    printf("Enter the string: ");
    fgets(ch,50,stdin);
    f=vowel(ch);
    printf("Number of vowels in the string is: %d",f);
    return 0;
}
*/
//Write a function to find the greatest among three numbers.
/*#include<stdio.h>
int great(int i,int j,int k)
{
    int max=i;
    if(i>j &&i>k ){
        max=i;
    }
    else if(i<j && j>k){
        max=j;
    }
    else {
        max=k;
    }
    return max;
}
int main(){
    int a,b,c,d;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    d=great(a, b ,c);
    printf("The greatest number among three is %d",d);
    return 0;
}
*/

//Write a function that returns the power of a number (e.g., power(2, 3) = 8).
/* #include<stdio.h>
#include<math.h>
int power(int num,int p)
{
    int z=1,i;
    //z=pow(num,p);
    //return z;
    
    for(i=1;i<=p;i++){
        z=z*num;
    }
   return z;
}
int main(){
    int i,j,powe;
    printf("Enter the number and power: ");
    scanf("%d %d",&i,&j);
    powe=power(i,j);
    printf("The power of a number is: %d",powe);
    return 0;
}
*/

//Write a function to print all natural numbers between two limits.
#include<stdio.h>
int natural(int n,int m)
{ int o,i;
for(i=n;i<=m;i++){
    o=i;
    printf("%d ",o);
}
} 
int main(){
    int a,b,s;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    s=natural(a,b);
  
    return 0;
}







