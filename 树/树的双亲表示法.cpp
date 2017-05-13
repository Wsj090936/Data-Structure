#include<stdio.h>
#define MAXSIZE 100 
typedef int Elemtype;
typedef struct PNode{
	Elemtype data;
	int parent; 
}PNode;
typedef struct {
	PNode n[MAXSIZE];
	int n;//n表示结点数目 
	int r;//r表示 根的位置 
}PTree;
