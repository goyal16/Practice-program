#include<iostream>
using namespace std;
int main()
{
	int arr[100],num,i,j,c,k;
	cout<<"no of elements: ";
	cin>>num;
	cout<<"enter an array: ";
	for( i=1;i<=10;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<num;i++)
	{
		for(j=1;j<num-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			 c=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=c;	
			}
		}
	}
	for(k=1;k<=num;k++)
	{
		cout<<arr[k]<<endl;
	}
	return 0;
	
}
