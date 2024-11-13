
#include<stdio.h>
#define SIZE 2

struct student{

int sid;
char sname[20];
};


int main(){

struct student s,*p;
int i;
//for(i = 0;i < SIZE;i++){
printf("STUDENT ID: ");
scanf("%d",&s.sid);
printf("STUDENT NAME: ");
scanf("%s",s.sname);
//}
p = &s;

printf("STUDENT DETAILES BOMBAMMM ‍‍\n");
//for(i = 0;i < SIZE;i++){
printf("STUDENT ID : %d\nSTUDENT NAME: %s\n",p->sid,p->sname);
//}

return 0;
}

