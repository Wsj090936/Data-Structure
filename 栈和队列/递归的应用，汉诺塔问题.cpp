#include<stdio.h>
void move(int n,char x,char y,char z)
{
	if(n==1)
	{
		printf("%c-->%c\n",x,z);
	}
	else
	{
	move(n-1,x,z,y);//��X�е�n-1����ͨ��z�ƶ���y�� 
	printf("%c-->%c\n",x,z);//����n�����Ӵ�x�ƶ���z�� 
	move(n-1,y,x,z);//��n-1�����Ӵ�y�ƶ�������z�� 
    }
}
int main(void)
{
	int n;
	printf("�����뺺ŵ��������");
	scanf("%d",&n);
	printf("ת�����Ϊ��\n"); 
	move(n,'x','y','z');
	return 0;
 } 
