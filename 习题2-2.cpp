#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	int Y;
	int l;
	int D;
	int i;
//	cin>>D;
	
	
//	cout<<a<<endl<<b<<endl<<c<<endl;
	for(D=100;D<999;D++)
	{
		a=D/100;
		b=(D/10)%10;
		c=D%10;
		
	//	cout<<D<<endl;
		
		
		if(D==a*a*a+b*b*b+c*c*c)
		{
			
			cout<<D<<endl;
		}
	}

	return 0;
	
	
}






