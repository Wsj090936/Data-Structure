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
void InsertQueue(LinkQueue *q,Elemtype e)//eΪ����е�Ԫ�� 
{
	QueuePrt p;
	p=(QueuePrt)malloc(sizeof(QNode));
	if(!p)
	exit(0);
	//����� 
	p->data=e;
	p->next=NULL;
	q->rear->next=p;
	q->rear=p; 
}
void  DeleteQueue(LinkQueue *q,Elemtype *e)
{
	QueuePrt p;//����һ��ָ��P����������еĽ�� 
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
	printf("������һ���ַ���#��ʾ�������\n");
	gets(str);
		for(k=0;k<10;k++)
		{
		 e=str[k];
		 if(e=='#'||e=='\0')//������ص� e=='#'||e=='\0'���ַ��������������gets�����ᵼ�º��治����ֵ�ĵ�ԪĬ��Ϊ\0������������� 
		 break;
	     InsertQueue(&q,e);
		
		}

	 printf("��������ַ�Ϊ\n");
	 while(1)
	 {
	 	DeleteQueue(&q,&i);
	 	printf("%c",i);
	 	if(q.front==q.rear)
	 	break;
	 }
	return 0;
}
