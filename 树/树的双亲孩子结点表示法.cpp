#include<stdio.h>
#define MAXTREESIZE;
typedef char ElemType;
/*���ӽ��*/
typedef struct CTNode{
	int child;//���ӽ����±� 
	struct CTNode *next;//ָ����һ�����ӽ�� 
}CTNode;
/*��ͷ�ṹ*/
typedef struct CTtree{ 
    char data;//�����ֵ 
    int Parent;//����ֵ��˫�׵��±� 
	CTNode firstchild
}CTtree;
/*���Ľṹ*/ 
typedef struct {
	CTtree nodes[MAXTREESIZE];
}Tree; 

