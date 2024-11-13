
#include<stdio.h>
#define SIZE 2

struct employee{

int eid;
char ename[20];
}e[SIZE];

void display(struct employee obj){
printf("EMPLOYEE ID : %d\nEMPLOYEE NAME : %s\n",obj.eid,obj.ename);
}
int main(){

int i;
for(i = 0;i < SIZE;i++){
printf("EMPLOYEE ID: ");
scanf("%d",&e[i].eid);
printf("EMPLOYEE NAME: ");
scanf("%s",e[i].ename);
}



printf("EMPLOYEE DETAILES BOMBAMMM ‍‍\n");


for(i = 0;i < SIZE;i++){
display(e[i]);
}

return 0;
}
