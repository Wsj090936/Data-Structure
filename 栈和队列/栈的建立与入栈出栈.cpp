#include<stdio.h>
#include<stdlib.h>
#define STACKINCREMENT 10
#define STACK_INIT_SIZE 100
typedef int Elemtype;
typedef struct sqStack//����ջ�Ĵ洢�ṹ 
{
	Elemtype *base;
	Elemtype *top;
	int Stacksize;
}sqStack;
void initstack(sqStack *s)
{
	s->base=(Elemtype *)malloc(STACK_INIT_SIZE *sizeof(Elemtype));//������ջ�Ŀռ�Ϊ100 
	 
	if(!s->base)
	exit(0);
	
	s->base=s->top;//δ�������ʱ(��ʼʱ)ջ������ջ�� 
	s->Stacksize=STACK_INIT_SIZE; 
	
}
void push(sqStack *s,Elemtype e)//��ջ���� 
{
	if(s->top-s->base==s->Stacksize)//�ж��Ƿ�ջ���� 
	{
		
	s->base=(Elemtype *)realloc(s->base,(s->Stacksize+STACKINCREMENT) * sizeof(Elemtype));//�������Ŀռ䣨ָ����=����������*��realloc��Ҫ�ı��ڴ��С��ָ�������µĴ�С���� 
	
	if(!s->base)
	exit(0);
	
	s->top=s->base+s->Stacksize;//����ջ��
	s->Stacksize=s->Stacksize+STACKINCREMENT;//����ջ���������
    }
    
	*(s->top)=e;
	s->top++; 
	
}
void pop(sqStack *s,Elemtype *e)
{
	
	if(s->base==s->top)//����ջ�ѿ�
	 return;
	 
	 *e=*--(s->top);//��ָ���ȼ�һ���ٽ����ݴ洢��e�� 
}

