#include<stdio.h>//�ó���Ĺ����ǽ���һ��������Ȼ�󽫵�i��Ԫ�ظ�ֵ��e����e���س��� 
typedef int Elemtype;
typedef struct Node
{
	Elemtype data;
	struct Node *next;
	
}Node;
typedef struct Node *Linklist;
int Getglem(Linklist *L;int i;Elemtype *e)
{
	Linklist *p;//����һ��ָ��ָ��ͷ�ڵ� 
	p=L->next;
	int j=1;//���� 
	while(p&&j<1)
	{
		p=p->next;
		j++;
	}
	if(!p||j>i)
	return error;
	*e=p->data;
	return ok;	
 } 
 

