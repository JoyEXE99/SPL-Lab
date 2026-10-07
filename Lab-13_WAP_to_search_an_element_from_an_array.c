#include<stdio.h>
int main(){
int i,n,item;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("Search item:");
scanf("%d",&item);
printf("%d",item);
for(i=0;i<n;i++){
	if(item==a[i])
		printf("\n%d is in position %d",item,i+1);		
}
return 0;
}