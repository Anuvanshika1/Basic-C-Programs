// according to the georgian calendar,it was monday on the day 01/01/01. if any year is input through the keyword write a program to find out what is the day on 1st january of this year.

#include <stdio.h>

int main() {
int y,ly=0,yearn,days=0; // y is just a counter
int day_index;
printf("Enter the year: ");
scanf("%d",&yearn);

for(y=1;y<yearn;y++)   // y<yearn it will take the years less than the value we had given starting from 1
// y=1 is the first year not year 2001 but year 1 
{
    ly=(y%4==0 && y%100 !=0)||(y%400==0);  // this will be me either 1 or 0 if its a leap year or not so, if its a leap year it will return 1 
    days=days+((ly==1)?366:365); // we used turnary operator we can also write if else statement here 
    // calculate the number of days from year 1 to the year -> yearn-1 that is the year we had given 1 less than that because we need total days from all the previous days including leap years
    
}

day_index=(days+1)%7;  // calculate day_index from total number of days it will help to decide the targetted day 
// so , in for loop we have years 1 less  but we need 1st january date so we need to add 1 more day to get that day
// find the reminder which will give the day_index of the particular day
switch(day_index)
{
    case 0: // we started with 0 because 7%7 =0, so it will be sunday also , we started from 01-01-01 that is monday of 2001 year, and the day is 01, so 00 will be sunday
    printf("1st january of the year %d is a Sunday.\n",year);
    break;
     case 1:
    printf("1st january of the year %d is a Monday.\n",year);
    break;
     case 2:
    printf("1st january of the year %d is a Tuesday.\n",year);
    break;
     case 3:
    printf("1st january of the year %d is a Wednesday.\n",year);
    break;
     case 4:
    printf("1st january of the year %d is a Thursday.\n",year);
    break;
     case 5:
    printf("1st january of the year %d is a Friday.\n",year);
    break;
     case 6:
    printf("1st january of the year %d is a Saturday.\n",year);
    break;
    
}
return 0;
}
