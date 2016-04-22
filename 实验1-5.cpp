#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,e;
	double D;
	double sum;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&e);
	if((a*b*c*e)>0)
	{
		sum=pow(a-c,2)+pow(b-e,2);
		D=sqrt(sum);
		printf("%lf",D);
		
	}else
	{
		printf("Error!");
	}
	
	return 0;
	
}
