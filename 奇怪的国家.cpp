//#include<stdio.h>
//#include<string.h>
//#define N 50
//int main(){
//
//	char a[N];
//	char b[N];
//	int m,n;
//	scanf("%s",&a[N]);
//
//	scanf("%s",&b[N]);
//	m=sizeof(a);
//	n=strlen(a);
//	printf("%d%d\n",m,n);
//	for(int i=0;i<m;i++)
//	{
//	printf("%s",a[i]);
//
//	}
//
//	return 0;
//
//}
#include<stdio.h>
#include<string.h>
int main() {
	char a[50], b[50], c[50];
	int i, j;
	int na, nb;

	scanf("%s", a);
	scanf("%s", b);
	na = strlen(a);
	nb = strlen(b);
	if(na < 1 || na > 50 || nb < 1 || nb > 50 || na != nb)
		return 0;
	i = 0;
	while(i < na) {
		if(a[i] == b[i])
			c[i] = '1';
		else
			c[i] = '0';
		i++;
	}
	for(i = 0; i < na; i++)
		printf("%c", c[i]);

	return 0;
}

