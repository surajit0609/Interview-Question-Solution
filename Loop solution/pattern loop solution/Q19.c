#include<stdio.h>
int main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
		printf("*");
		for(j=1;j<=2*n-2*i;j++){
			printf(" ");
		}
	for(j=1;j<=i;j++)
		printf("*");
	printf("\n");
	}
	
	for(i=1;i<=n-1;i++){
		for(j=n-1;j>=i;j--)
		printf("*");
		for(j=1;j<=2*i;j++){
			printf(" ");
		}
	for(j=n-1;j>=i;j--)
		printf("*");
	printf("\n");
	}
		

	return 0;
}
