#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define STACKINCREMENT 10
#define STACK_INIT_SIZE 20
typedef char Elemtype;
typedef struct
{
	Elemtype *top;
	Elemtype *base;
	int stacksize;
}sqStack;
void initStack(sqStack *s)
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
		if(!s->base)
		{
		exit(0);
	    }
	    
		s->base=(Elemtype *)realloc(s->base,(s->stacksize+STACKINCREMENT)*sizeof(Elemtype));
		s->top=s->base+s->stacksize;
		s->stacksize=s->stacksize+STACKINCREMENT;
	}
	*(s->top)=e;
	s->top++;
}
void pop(sqStack *s,Elemtype *e)
{
	if(s->base==s->top)
	return;
	
	*e=*--(s->top);
}
int lenStack(sqStack s)
{
	return (s.top-s.base);
}
int main(void)
{
	Elemtype e;
	sqStack s;
	int i,sum=0,len;
	initStack(&s);
	printf("输入你想转换的二进制数，输入#表示输入结束\n");
	scanf("%c",&e);
	while(e!='#')
	{
		push(&s,e);
		scanf("%c",&e);
	 } 
	 getchar();//把回车''\n从缓冲区去掉 
	 len=lenStack(s);
	 for(i=0;i<len;i++)
	 {
	 	pop(&s,&e);
	 	sum=sum+(e-48)*pow(2,i);
	 }
	 printf("所转换的二进制数的长度为%d\n",len);
	 printf("二进制数转换为十进制数后的数值为%d\n",sum);
	return 0;
}
