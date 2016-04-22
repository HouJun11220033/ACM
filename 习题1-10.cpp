#include<stdio.h>
#include<math.h>
int main()
{//三个数中先判断最大值 
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
	
 
  int a,b,c,t;/* 三边设为a,b,c,t是用于交换的中间变量 */ 
  scanf("%d%d%d",&a,&b,&c);
  if(a<b) 
  {
   /* a中放a,b中较长边 */ 
   t=a;a=b;b=t; 
  }   
  if(a<c) 
  { 
   /* a中放a,b,c中的最长边 */
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


	
		
	
	

