#include<stdio.h>
#include<math.h>
int main()
{//�����������ж����ֵ 
	/*int max(int x,int y);
	int a,b,c,d,l,m,n,sum;
	int G;
	scanf("%d%d%d",&a,&b,&c);
	d=max(max(a,b),c);//!!!!
	printf("Max is:%d",d);
	sum=a+b+c-d;
	G=pow(sum,2)-2*sum;
	if(G==pow(d,2))
	{
		printf("Yes!");
	}else
	{
		printf("No!");
	}
	
	
	
	return 0; 
	*/ 
	
 
  int a,b,c,t;/* ������Ϊa,b,c,t�����ڽ������м���� */ 
  scanf("%d%d%d",&a,&b,&c);
  if(a<b) 
  {
   /* a�з�a,b�нϳ��� */ 
   t=a;a=b;b=t; 
  }   
  if(a<c) 
  { 
   /* a�з�a,b,c�е���� */
   t=a; a=c; c=t;
  } 
  if(a*a==b*b+c*c)
   printf("Y\n");
  else 
   printf("N\n"); 
   return 0;
 }  
	
	
	
		
		
	
	

//int max(int x,int y)
//	{
	
//		return ((x>y)?x:y);
//	}


	
		
	
	

