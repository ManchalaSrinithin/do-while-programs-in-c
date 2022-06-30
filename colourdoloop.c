#include<stdio.h>
main()
{
	int cho;
	char ch;
	do
	{
	printf("Choose any option among rainbow colours: ");
	printf("\no-orange");
	printf("\nv-violet");
	printf("\ni-indigo");
	printf("\nb-blue");
	printf("\ng-green");
	printf("\ny-yellow");
	printf("\nr-red");
	printf("\nEnter the colour:");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'o':
		printf("\nOrange colour");
		break;
		case 'v':
		printf("\nviolet colour");
		break;
		case 'i':
		printf("\nIndigo colour");
		break;
		case 'b':
		printf("\nblue colour");
		break;
		case 'g':
		printf("\ngreen colour");
		break;
		case 'y':
		printf("\nyellow colour");
		break;
		case 'r':
		printf("\nred colour");
		break;
		default:
		printf("\n choose the correct option");
		break;
		
	}
	printf("\nEnter 4 to continue:");
	scanf("%d",&cho);
	}while(cho==4);
}