#include<stdio.h>
#include<stdlib.h>
/*����Ľṹ�嶨��*/ 
typedef int Elemtype;
typedef struct Clinklist
{
	int data;
	struct Clinklist *next; 
}Node;
/*��ʼ��ѭ������*/
void insit(Node **pNode)//**pNode��ʾ������һ��Ԫ�� *pNode��ʾָ�� pNod��ʾָ��ָ���ָ�� 
{
	int item;
	Node *temp;//�����½��ʱҪ�õ�
	Node *target;//Ѱ�����һ�����ʱҪ�õ�
	printf("����ÿһ������ֵ������0�������ĳ�ʼ��");
	while(1)
	{
		scanf("%d",&item);
		fflush(stdin);//���������
		if((*pNode)==NULL) //����Ϊ������
		{
			*pNode=(Node *)malloc(sizeof(Clinklist));
			(*pNode)->data=item;
			(*pNode)->next=*pNode;
		 } 
		 else
		 {for(target=(*pNode);target->next!=NULL;target=target->next);//�ҵ���������һ�����
		 temp=(Node *)malloc(sizeof(Clinklist));//�����µĽ�� 
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
	Node *temp;//���ɲ�����ʱҪ�õ� 
	Node *target;//Ѱ�����һ����� 
	Node *p;//�� 
	int item,j=1;
	printf("�����������Ľ���ֵ");
	scanf("%d",&item);
	if(i==1)//������λ��Ϊ1��ʱ�� 
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
			target=target->next;//�ҵ���i������ǰ����� 
		}
		temp->data=item;
		/*����Ŀ����*/
		p=target->next;
		target->next=temp;
		temp->next=p;
	}
}
void ds_delete(Node **pNode,int i)
{
	Node *temp;//�� 
	Node *target;//Ѱ��Ŀ����
	int j=1;
	if(i==1)//ɾ�����ǵ�һ�����
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
		 target=target->next;//�ҵ���ɾ������ǰ����� 
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
