#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;

typedef struct BitNode{
	ElemType data;
	BitNode *lchild,*rchild;
}BitNode,*BitTree;//��������ڵ�
 //����ĺ���Ҫ���û���ǰ��������������ݣ��������� 
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
	if(T)//�����Ϊ�����Ļ� 
	{
		printf("%c���λ�ڵ�%d��\n",T->data,level);
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
