#include<stdio.h>
#include<time.h>

#define X 8
#define Y 8

int chess[X][Y];//表示一个8*8的棋盘 

//找到基于x，y下一个可以走日字的位置 
int  nextxy(int *x,int *y,int count)
{
	switch(count) 
	{
		case 0:
			if(*x+2<=X-1&&*y-1>=0&&chess[*x+2][*y-1]==0)//这里是为了判断下一步是否满足走日字的条件
			{
			 *x=*x+2;
			 *y=*y-1; 
			 return 1;
			} 
			break;
		case 1:
			if(*x+2<=X-1&&*y+1<=Y-1&&chess[*x+2][*y+1]==0)
			{
				*x=*x+2;
				*y=*y+1;
				return 1;
			}
			break;
		case 2:
			if(*x+1<=X-1&&*y+2<=Y-1&&chess[*x+1][*y+2]==0)
			{
				*x=*x+1;
				*y=*y+2;
				return 1;
			}
			break;
		case 3:
			if(*x-1>=0&&*y+2<=Y-1&&chess[*x-1][*y+2]==0)
			{
				*x=*x-1;
				*y=*y+2;
				return 1;
			}
			break;
		case 4:
			if(*x-2>=0&&*y+1<=Y-1&&chess[*x-2][*y+1]==0)
			{
				*x=*x-2;
				*y=*y+1;
				return 1;
			}
			break;
		case 5:
			if(*x-2>=0&&*y-1>=0&&chess[*x-2][*y-1]==0)
			{
				*x=*x-2;
				*y=*y-1;
				return 1;
			}
			break;
		case 6:
			if(*x-1>=0&&*y-2>=0&&chess[*x-1][*y-2]==0)
			{
				*x=*x-1;
				*y=*y-2;
				return 1;
			}
			break;
		case 7:
			if(*x+1<=X-1&&*y-2>=0&&chess[*x+1][*y-2]==0)
			{
				*x=*x+1;
				*y=*y-2;
				return 1;
			}
			break;
			
		default :
			break;
	}
	return 0;//表示无路可走了 
}
void print()
{
	int i,j;
	for(i=0;i<X;i++)
	{
		for(j=0;j<Y;j++)
		{
			printf("%2d\t",chess[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//(x,y)表示马的起始位置 
//tag表示走的步数，每走一步tag+1 
int TravelChessBoard(int x,int y,int tag)
{
	int x1=x,y1=y,flag=0,count=0;
	chess[x][y]=tag;
	
	if(X*Y==tag)
	{
		//打印棋盘
		print(); 
		return 1;
	}
	//找到马走的下一个坐标(x1,y1)，找到后flag为1，否则为0
	flag=nextxy(&x1,&y1,count);
	while(0==flag&&count<7)
	{
		count++;
		flag=nextxy(&x1,&y1,count);
	}
	while(flag)
	{
		if(TravelChessBoard(x1,y1,tag+1));//调用他本身进行递归 
		{
		 return 1;
	    }
	  //找到马走的下一个坐标(x1,y1)，找到后flag为1，否则为0  
	  //从新搜索 
	x1=x;
	y1=y;
	count++; 
	
	flag=nextxy(&x1,&y1,count);
	while(0==flag&&count<7)
	{
		count++;
		flag=nextxy(&x1,&y1,count);
	}
	} 
	if(0==flag)
	{
		chess[x][y]=0;
	}
	return 0;
	
} 
int main(void)
{
	int i,j;
	clock_t start,finish;
	start=clock();
	//初始化棋盘
	for(i=0;i<X;i++)
	{
		for(j=0;j<Y;j++)
		{
			chess[i][j]=0;
		}
	 } 
	 if(!TravelChessBoard(2,0,1))//不一定非要201这个点，只是比较容易得到 
      {
      	printf("算法失败了！"); 
	  }

	 finish=clock();
	 printf("算法耗费了%f秒",(double)(finish-start)/CLOCKS_PER_SEC);
	 return 0; 
}





















