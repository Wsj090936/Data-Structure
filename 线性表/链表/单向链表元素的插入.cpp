#include<stdio.h>//在第i个元素之前插入新元素e 
typedef int Elemtype;
typedef struct Node
{
	Elemtype data;
	struct Node *next;
}Node;
typedef struct Node *Linklist;
void Listinsert(Linklist *L,int i,Elemtype e)
{
	int j=1;
	Linklist p,s;
	p=*L
	while(p&&j<i)//查找目标节点i结点的前驱结点 
	{
		p=p->next;
		j++
	}
	if(!p||j>i)
	return error;
	s=(Linklist)malloc(sizeof(Node));//为结点s申请空间
	s->data=e;
	s->next=p->next;//插入s 
	p->next=s; 
	return ok;	
}
void Listdelete(Linklist *L,int i,Elemtype e)
{
	int j=1
	Linklist p;
	p=*L;
	while(p&&j<i)
	{
		p=p->next;
		j++
	}
	if(!p||j>i)
	return error;
	p->next=p->next->next;
	e=p->next->data;
	free(p->next);
	return ok;
}
