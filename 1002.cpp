#include<stdio.h>
#include<string.h>
int main()
{
	//char a[][100]={'ling','yi','er','san','si','wu','liu','qi','ba','jiu','shi'};
	//char pinyin[11]={'ling','yi','er','san','si','wu','liu','qi','ba','jiu','shi'};
	char pinyin[][9]= {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char n[100];
	char s[100];
	int e[100];

	//scanf("%d",&n);
	gets(n);
	int sum=0,num=0;
	int count1=0;
	int count2=0;
	for(int i=1; count1<strlen(n); i++) {
		//sum+=(n/i)%10;
		sum=sum+n[i-1];
		count1++;


	}
	//printf("%d",sum);
//	printf("%d",temp);
	//s=char(sum);
	while(sum>10) {
		sum=sum/10;
		count2++;



	}
	//printf("%d",count2);
	//int j=10;
//	for(int k=0; k<count2; k++) {
//		
//		e[k]=sum%10;
//		sum=sum/10;
//		
//			printf("%s ",pinyin[e[k]]);
//			printf("%d",num);
//		printf("%d",k);
//		printf("%d",e[k]);
//	}
	int k=0;
	while(sum!=0){
		e[k]=sum%10;
		sum=sum/10;
		k++;
	
	
	}
	for(int h=0;h<count2;h++)
	{
		printf("%d",e[k]);
	}
	

//	int l;
//	for(l=k-1; l>=0; l--) {
//		printf(" %s",pinyin[a[l]]);
//	}
	return 0;

}
