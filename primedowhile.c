#include<stdio.h>   
main()  
{  
    int i,m=2,n=1;  
    printf("Enter a number:");  
    scanf("%d", &i);  
	do
    {  
        if(i%m==0)  
        {  
            n=0;  
            break;  
        }  
        m++;  
    }while(m<i);  
  
    if(n) 
    {
	printf("%d is prime number\n", i);  
	}	
    else
	{
    printf("%d is not prime number\n",i);  
	}	
  

}  