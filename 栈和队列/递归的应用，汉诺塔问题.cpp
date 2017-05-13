#include<stdio.h>
void move(int n,char x,char y,char z)
{
	if(n==1)
	{
		printf("%c-->%c\n",x,z);
	}
	else
	{
	move(n-1,x,z,y);//将X中的n-1个塔通过z移动到y上 
	printf("%c-->%c\n",x,z);//将第n个盘子从x移动到z上 
	move(n-1,y,x,z);//将n-1个盘子从y移动借助到z上 
    }
}
int main(void)
{
	int n;
	printf("请输入汉诺塔层数：");
	scanf("%d",&n);
	printf("转换结果为：\n"); 
	move(n,'x','y','z');
	return 0;
 } 
