
#include<stdio.h>
#define SIZE 2

struct student{

int sid;
char sname[20];
int marks[3];
}s[SIZE];


int main(){

int i,j;
for(i = 0;i < SIZE;i++){
printf("STUDENT ID: ");
scanf("%d",&s[i].sid);
printf("STUDENT NAME: ");
scanf("%s",s[i].sname);
for(j = 0;j < 3;j++){
	printf("STUDENT MARKS OF %d SUBJECT: ",j+1);
scanf("%d",&s[i].marks[j]);
}
}

printf("STUDENT DETAILES BOMBAMMM ‍‍\n");
for(i = 0;i < SIZE;i++){
printf("STUDENT ID : %d\nSTUDENT NAME: %s\n",s[i].sid,s[i].sname);
for(j = 0;j < 3;j++){
	printf("STUDENT MARKS: %d SUBJECT: %d\n",j+1,s[i].marks[j]);
}
}

return 0;
}

