#include<stdio.h>
#define MAXSIZE 100
typedef int ElemType;
/*˳���*/
typedef struct Node{
	ElemType data[MAXSIZE];
	int strength;
}Node;
/*����*/
typedef struct TNode{
	ElemType data;
	struct TNode *next;
}TNode;
/*ջ*/
typedef struct zhan{
	ElemType *base;
	ElemType *top;
	int stacksize; 
}zhan;
/*����*/
typedef struct QNode{
	ElemType data;
	struct QNode *next;
}QNode,*Queue;
typedef struct {
	Queue *front,*rear;
}LinkQueue; 
