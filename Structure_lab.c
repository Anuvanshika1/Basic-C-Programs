/* Write a C program that uses functions to perform the following operations:
a. Reading a complex number. 
b. Writing a complex number. 
c. Addition and subtraction of two complex numbers
*/

#include <stdio.h>

// structure to store complex number
struct complex {
    float real;
    float imag;
};
// function to read a complex number
struct complex readcomplex() {
    struct complex c; // using structure variable c that will return the real and imaginary values to the main structure
    printf("Enter the value of real and imaginary part: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

// function to write a complex number
void write_complex(struct complex c) {
    printf("%.2f + %.2fi", c.real, c.imag);
}

// function to add two complex numbers
struct complex sum(struct complex c1, struct complex c2) {
    struct complex result_sum; // using variable name result_sum that will store the real and imaginary part sum for the two structures
    result_sum.real = c1.real + c2.real;
    result_sum.imag = c1.imag + c2.imag;
    return result_sum;
}

// function to subtract two complex numbers
struct complex sub(struct complex c1, struct complex c2) {
    struct complex result_sub; // using variable name result_sub that will store the real and imaginary part for the two structures for doing the subtraction and putting them in one structure result_sub
    result_sub.real = c1.real - c2.real;
    result_sub.imag = c1.imag - c2.imag;
    return result_sub;
}

int main() {
    /*We first create structure variables c1 and c2 to store 
   the two complex numbers entered by the user.
   We also create resum and resub to store the results of 
   addition and subtraction.*/
    struct complex c1, c2, resum, resub;
/* We call the readComplex() function twice.
   - The first call stores the first complex number in c1.
   - The second call stores the second complex number in c2.
   Since readComplex() returns a structure, we directly assign it to c1 and c2.*/
   
    printf("Enter first complex number\n");
    c1 = readcomplex();

    printf("Enter second complex number\n");
    c2 = readcomplex();
/*Then we call the add() function and pass c1 and c2 as arguments.
   The add() function returns a structure containing the sum, 
   which we store in resum.*/
    resum = sum(c1, c2);
    resub = sub(c1, c2);

    printf("\nAddition: ");
    write_complex(resum);

    printf("\nSubtraction: ");
    write_complex(resub);

    return 0;
}


// Wap to compute the monthly pay of 100 employees using each employees name, basic pay. the DA is computed as 52% of the basic pay. gross salary(basic pay+DA). print the employees name and gross salary.
/*
#include <stdio.h>
struct pay{
    char name[25];
    float basic_pay;
};
void cal_salary(struct pay e[],int n)
{
    int i;
    float da;
    float gs;
    for(i=0;i<n;i++)
    {
        da=((e[i].basic_pay)*52)/100;
         gs=(e[i].basic_pay)+da;
        printf("The DA and gross salary of the employee %d is: %.2f, %.2f\n",i+1,da,gs);
    }
    
}
int main(){
    struct pay e[3];
    int i,n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the name and monthly pay of employee %d: ",i+1);
        scanf("%s %f",e[i].name,&e[i].basic_pay);
    }
    cal_salary(e,n);
    return 0;
}
*/

// create a book structure contaning book_id,title,author name and price. wap to pass a structure as a function argument and print the book details.

#include<stdio.h>
#include<string.h>
struct book{
    int book_id;
    char title[50];
    char author[50];
    float price;
} b1;
void books(struct book b1){
    printf("The book id is %d\n, book title is %s\n,book author name is %s\n and the price is %.2f\n",b1.book_id,b1.title,b1.author,b1.price);
   
}
int main(){
  printf("Enter the book id: \n");
  scanf("%d",&b1.book_id);
  getchar();
  printf("Enter the book title: \n");
  fgets(b1.title, sizeof(b1.title), stdin);
  b1.author[strcspn(b1.author, "\n")] = '\0';
  printf("Enter the book author: \n");
  scanf("%s",b1.author);
  printf("Enter the book id: \n");
  scanf("%f",&b1.price);
  books(b1);
  return 0;
}

/*Create a union contaning 6 string: name, home_address, hostel_address,city,state and zip. Write a c program to display your present address.*/
#include <stdio.h>

union Address{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main(){
    union Address addr;

    printf("Enter your present address: ");
    scanf("%s", addr.home_address);
    printf("\nYour Present Address is: %s\n", addr.home_address);

    return 0;
}
