#include<stdio.h>
main() 
{
    int n,i=1,sum = 0;
    float avg;
    printf("Enter any value: ");
    scanf("%d", &n);
    do
	{
        sum += i;
        ++i;
    }while(i<= n); 
	printf("Sum = %d", sum);
	avg=(float)sum/n;
	printf("\naverage of first %d=%f",n,avg);

}