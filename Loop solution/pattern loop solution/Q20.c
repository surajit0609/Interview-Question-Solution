#include<stdio.h>
int main()
{
	int i,j,n;

	for(i=1;i<=5;i++){
		for(j=1;j<=4;j++){
		
			if((j==2&&i>=2&&i<=4)||(j==3&&i>=2&&i<=4))
				printf(" ");
				else
				printf("*");
			
		}
		printf("\n");
	}
	return 0;
	}
