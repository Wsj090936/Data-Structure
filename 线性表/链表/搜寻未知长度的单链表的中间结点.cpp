#include<stdio.h>
typedef int Elemtype;
typedef struct Node
{
	Elempyte data;
	struct Node *next;
}Node;
typedef struct Node *Linklist;
void(Linklist L;Elemtype *e)
{
	Linklist search,mid;
	search=mid=L;
	while(search->next!=NULL)
	{
	if(search->next->next!=NULL)
	{
		search=search->next->next;
		mid=mid->next;
	}
	else
	{
		search=search->next;
	}
    }
	*e=mid->data;
	return ok;
}
