#include<stdio.h> 
#include<stdlib.h>
#define MAXSIZE 10
typedef char Elemtype;
typedef struct QNode{
	Elemtype data;
	struct QNode *next;
}QNode,*QueuePrt;
typedef struct
{
	QueuePrt front,rear;
}LinkQueue;
void InitQueue(LinkQueue *q)
{
	q->front=q->rear=(QueuePrt)malloc(sizeof(QNode));
	if(!q->front||!q->rear)
	{
		exit(0);
	}
	q->front->next=NULL;
}
void InsertQueue(LinkQueue *q,Elemtype e)//e为入队列的元素 
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
void  DeleteQueue(LinkQueue *q,Elemtype *e)
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
int main(void)
{
	LinkQueue q;
	char i,j=0,k,e;
	char str[MAXSIZE];
	InitQueue(&q);
	printf("请输入一串字符，#表示输入结束\n");
	gets(str);
		for(k=0;k<10;k++)
		{
		 e=str[k];
		 if(e=='#'||e=='\0')//这句是重点 e=='#'||e=='\0'当字符串输入完后利用gets函数会导致后面不存数值的单元默认为\0，导致输出错误 
		 break;
	     InsertQueue(&q,e);
		
		}

	 printf("你输入的字符为\n");
	 while(1)
	 {
	 	DeleteQueue(&q,&i);
	 	printf("%c",i);
	 	if(q.front==q.rear)
	 	break;
	 }
	return 0;
}
