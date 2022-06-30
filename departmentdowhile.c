#include<stdio.h>
main()
{
	int d,ne,sal,cd;
	do
	{
	printf("\nEnter 1 for CSE");
	printf("\nEnter 2 for ECE");
	printf("\nEnter 3 for EEE");
	printf("\nEnter 4 for Civil");
	printf("\nEnter your department:");
	scanf("%d",&d);
	switch (d)
	{
		case 1:
		printf("\nEnter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in CSE department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("\ncse-Total salary of the employees:%d",sal);
		break;
		case 2:
		printf("\nEnter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in ECE department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("\nECE-Total salary of the employees:%d",sal);
		break;
		case 3:
		printf("\nEnter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in EEE department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("\nEEE-Total salary of the employees:%d",sal);
		break;
		case 4:
		printf("\nEnter No of Employees:");
		scanf("%d",&ne);
		printf("\nSalary of a person in Civil Department:");
		scanf("%d",&sal);
		sal=sal*ne;
		printf("\nCivil-Total salary of the employees:%d",sal);
		break;
		
		
	}
	printf("Enter 10 to continue..:");
	scanf("%d",&cd);
	}while(cd==10);
}