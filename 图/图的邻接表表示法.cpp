#include<stdio.h>
#define MAX_SIZE 100
typedef int ElemType;
typedef struct Cgraph{
	ElemType xiabiao;//表示指向某一个顶点的下标 
	Cgraph *next;
}ICgraph; 
typedef struct TGraph{
	ElemType data;//表示某个顶点
	ICgraph first; 
}TGraph;
typedef struct Graph{
	TGraph ZGraph[MAX_SIZE];//这里可以写出某个顶点的下标 
}Graph; 
