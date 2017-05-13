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
		while(i<=n)//利用尾插法生成长度为n的链表 
		{
			s=(Node *)malloc(sizeof(Node));
			s->data=i++;
			p->next=s;
			p=s;
		}
		s->next=head->next;
	}
	free(head);//将多余的结点空间释放 
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
	for(i=1;i<=a-1;i++)//这么做是为了找要自杀的人 
	{
		p=p->next;
	}
	printf("%d\n",p->next->data);//将自杀的人按顺序输出 
	temp=p->next;
	p->next=temp->next;//这句话是删除喊3的人 
	free(temp); 
	p=p->next;
 }
printf("%d\n",p->data);//注意这里这样做的原因是打印出最后一个元素，因为循环条件为 p!=p->next，运行到循环结束只剩下最后一个元素了。
return 0; 
} 


 
