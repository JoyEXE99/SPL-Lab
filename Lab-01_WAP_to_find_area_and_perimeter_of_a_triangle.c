#include<stdio.h>
int main(){
float a,b,c,perimeter,area,s;
scanf("%f %f %f",&a,&b,&c);
perimeter= a+b+c;
s=perimeter/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));	
printf("Area and perimeter of the Triangle when three sides are given is,\nArea=%.3f	Perimeter=%.3f",area,perimeter) ;
return 0;
}