#include<stdio.h>
#define N 10
int seqsearch(int,int [],int);//只写类型!!! 
int main()
{	int a[N]={6,3,2,5,1,4,8,0,7,9};
	int value,pos;
	int i;
	for(i=0;i<N;i++){
	printf("%d",a[i]);
	
	}
	printf("\n");
	printf("Please input:");
	scanf("%d",&value);
	pos=seqsearch(value,a,N);
	if(pos==-1)
	{
		printf("Failed!\n");
	
	
	}else{
	printf("Success!");
	printf("array[%d]=%d\n",pos,value);
	
	}
	
	return 0;
 } 
 
 int seqsearch(int value,int a[],int num)
 {
 	int i;
 	for(i=0;i<num;i++){
 		if(value==a[i])
 		return i;
	 }
	 return -1;//信号! 
 	
 }
