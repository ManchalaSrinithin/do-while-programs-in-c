#include<stdio.h>
main()
{
	int n,rev=0,rem;
	printf("Enter n value:");
	scanf("%d",&n);
	do
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}while(n!=0);
	printf("reverse of that number=%d",rev);

}