#include<stdio.h>
main()
{
	int i=1;
	printf("\n\n\t using while loop: ");
	while(i<=10)
	{
		printf(" %d",i);
		i++;
		
	}
	printf("\n");
	
	printf("\n\n\t using for loop: ");
	for(i=1;i<=10;i++)
	{
		printf(" %d",i);
		
	}
	printf("\n");
	

	printf("\n\n\t using for do-whileloop: ");
	int j=1;
	
	do
	{
	    printf(" %d",j);
		j++;
	}
	while(j<=10);
	printf("\n");
	
		
}
