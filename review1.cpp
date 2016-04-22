#include<stdio.h>
#define N 6
void bubblesort(int [],int);//!!!!!?????
int main()
{
	 int array[N]={7,4,-2,19,13,6};
	 int i;
	 printf("Before:\n");
	 for(i=0;i<N;i++)
	 {
	 	printf("%d",array[i]);
	 
	 }
	 bubblesort(array,N);
	 printf("After:\n");
	 return 0;
	
}
void bubblesort(int array[],int num)//numÊÇĞÎ²Î 
{
	int i,j;
	int temp;
	for(i=0;i<num-1;i++){
		for(j=0;j<num-i-1;j++)
		{
		
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			
			}
			
		}
		
	}

}

