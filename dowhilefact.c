#include<stdio.h>
main()
{
	int i=1,fact=1,n;
	printf("\nEnter n value");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;
	}while(i<=n);
	printf("\nfactorial=%d",fact);
}
