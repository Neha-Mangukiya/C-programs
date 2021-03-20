//Write a Program of find the element of given position from the array......
#include<stdio.h>
main()
{
	int a[5],i,j,temp,n,p;
	for(i=0;i<5;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n \t a[%d]=%d",i,a[i]);
	}
		printf("\n enter the num:");
		scanf("%d",&n);
	for(i=0;i<5;i++){
	if(a[i]==n){
	p=i;
}
}
	printf("\n position of n=%d",p);
	
}
