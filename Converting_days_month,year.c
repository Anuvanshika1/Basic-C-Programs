#include <stdio.h>

int main() {
	int d,m,y,D,Y;
	printf("Enter the number of days: ");
	scanf("%d",&d);
	y=d/360; // this will give us the number of years
	Y=d%360; // this will us the number of months
	m=Y/30; // this will give us number of months
	D=Y%30; // this will give us remaining days
	printf("Number of years:%d, number of months: %d,number of days remaining:%d",y,m,D);
	return 0;

}

