#include<stdio.h>
main()
{
	int i=1,m;
	printf("\nEnter m  value:");
	scanf("%d",&m);
	do
	{
		printf("\ni=%d",i);
		i++;
	}while(i<=m);
}