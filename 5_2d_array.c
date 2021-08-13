
#include<stdio.h>
void main()
{
	int r,c;
	printf("enter the row and column size\n");
	scanf("%d%d",&r,&c);
	int arr1[r][c],arr2[r][c],add[r][c];
	
	
	printf("enter the 1st matrix\n");
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the 2nd matrix\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("matrix 1: \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("matrix 2: \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",arr2[i][j]);
		}
		printf("\n");
	}
	
	int (*ptr1)[c] = arr1;
    int (*ptr2)[c] = arr2;
    int (*padd)[c] = add;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			padd[i][j]=ptr1[i][j]+ptr2[i][j];
		}
	}
	
	printf("addition is: \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",padd[i][j]);
		}
		printf("\n");
	}
}


//
enter the row and column size
2
2
enter the 1st matrix
1
2
3
4
enter the 2nd matrix
5
6
7
8
matrix 1: 
12
34
matrix 2:
56
78
addition is:
6 8
10 12

	