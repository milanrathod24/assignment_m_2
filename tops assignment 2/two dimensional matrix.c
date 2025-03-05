#include<stdio.h>
main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3];
	int r, c;
	
	
	
	printf("\n\n\t Matrix-1----------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter Matrix [%d][%d]: ", r, c);
			scanf(" %d",&mat1[r][c]);
			
		}
		printf("\n");
	}
		printf("\n\n\t Matrix-2----------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter Matrix [%d][%d]: ", r, c);
			scanf(" %d",&mat2[r][c]);
			
		}
		printf("\n");
	}
	
	printf("\n\n\t Matrix-1----------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d", mat1[r][c]);
		
		}
		printf("\n");
	}
	
		printf("\n\n\t Matrix-2----------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d", mat2[r][c]);
		
		}
		printf("\n");
	}
	
		printf("\n\n\t Addition----------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			mat3[r][c]=mat1[r][c]-mat2[r][c];
			printf(" %d", mat3[r][c]);
		
		}
		printf("\n");
	}
	
}
