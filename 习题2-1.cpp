#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b=5,i,c=1;
	int count=1;
	cin>>a;
	for(i=10;b>0;i=pow(i,c))
	{
		b=a/i;
		c+=1;
		count++;
		
	}
	cout<<c<<endl;

	return 0;
	
/*	int n,count=0;
	cin>>n;
	while(n>0)
	{
		count++;
		n=n/10;
	 }
	 cout<<count<<endl;
	 return 0;
	 */
 } 
