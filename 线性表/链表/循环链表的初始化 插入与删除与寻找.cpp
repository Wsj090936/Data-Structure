#include<stdio.h>
#include<stdlib.h>
/*链表的结构体定义*/ 
typedef int Elemtype;
typedef struct Clinklist
{
	int data;
	struct Clinklist *next; 
}Node;
/*初始化循环链表*/
void insit(Node **pNode)//**pNode表示链表上一个元素 *pNode表示指针 pNod表示指向指针的指针 
{
	int item;
	Node *temp;//生成新结点时要用到
	Node *target;//寻找最后一个结点时要用到
	printf("输入每一个结点的值，输入0完成链表的初始化");
	while(1)
	{
		scanf("%d",&item);
		fflush(stdin);//清楚缓冲区
		if((*pNode)==NULL) //链表为空链表
		{
			*pNode=(Node *)malloc(sizeof(Clinklist));
			(*pNode)->data=item;
			(*pNode)->next=*pNode;
		 } 
		 else
		 {for(target=(*pNode);target->next!=NULL;target=target->next);//找到链表的最后一个结点
		 temp=(Node *)malloc(sizeof(Clinklist));//生成新的结点 
		 if(!item)
		 exit(0);
		 temp->data=item;
		 temp->next=(*pNode);
		 target->next=temp;
	     }	
	}
 } 
void insert(Node **pNode,Elemtype i)
{
	Node *temp;//生成插入结点时要用到 
	Node *target;//寻找最后一个结点 
	Node *p;//桥 
	int item,j=1;
	printf("输入你想插入的结点的值");
	scanf("%d",&item);
	if(i==1)//想插入的位置为1的时候 
	{
		for(target=(*pNode);target->next!=(*pNode);target=target->next);
		temp=(Node *)malloc(sizeof(Clinklist));
		if(!temp)
		exit(0);
		temp->data=item;
		temp->next=(*pNode);
		target->next=temp;
		(*pNode)=temp; 
	 } 
	if(i<=0)
	exit(0);
	else
	{
		target=*pNode;
		for(;j<(i-1);++j)
		{
			target=target->next;//找到第i个结点的前驱结点 
		}
		temp->data=item;
		/*插入目标结点*/
		p=target->next;
		target->next=temp;
		temp->next=p;
	}
}
void ds_delete(Node **pNode,int i)
{
	Node *temp;//桥 
	Node *target;//寻找目标结点
	int j=1;
	if(i==1)//删除的是第一个结点
	{
		for(target=*pNode;target->next!=*pNode;target=target->next);
		temp=(*pNode);
		(*pNode)=(*pNode)->next;
		target->next=*pNode;
		free(temp);
	}
	if(i<=0)
	exit(0);
	else
	{
		for(;j<i-1;++j)
		{
		 target=target->next;//找到被删除结点的前驱结点 
	    }
	    temp=target->next;
		target->next=temp->next;
		free(temp); 
	}
}
int search(Node *pNode,int e)
{
	Node *target;
	int i=1;
	for(target=pNode;target->data!=e&&target->next!=pNode;++i)
	{
		target=target->next;
	}
	if(target->next==pNode)
	return -1;
	else
	return i;
}
