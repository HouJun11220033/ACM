#include<stdio.h>
int main()
{
	//int a[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j;
	int M,N,T;
	scanf("%d %d %d",&M,&N,&T);
	int b[M][N];
	//int flag=0;
	printf("Before:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&b[i][j]);
		}
	//	scanf("%d ",b[M][]);
	//	printf("\n"); 
		
	}
//	while(T=0)    等于是：==！！！！！ 
	//{
		for(int m=M-1;m>=0;m--)
		{
			for(int n=0;n<N;n++)
			{
				printf("%d ",b[m][n]);
			}
			printf("\n");
		}
//	}
//	 else{
//	 	
//	printf("明天再搞！");
//	}
	
	//printf("After-UP and DOWN:\n");
	/*for(i=;i>=0;i--)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]); 
		
		}
		printf("\n");
		 
	}*/
/*	printf("After-LEFT and Right:\n");
	for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--){
			printf("%d ",a[i][j]);
		
		
		}
		printf("\n");
	}
	*/
	
	
	
	return 0;
 } 
