#include<stdio.h>
#includez<stdlib.h> 
typedef int Elemtype;
typedef struct Node
{
	Elemtype data;
	struct Node *next;
}Node;
void endinsert(Node *L,int n)
{
	Node *p=NULL,*r=NULL;
	int i=1;
	srand(time(0));//��������� 
	r=*L;//ͷָ��ָ���һ��Ԫ�� 
	*L=(Node)malloc(sizeof(Node));
	while(i<=n)
	{
		p=(Node)malloc(sizeof(Node));
		p->data=rand()%100+1;
		r->next=p;//����p 
		r=p;
	}
	r->next=NULL;
}
