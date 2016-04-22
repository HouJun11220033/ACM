#include<stdio.h>
int main()
{
	int M,N,T;
	int sum=0;
	int a[][];
	scanf("%d %d %d",&M,&N,&T);
	for(int i=0;i<M;i++)
	{
		for(int j=0;j+i<N;j++){
			sum=j+i;
			printf("%d\n",sum);
		}
	}
	return 0;
}
