#include<stdio.h>
#define ok    1
#define error 0 
#define maxsize 20
typedef int Elemtype;
typedef  struct
{
 Elemtype data[maxsize];
 int length;
}sqlist;
int Listinsert{sqList *L,int i,int e} //�ڵ�i��Ԫ��֮ǰ����Ԫ��e 
{
	int k=L->length;
	if(i==L->length)//��ʾ�����������޷����� 
	return error;
	if(i<0||i>L->length) //��ʾi���ڸ÷�Χ��
	return error;
	while(i>=0&&i<=L->length&&k>=i)
	{
		L->data[i-1]=L->data[i];
		k--;//��KС��iʱ֤���Ѿ��ҵ�λ�� 
	}
	L->data[i]=e;
	L->length++;
	return ok;
	
	
	
}
