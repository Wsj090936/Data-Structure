#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
typedef struct Node
{
	Elemtype data;
	struct Node *next;
	
}Node;
Node *crcle(int n)
{
	Node *p=NULL,*head=NULL;
	head=(Node *)malloc(sizeof(Node));
    p=head;
	Node *s;
	int i=1;
	if(n!=0)
	{
		while(i<=n)//����β�巨���ɳ���Ϊn������ 
		{
			s=(Node *)malloc(sizeof(Node));
			s->data=i++;
			p->next=s;
			p=s;
		}
		s->next=head->next;
	}
	free(head);//������Ľ��ռ��ͷ� 
	return s->next;
}
int main()
{
 int m=41,a;
 int n=3;
 int i=0;
 a=m%n;
 Node *p=crcle(m);
 Node *temp;
 while(p!=p->next)
 {
	for(i=1;i<=a-1;i++)//��ô����Ϊ����Ҫ��ɱ���� 
	{
		p=p->next;
	}
	printf("%d\n",p->next->data);//����ɱ���˰�˳����� 
	temp=p->next;
	p->next=temp->next;//��仰��ɾ����3���� 
	free(temp); 
	p=p->next;
 }
printf("%d\n",p->data);//ע��������������ԭ���Ǵ�ӡ�����һ��Ԫ�أ���Ϊѭ������Ϊ p!=p->next�����е�ѭ������ֻʣ�����һ��Ԫ���ˡ�
return 0; 
} 


 
