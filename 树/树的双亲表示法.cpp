#include<stdio.h>
#define MAXSIZE 100 
typedef int Elemtype;
typedef struct PNode{
	Elemtype data;
	int parent; 
}PNode;
typedef struct {
	PNode n[MAXSIZE];
	int n;//n��ʾ�����Ŀ 
	int r;//r��ʾ ����λ�� 
}PTree;
