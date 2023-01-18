#include<stdio.h>
int main()
{
	int a[]={10,5,12,6,3,4,19,8},k,j;
	int l=0,h=7;
	int quick(int l, int h)
	{
	j=partion(a,l,h);
	quick(l,j);
	quick(j+1,h);
	for(k=0;k<7;k++)
	{
		printf(a[k]);
	}
	return 0;
}
int partion(int a,int l, int h){
 int pivot=a[0],p;
	int i=1,j=7;
	for(p=0;p<7;p++)
	{
	  if(i<j)
	  {
	  	if(a[i]>pivot)
	  	{
	  		i++;
		  }
		  if(a[j]<=pivot)
		  j--;
		swap(a[i],a[j]);
		  }	
		  swap(pivot,a[j]);
		  return j;
	}
}

