#include<stdio.h> 
#include<stdlib.h>
typedef int Elemtype;
typedef struct QNode{
	Elemtype data;
	struct QNode *next;
}QNode,*QueuePrt;
typedef struct
{
	QueuePrt front,rear;
}LinkQueue;
void Initqueue(LinkQueue *q)
{
	q->front=q->rear=(QueuePrt)malloc(sizeof(QNode));
	if(!q->front||!q->rear)
	{
		exit(0);
	}
	q->front->next=NULL;
}
void insertqueue(LinkQueue *q,Elemtype e)//e为入队列的元素 
{
	QueuePrt p;
	p=(QueuePrt)malloc(sizeof(QNode));
	if(!p)
	exit(0);
	//入队列 
	p->data=e;
	p->next=NULL;
	q->rear->next=p;
	q->rear=p; 
}
void  Deletequeue(LinkQueue *q,Elemtype *e)
{
	QueuePrt p;//定义一个指针P来储存出队列的结点 
	if(q->front==q->rear)
	return;
	p=q->front->next;
	*e=p->data;
	q->front->next=p->next;
	if(p==q->rear)
	q->rear=q->front;
	free(p);
 } 
void DestroyQueue(LinkQueue *q)
{
	while(q->front)
	{
		q->rear=q->front->next;
		free(q->front);
		q->front=q->rear;
	}
 } 
