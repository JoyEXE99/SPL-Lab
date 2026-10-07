#include<stdio.h>
int main(){
float length,width,perimeter,area;
scanf("%f %f",&length,&width);
perimeter= 2*(length + width) ;
area=length * width ;
printf("Area and perimeter of the rectangle is,\nArea=%.3f	Perimeter=%.3f",area,perimeter) ;
return 0;
}