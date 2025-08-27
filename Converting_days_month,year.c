// write a program to convert given number of days into years,remaining month and remaining days
#include <stdio.h>

int main() {
	int d,m,y,D,Y;
	printf("Enter the number of days: ");
	scanf("%d",&d);
	y=d/360; // this will give us the number of years
	Y=d%360; // this will us the number of days left after getting number of years
	m=Y/30; // this will give us number of months from the remaining number of days
	D=Y%30; // this will give us remaining days left after calculating number of months
	printf("Number of years:%d, number of months: %d,number of days remaining:%d",y,m,D);
	return 0;

}

