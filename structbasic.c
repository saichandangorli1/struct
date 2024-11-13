#include<stdio.h>

struct book{

int bookid;
char bname[20];
float price;
}b1;


int main(){

printf("BOOK ID: ");
scanf("%d",&b1.bookid);
printf("BOOK NAME: ");
scanf("%s",b1.bname);
printf("BOOK PRICE: ");
scanf("%f",&b1.price);

printf("BOOK ID : %d\nBOOK NAME: %s\nBOOK PRICE: %.2f",b1.bookid,b1.bname,b1.price);


return 0;
}
