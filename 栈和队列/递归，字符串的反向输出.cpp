#include<stdio.h>
void ftb()
{
	char a;
	scanf("%c",&a);
	if(a!='#')
	ftb();
	if(a!='#')
	printf("%c",a);
 } 
int main(void)
{
	printf("����һ���ַ�������#��ʾ�������"); 
	ftb();
	return 0;
}
