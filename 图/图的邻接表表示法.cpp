#include<stdio.h>
#define MAX_SIZE 100
typedef int ElemType;
typedef struct Cgraph{
	ElemType xiabiao;//��ʾָ��ĳһ��������±� 
	Cgraph *next;
}ICgraph; 
typedef struct TGraph{
	ElemType data;//��ʾĳ������
	ICgraph first; 
}TGraph;
typedef struct Graph{
	TGraph ZGraph[MAX_SIZE];//�������д��ĳ��������±� 
}Graph; 
