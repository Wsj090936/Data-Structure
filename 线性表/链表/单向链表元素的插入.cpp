#include<stdio.h>//�ڵ�i��Ԫ��֮ǰ������Ԫ��e 
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
	while(p&&j<i)//����Ŀ��ڵ�i����ǰ����� 
	{
		p=p->next;
		j++
	}
	if(!p||j>i)
	return error;
	s=(Linklist)malloc(sizeof(Node));//Ϊ���s����ռ�
	s->data=e;
	s->next=p->next;//����s 
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
