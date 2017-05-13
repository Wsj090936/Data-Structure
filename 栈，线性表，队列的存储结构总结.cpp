#include<stdio.h>
#define MAXSIZE 100
typedef int ElemType;
/*顺序表*/
typedef struct Node{
	ElemType data[MAXSIZE];
	int strength;
}Node;
/*链表*/
typedef struct TNode{
	ElemType data;
	struct TNode *next;
}TNode;
/*栈*/
typedef struct zhan{
	ElemType *base;
	ElemType *top;
	int stacksize; 
}zhan;
/*队列*/
typedef struct QNode{
	ElemType data;
	struct QNode *next;
}QNode,*Queue;
typedef struct {
	Queue *front,*rear;
}LinkQueue; 
