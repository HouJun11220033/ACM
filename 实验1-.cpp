#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int Csin,Ccos;
	scanf("%d",&n);
	if(n<360)
	{
		Csin=sin(n);
		Ccos=cos(n);
	}else
	printf("Error!");
	
	
	return 0;
	
}

