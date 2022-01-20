#include<stdio.h>
int main()
{
	int i,j,n;
	int sum=0;
	int even=0,odd=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
			sum =sum+1;
			if(sum%2==0)
			printf("%d ",even);
			else
			printf("%d ",odd);
			
		}
		printf("\n");
	}
	return 0;
}
