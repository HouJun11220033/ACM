#include <stdio.h>
using namespace std;
int main()
{
	char buff[100];
	int a;
	scanf("%d",&a);
	int b;
	b=sprintf(buff,"%d",a);
	printf("%d\n",b);
	
	return 0;
}
