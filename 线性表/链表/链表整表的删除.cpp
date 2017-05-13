#include<stdio.h>
typedef int Elemtype;
typedef struct Node{
	Elemtype data;
	struct Node *next;
	
}; 
typedef struct Node *Linklist;

void clear(Linklist *L)
{
	Linklist p,q;
	p=(*L)->next;
	while(p)
	{
		q=p->next;
		free(p);
		p=q;
	}
	(*L)->next==NULL;
	return OK;
}
