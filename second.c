#include <stdio.h>

main()
{
	char qualification[20];
	char interStatus[20];
	printf("Enter your qualification BS/MS? ");
	scanf("%s",qualification);
	
	if(strcmp (qualification,"MS")==0)
	{
		printf("Have you passed the interview ?")
		if(strcmp(interStatus,"Yes")==0)
		{
			printf("You Are Hired\n");
		}
		else
		{
			printf("Not Hired. \n");
		}
	}
	else
	{
		printf("Not Eligible");
	}
}
