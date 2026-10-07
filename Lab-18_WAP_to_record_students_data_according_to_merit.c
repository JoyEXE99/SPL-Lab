#include<stdio.h>
typedef struct {
int roll;
float sub[3],total;
}exam;
int main (){
exam student[3],aux;
int r,c;
for(r=0;r<3;r++){
printf("Enter roll:");
scanf ("%d",&student[r].roll);
printf("Enter Marks:");
student[r].total=0;
for(c=0;c<3;c++){
scanf("%f",&student[r].sub[c]);
student[r].total+=student[r].sub[c];}
}
for(r=1;r<3;r++){
for(c=0;c<3-r;c++){
if(student[c].total<student[c+1].total){
aux=student[c];
student[c]=student[c+1];
student[c+1]=aux;}
}}
printf("\n	RESULT\n");
printf("Position Roll	  marks\n");
for(r=0;r<3;r++)
printf("\n %d  	 %d 	   %.2f",r+1,student[r].roll,student[r].total);
return 0;
}