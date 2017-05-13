#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;

typedef struct BitNode{
	ElemType data;
	BitNode *lchild,*rchild;
}BitNode,*BitTree;//建立二叉节点
 //下面的函数要求用户用前序遍历输入结点数据，根，左，右 
CreateBitTree(BitTree *T)
 {
 	char c;
 	scanf("%c",&c);
 	
 	if(' '==c)
 	{
 		*T=NULL;
	 }
	 else
	 {
	 	*T=(BitNode *)malloc(sizeof(BitNode));
	 	(*T)->data=c;
	 	CreateBitTree(&(*T)->lchild);
	 	CreateBitTree(&(*T)->rchild);
	 }
 	
 }

qianxubianli(BitTree T,int level)
{
	if(T)//如果不为空树的话 
	{
		printf("%c结点位于第%d层\n",T->data,level);
		qianxubianli(T->lchild,level+1);
		qianxubianli(T->rchild,level+1);
	}
}
int main(void)
{
	int level=1;
	BitTree T=NULL;
	CreateBitTree(&T);
	qianxubianli(T,level);
	return 0;
}
