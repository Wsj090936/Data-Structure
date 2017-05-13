#include<stdio.h>
#define maxsize 20
typedef int Elemtype;
typedef  struct
{
 Elemtype data[maxsize];
 int length;
}sqlist;
int ListDelete(sqlist *L,int i,Elemtype *e)//删除链表中的第i个元素 ,并且用e返回他的值 
{
	if(L->length==0)//链表的长度为0的话就无法删除了 
	return error;
	if(i<0)//链表中没有以负数为下标 
	return error;
	*e=L->data[i-1];
	for(;i>=0&&i<L->length;i++)
	{
		*e=L->data[i-1];
		L->data[i-1]=L->data[i];//将i后面的每一位元素前移 
		if(L->data[i+1]==NULL)
		{
			*e=L->data[i-1];
			L->data[i+1]==NULL;//若删除的是最后一位元素，直接令其为空 
		}
		
	}
	L->length--;//链表长度减一 
	return OK;	
 } 
