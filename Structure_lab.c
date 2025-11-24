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
