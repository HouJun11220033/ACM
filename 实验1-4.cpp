#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
	double n;
	double a,b;
	scanf("%lf",&n);
	if(n<360)
	{
		a=sin(n*PI/180);
		b=cos(n*PI/180);
		printf("%lf\n%lf",a,b);
	}else
	printf("Error!");
	
	
	return 0;
	
}

