#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
	if(j>=1+i-1&&j<=2*n-1-(i-1))
	
		{
			printf("%d ",n-(i-1));
			}	
			else
			{
				printf("%d ",n);
			}
		}
		printf("\n");
		
	}
	for(i=n+1;i<=2*n-1;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
	if(j>=1+i-1-n&&j<=2*n-1-(i-1)-n)
	
		{
			printf("%d ",n+(i-1));
			}	
			else
			{
				printf("%d ",n);
			}
		}
		printf("\n");
		
	}
//	3 3 3 3 3
//	3 2 2 2 3
//	3 2 1 2 3
//	3 2 2 2 3
//	3 3 3 3 3
}
