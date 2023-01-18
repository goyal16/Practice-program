#include<stdio.h>
void main()
{
	int a[1000],i,n;
	printf("Enter number of pairs?");
	scanf("%d",&n);
	printf("Enter numbers: ");
	for(i=0;i<2*n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("addition is: ");
	for(i=0;i<2*n;i=i+2)
	{
		printf("%d\n",a[i]+a[i+1]);
	}
}
