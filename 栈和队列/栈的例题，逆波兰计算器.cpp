#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define STACKINCREMENT 10
#define STACK_INIT_SIZE 20
#define MAXBUFFER 10
typedef double Elemtype; 
typedef struct
{
	Elemtype *base;
	Elemtype *top;
	int stacksize;
}sqStack;
void initstack(sqStack *s)
{
	s->base=(Elemtype *)malloc(STACK_INIT_SIZE * sizeof(Elemtype));
	
	if(!s->base)
	{
		exit(0);
	}
	
	s->base=s->top;
	s->stacksize=STACK_INIT_SIZE;
}
void push(sqStack *s,Elemtype e)
{
	if(s->top-s->base>=s->stacksize)
	{
		s->base=(Elemtype *)realloc(s->base,(s->stacksize+STACKINCREMENT) * sizeof(Elemtype));
		
		if(!s->base)
		{
			exit(0);
		}
		
		s->top=s->base+s->stacksize;
		s->stacksize=s->stacksize+STACKINCREMENT;
	}
	
	*(s->top)=e;
	s->top++;
}
void pop(sqStack *s,Elemtype *e)
{
	if(s->base==s->top)
	exit(0);
	else
	
	*e=*--(s->top);
	
}
int stacklen(sqStack s)
{
	return (s.top-s.base);
}
int main(void)
{
	sqStack s;
	char c;
	double d,e;//eΪ�ȳ�ջ��Ԫ�� 
	char str[MAXBUFFER];
	int i=0;
	initstack(&s);
	printf("�밴�沨�����ʽ��������������ʽ�����������֣��������������֮���ÿո����������#��ʾ����\n"); 
	scanf("%c",&c);
	while(c!='#')
	{
		while(isdigit(c)||c=='.')//sidigit������Ϊ���ж�c�Ƿ�Ϊ���֣���ѭ������Ϊ�˹�������,���ַ���ת��Ϊ������ 
		{
			str[i++]=c;
			str[i]='\0';
			if(i>=10)
			{
			printf("��������ĵ������ݹ���\n");
			return -2;
		    }
		    scanf("%c",&c);
		    if(c==' ')//��������˿ո񣬱���һ�����������������ǰ�������ת��Ϊdouble��
			{
				d=atof(str);//atof�������ǽ�char�͵��ַ�ת��Ϊdouble�͵�һ��������ͷ�ļ�Ϊ#include<stdlib.h> 
				push(&s,d);
				i=0;
				break;
			 } 
		 } 
		switch( c )
		{
			case '+':
			pop(&s,&e);
			pop(&s,&d);
			push(&s,d+e);
			break;
			case '-':
			pop(&s,&e);
			pop(&s,&d);
			push(&s,d-e);
			break;
			case '*':
			pop(&s,&e);
			pop(&s,&d);
			push(&s,d*e);
			break;
			case '/':
			pop(&s,&e);
			pop(&s,&d);
			if(e!=0)
			{
			push(&s,d/e);
			}
			else
			{
			printf("\n���󣬳���Ϊ0��\n");
			return -1;
		    }
			break;	
		}
		scanf("%c",&c);
		
	}
	pop(&s,&d);
	printf("���յ�������Ϊ:%f\n",d);
	return 0;
}
