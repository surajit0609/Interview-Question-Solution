#include<stdio.h>
int main()
{
	int i,j,n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++)
		sum=sum+1;
		printf("%d",sum);
		for(j=1;j<i;j++){
			printf(" ");
		}
	for(j=1;j<=n;j++)
	sum=sum+1;
	printf("%d",sum);
	printf("\n");
	}
	return 0;
}
