#include<stdio.h>//该程序的功能是建立一个单链表，然后将第i个元素赋值给e并用e返回出来 
typedef int Elemtype;
typedef struct Node
{
	Elemtype data;
	struct Node *next;
	
}Node;
typedef struct Node *Linklist;
int Getglem(Linklist *L;int i;Elemtype *e)
{
	Linklist *p;//建立一个指针指向头节点 
	p=L->next;
	int j=1;//计数 
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
 

