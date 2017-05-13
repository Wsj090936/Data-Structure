#include<stdio.h>
#include<string.h>
#define MAXSIZE 10 
typedef struct information{
	int xuehao[MAXSIZE];
	char art[MAXSIZE]={'0','xiaojiayu','qiuwu','heiye','mitu'};
	int chengji[MAXSIZE];
}inf;

void Insert(inf *INF)
{
	int i=1;
	for(i=1;i<=3;i++)
	{
		if(i==1)
		{
			INF->xuehao[i]=1024;

			INF->chengji[i]=100;
		}
		if(i==2)
		{
			INF->xuehao[i]=1026;
			
			INF->chengji[i]=60;
		}
		if(i==3)
		{
			INF->xuehao[i]=1028;
			
			INF->chengji[i]=100;
		}
		if(i==4)
		{
			INF->xuehao[i]='1030';
			
			INF->chengji[i]=60;
		 } 
	}
 } 
 int main(void)
 {
 	int key=1024;
 	inf Q;
 	int i,j=1;
 	Insert(&Q);
 	Q.xuehao[0]=key;
 	while(Q.xuehao[j]!=key)
 	{
 		j++;
	 }
	 i=j;
	 
	 printf("%d,%c,%d",Q.xuehao[i],Q.art[i],Q.chengji[i]);
 }
