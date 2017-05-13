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
	double d,e;//e为先出栈的元素 
	char str[MAXBUFFER];
	int i=0;
	initstack(&s);
	printf("请按逆波兰表达式输入你想计算的算式，数字与数字，数字与运算符号之间用空格隔开；输入#表示结束\n"); 
	scanf("%c",&c);
	while(c!='#')
	{
		while(isdigit(c)||c=='.')//sidigit函数是为了判断c是否为数字，该循环就是为了过滤数字,将字符型转换为浮点型 
		{
			str[i++]=c;
			str[i]='\0';
			if(i>=10)
			{
			printf("出错，输入的单个数据过大！\n");
			return -2;
		    }
		    scanf("%c",&c);
		    if(c==' ')//如果输入了空格，表面一个数字输入结束，将前面的数字转换为double型
			{
				d=atof(str);//atof函数就是将char型的字符转换为double型的一个函数，头文件为#include<stdlib.h> 
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
			printf("\n错误，除数为0！\n");
			return -1;
		    }
			break;	
		}
		scanf("%c",&c);
		
	}
	pop(&s,&d);
	printf("最终的运算结果为:%f\n",d);
	return 0;
}
