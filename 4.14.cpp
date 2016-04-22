#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,l[15];
bool h[10000];
bool is_triangle(int a,int b,int c)
{
return !h[a*100 + b] && a && b && c && a+b>c&& a+c>b && b+c>a && (h[a*100+b]=true);
}
int dfs(int index,int a,int b,int c){
    if(index==n)
    {
    return a<b && b<c && is_triangle(a,b,c);
    }
    return dfs(index+1,a+l[index],b,c)+dfs(index+1,a,b+l[index],c)+dfs(index+1,a,b,c+l[index]);

}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
    	scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
    scanf("%d",&l[i]);
    }
    memset(h,0,sizeof(h));
    printf("%d\n",dfs(0,0,0,0));
    
    }
    
    return 0;

}
