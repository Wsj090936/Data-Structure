#include<stdio.h>
#include<stdlib.h>
#define STACKINCREMENT 10
#define STACK_INIT_SIZE 100
typedef int Elemtype;
typedef struct sqStack//建立栈的存储结构 
{
	Elemtype *base;
	Elemtype *top;
	int Stacksize;
}sqStack;
void initstack(sqStack *s)
{
	s->base=(Elemtype *)malloc(STACK_INIT_SIZE *sizeof(Elemtype));//创建的栈的空间为100 
	 
	if(!s->base)
	exit(0);
	
	s->base=s->top;//未存放数据时(开始时)栈顶等于栈底 
	s->Stacksize=STACK_INIT_SIZE; 
	
}
void push(sqStack *s,Elemtype e)//入栈操作 
{
	if(s->top-s->base==s->Stacksize)//判断是否栈满了 
	{
		
	s->base=(Elemtype *)realloc(s->base,(s->Stacksize+STACKINCREMENT) * sizeof(Elemtype));//申请额外的空间（指针名=（数据类型*）realloc（要改变内存大小的指针名，新的大小）） 
	
	if(!s->base)
	exit(0);
	
	s->top=s->base+s->Stacksize;//设置栈顶
	s->Stacksize=s->Stacksize+STACKINCREMENT;//设置栈的最大容量
    }
    
	*(s->top)=e;
	s->top++; 
	
}
void pop(sqStack *s,Elemtype *e)
{
	
	if(s->base==s->top)//表明栈已空
	 return;
	 
	 *e=*--(s->top);//将指针先减一后再将数据存储到e中 
}

