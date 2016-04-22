#include<stdio.h>
int main()
{
	double i;
	double n;
	double m=0.000;
//	double k;
	 
	scanf("%lf",&n);
	for(i=1;i<n+1;i++)
	{
		m+=(1/i);
				
	}
	printf("%.3lf",m);
	return 0;
	
}
