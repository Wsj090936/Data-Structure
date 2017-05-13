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
	printf("数入一串字符，输入#表示输入结束"); 
	ftb();
	return 0;
}
