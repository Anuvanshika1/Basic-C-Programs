//DAY 12
//Question 23
//Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled.
#include <stdio.h>

int main() {
    int d,f,first,g,h;
    printf("Enter the number of days a book is late: ");
    scanf("%d",&d);
    first=5;  // first 5 days
    g=first+5;  //next 5 days
    h=g+20;// next 20 days
    
    if(d <=5)
    { f=d*2;  //fine for 5 days or less late
    printf("Fine for %d days late book is Rs %d",d,f);
    }
    else if((d<=g) && (d>=first))
    {
        f=(5*2)+(d-5)*4;
        printf("Fine for %d days late book is Rs %d",d,f);
    }
    else if((d<=h) && (d>=g))
    {
         f=(5*2) + (5*4)+(d-10)*6;
        printf("Fine for %d days late book is Rs %d",d,f);
    }
    else {
        printf("Book hasn't been returned for more than 30 days, MMEMBERSHIP CANCELLED");
    }

    return 0;
}




// Write a program to calculate electricity bill based on units consumed with these
// rates:
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above at ₹12/unit
 #include <stdio.h>

int main() {
    int u,bill,fst,g,h;
    printf("Enter the number of units consumed : ");
    scanf("%d",&u);
    fst=100;  // first 100 units
    g=fst+100;  //next 100 units
    h=g+100;// next 100 units
    
    if(u <=100)
    { bill=u*5;  //bill for 100 units consumed
    printf("Fine for 100 units is %d",bill);
    }
    else if((u<=g) && (u>=fst))
    {
        bill=(100*5)+(u-100)*7;
        printf("Fine for next 100 units is %d",bill);
    }
    else if((u<=h) && (u>=g))
    {
         bill=(100*5)+(100*7)+(u-200)*10;
        printf("Fine for nexts 100 units is %d",bill);
    }
    else if (u>h)
    {
        bill=(100*5)+(100*7)+(100*10)+(u-300)*12;
        printf("Bill consumed for above 300 units is %d",bill);
    }

return 0;
}