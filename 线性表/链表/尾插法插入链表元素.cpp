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
	srand(time(0));//随机数函数 
	r=*L;//头指针指向第一个元素 
	*L=(Node)malloc(sizeof(Node));
	while(i<=n)
	{
		p=(Node)malloc(sizeof(Node));
		p->data=rand()%100+1;
		r->next=p;//插入p 
		r=p;
	}
	r->next=NULL;
}
