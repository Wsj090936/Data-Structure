#include<stdio.h>
#define MAXTREESIZE;
typedef char ElemType;
/*孩子结点*/
typedef struct CTNode{
	int child;//孩子结点的下标 
	struct CTNode *next;//指向下一个孩子结点 
}CTNode;
/*表头结构*/
typedef struct CTtree{ 
    char data;//存放数值 
    int Parent;//该数值的双亲的下标 
	CTNode firstchild
}CTtree;
/*树的结构*/ 
typedef struct {
	CTtree nodes[MAXTREESIZE];
}Tree; 

