#include<stdio.h>
#define ok    1
#define error 0 
#define maxsize 20
typedef int Elemtype;
typedef  struct
{
 Elemtype data[maxsize];
 int length;
}sqlist;
int Listinsert{sqList *L,int i,int e} //在第i个元素之前插入元素e 
{
	int k=L->length;
	if(i==L->length)//表示链表已满，无法插入 
	return error;
	if(i<0||i>L->length) //表示i不在该范围内
	return error;
	while(i>=0&&i<=L->length&&k>=i)
	{
		L->data[i-1]=L->data[i];
		k--;//当K小于i时证明已经找到位置 
	}
	L->data[i]=e;
	L->length++;
	return ok;
	
	
	
}
