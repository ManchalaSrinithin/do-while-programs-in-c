#include <stdio.h>
main() 
{
	
	int a,i,j=1,x=0;
	printf("Input number of lines: ");
	scanf("%d", &a);
	i=1;
   do
	{
		printf("%d %d %d\n", i,i*i,i*i*i);
		i++;
	}while(i<=a);
	
}