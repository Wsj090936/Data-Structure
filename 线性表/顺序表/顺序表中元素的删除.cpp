#include<stdio.h>
#define maxsize 20
typedef int Elemtype;
typedef  struct
{
 Elemtype data[maxsize];
 int length;
}sqlist;
int ListDelete(sqlist *L,int i,Elemtype *e)//ɾ�������еĵ�i��Ԫ�� ,������e��������ֵ 
{
	if(L->length==0)//����ĳ���Ϊ0�Ļ����޷�ɾ���� 
	return error;
	if(i<0)//������û���Ը���Ϊ�±� 
	return error;
	*e=L->data[i-1];
	for(;i>=0&&i<L->length;i++)
	{
		*e=L->data[i-1];
		L->data[i-1]=L->data[i];//��i�����ÿһλԪ��ǰ�� 
		if(L->data[i+1]==NULL)
		{
			*e=L->data[i-1];
			L->data[i+1]==NULL;//��ɾ���������һλԪ�أ�ֱ������Ϊ�� 
		}
		
	}
	L->length--;//�����ȼ�һ 
	return OK;	
 } 
