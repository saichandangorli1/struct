

#include<stdio.h>
#define SIZE 2

struct student{

int sid;
char sname[20];
}s[SIZE],*p[SIZE];


int main(){

int i;
for(i = 0;i < SIZE;i++){
printf("STUDENT ID: ");
scanf("%d",&s[i].sid);
printf("STUDENT NAME: ");
scanf("%s",s[i].sname);
p[i] = &s[i];
}
printf("STUDENT DETAILES BOMBAMMM ‍‍\n");


for(i = 0;i < SIZE;i++){
printf("STUDENT ID : %d\nSTUDENT NAME: %s\n",p[i]->sid,p[i]->sname);
}

return 0;
}

