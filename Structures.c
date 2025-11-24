/* Structures */

// Create a structure student with members: name, roll, and marks.
// Take input for 3 students and display the data.
/* 
#include <stdio.h>
struct student {
    char name[25];
    int roll;
    float marks;
};
struct student s1={"Anu",123,90.9};
struct student s2={"Avni",234,98};
struct student s3={"raj",546,89};
int main() {
    printf("The name,roll number and marks of student 1 are:%s,%d,%.2f\n",s1.name,s1.roll,s1.marks);
    printf("The name,roll number and marks of student 2 are:%s,%d,%.2f\n",s2.name,s2.roll,s2.marks);
    printf("The name,roll number and marks of student 3 are:%s,%d,%.2f\n",s3.name,s3.roll,s3.marks);

    return 0;
}
*/

// Create a structure employee with fields: emp_id, name, salary.
//Write a program to input details of 5 employees and print only those whose salary is above 30,000.
/*
#include <stdio.h>
typedef struct employee {
    int emp_id;
    char name[24];
    float salary;
} emp;

void Salary(emp e[]) {
    int i;
    printf("Employees with salary greater than 30000:\n");
    for(i = 0; i < 5; i++) {
        if(e[i].salary > 30000) {
            printf("ID: %d, Name: %s, Salary: %.2f\n",
                   e[i].emp_id, e[i].name, e[i].salary);
        }
    }
}

int main() {
    emp e[5];   // passing the array one time of how many employees we need the data 
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter emp_id, name, salary for employee %d:\n", i+1);
        scanf("%d %s %f", &e[i].emp_id, e[i].name, &e[i].salary);
    }

  Salary(e);   

    return 0;
}
*/

/*Define a structure point with x and y.
Take input for two points and calculate the distance between them:
*/
/*
#include <stdio.h>
#include <math.h>

struct distance
{ 
    float x;
    float y;
}d1,d2,di;
int main(){
    float dis;
    
    printf("Enter the value for first points d1.x and d1.y: ");
    scanf("%f %f",&d1.x,&d1.y);
    printf("Enter the value for first points d2.x and d2.y: ");
    scanf("%f %f",&d2.x,&d2.y);
    
    di.x=d2.x-d1.x; // putting the x2-x1 value in di.x
    di.y=d2.y-d1.y; // putting the y2-y1 value in di.y
    
    // distance formula that needs to be calculated and storing it to another variable dis
    dis=sqrt((pow(di.x,2))+(pow(di.y,2)));
    
    printf("The distance between points is:%f",dis);
    return 0;
}

// in function 
#include <stdio.h>
#include <math.h>

struct distance
{ 
    float x;
    float y;
}d1,d2;

void dist(struct distance d1, struct distance d2)
{  
    float dis;
  
    float dx=d2.x-d1.x; // putting the x2-x1 value in di.x
    float dy=d2.y-d1.y; // putting the y2-y1 value in di.y
    
    // distance formula that needs to be calculated and storing it to another variable dis
    dis=sqrt((pow(dx,2))+(pow(dy,2)));
    
    printf("The distance between points is:%f",dis);
    
}
int main(){
    
    printf("Enter the value for first points d1.x and d1.y: ");
    scanf("%f %f",&d1.x,&d1.y);
    printf("Enter the value for first points d2.x and d2.y: ");
    scanf("%f %f",&d2.x,&d2.y);
   
    dist(d1,d2);
    
    return 0;
}
*/
// Create a structure complex with real and imag.
// Take two complex numbers and display their sum.
/*
#include<stdio.h>
struct complex{
    int real;
    int imag;
};
int main()
{
    struct complex n1={1,2};
    struct complex n2={3,4};
    struct complex sum;
    sum.real=n1.real+n2.real;
    sum.imag=n1.imag+n2.imag;
    printf("The sum of the complex numbers is: %d+%di\n",sum.real,sum.imag);
    return 0;
}
// with function
#include<stdio.h>
struct complex{
    float real;
    float imag;
} c1,c2;
void comp(struct complex c1,struct complex c2){
    struct complex s;
    s.real=c1.real+c2.real;
    s.imag=c1.imag+c2.imag;
    printf("The sum of the complex number is: %.2f+%.2fi",s.real,s.imag);
}

int main(){
    printf("Enter the values for the real and imaginary part for 1st number: ");
    scanf("%f %f",&c1.real,&c1.imag);
     printf("Enter the values for the real and imaginary part for 2nd number: ");
    scanf("%f %f",&c2.real,&c2.imag);
    comp(c1,c2);
    return 0;
    
}
*/

/*Structure player with name, matches, runs.
Find the player with the highest batting average:*/
#include<stdio.h>
struct player{
    char name[25];
    int matches;
    int run;
} p1,p2,p3;

void p(struct player p1,struct player p2,struct player p3)
{   
    float avg1,avg2,avg3;
    avg1=(float)p1.run/p1.matches;
    avg2=(float)p2.run/p2.matches;
    avg3=(float)p3.run/p3.matches;
    if(avg1 > avg2 && avg1 > avg3){
        printf("The highest batting average %f",avg1);
    }
    else if(avg2 > avg1 && avg2 > avg3){
        printf("The highest batting average %f",avg2);
    }
    else {
        printf("The highest batting average %f",avg3);
    }
    
}
int main()
{
    printf("Enter the name,matches,run of the player1: ");
    scanf("%s %d %d",p1.name,&p1.matches,&p1.run);
    printf("Enter the name,matches,run of the player2: ");
    scanf("%s %d %d",p2.name,&p2.matches,&p2.run);
    printf("Enter the name,matches,run of the player3: ");
    scanf("%s %d %d",p3.name,&p3.matches,&p3.run);
    p(p1,p2,p3);
    return 0;
}










