// program to check if the given year is leap year or not

#include <stdio.h>

int main()
{  int L,Y,M;
printf("Enter the value of year: ");
scanf("%d",&Y);
L=Y%4;
M=Y%100;
if((L==0) && (M!=0) || (Y%400)==0){
    printf("Year is leap year");
}
else {
    printf("Year is not a leap year");
}

return 0;
}