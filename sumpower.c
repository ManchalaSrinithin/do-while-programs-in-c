#include<stdio.h>//for loop x power
#include<math.h>
main()
{
	int i=1,x,n,sum;
	printf("Enter any value:");
	scanf("%d",&n);
	printf("Enter x value");
	scanf("%d",&x);
	for(sum=0;i<=n;i++)
	{
		sum=sum+pow(x,i)/i;
	}
	printf("sum=%d",sum);
	
}