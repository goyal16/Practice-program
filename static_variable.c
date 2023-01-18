#include<stdio.h>
void fun()
{
	int x=20;
	static int y=30;
	x=x+10;
	y=y+10;
	printf("\nx=%d\ny=%d",x,y);
}
void main()
{
	fun();
	fun();
	fun();
}
