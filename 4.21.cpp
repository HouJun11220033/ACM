#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

static int a=1;//ȫ�ֳ�ʼ���� 
int b=2;//ȫ�ֳ�ʼ���� 
char *p;//ȫ��δ��ʼ���� 
char *p2;//ȫ��δ��ʼ���� 
int *p3;//ȫ��δ��ʼ���� 
int *p4;//ȫ��δ��ʼ���� 
char *p5={"555555555"};//ȫ�ֳ�ʼ���� 
char *str = (char *)malloc(100*sizeof(char));
//while(*(a[i]+i)!='\0');

int main(){
    static int c=3;
    int d=4;//�ڴ�ջ
    int e=7;//�ڴ�ջ
    
    char *p6={"555555555"};
    p=(char*)malloc(sizeof(char)*10);//�ڴ��
    p2=(char*)malloc(sizeof(char)*10);//�ڴ��
    p3=(int*)malloc(sizeof(int));//�ڴ��
    p4=(int*)malloc(sizeof(int)*10);//
    for(int i=0;i<=9;i++)p4[i]=0x1;


    *p3=0x123;
    strcpy(p,"123456789");//���ֳ�����
    strcpy(p2,"987654321");
    strcpy(p2,"123456789");
}
