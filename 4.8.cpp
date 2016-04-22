#include<stdio.h>
int main()
{
	int M,N,T;
	int i,j;
	int m,n;
	
	int a[200][200];
	scanf("%d%d%d",&M,&N,&T);
	//scanf("%d",&T);
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
	
			scanf("%d",&a[i][j]);
		} 
	}
	
	if(T=0)
	{
		for(i=0;i<M;i++)
		{
			for(j=N-1;j>=0;j--)
			{
			printf("%d ",a[i][j]);	
			}
			printf(" ");
			printf("\n");
		}
	
	
	}else{
	
	for(m=M-1;m>=0;m--)
		{
			for(n=0;n<N;n++)
			{
			printf("%d ",a[m][n]);	
			}
			printf(" ");
			printf("\n");
		}
	}
		return 0;
	
 } 
