#include<iostream>
using namespace std;
int main()
{
	int num, arr[10],j=0,i;
	cout<<"enter an array: ";
	for( i=1;i<=10;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter key: ";
	cin>>num;
	while(arr[j]!=num)
	{
	   j++;	
	}
	if(j<10)
	cout<<"element found at positon "<<j;
	else
	cout<<"element not found";
	return 0;
}
