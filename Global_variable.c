#include<stdio.h>
int x=20,y=30,z=40;
void fun1()
{
	y=y+1;
	printf("x1=%d",x);
	printf("\ny1=%d",y);
	printf("\nz1=%d",z);
}
void fun2()
{
	printf("\nx2=%d",x);
	printf("\ny2=%d",y);
	z=z+1;
	printf("\nz2=%d",z);
}
void main()
{
  fun1();
  fun2();
  fun1();	
}
