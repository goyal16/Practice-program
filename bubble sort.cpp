#include<iostream>
using namespace std;
int main()
{
	int key, arr[10],mid,low=1,high=10,i;
	cout<<"enter an array: ";
	for( i=1;i<=10;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter key: ";
	cin>>key;
	while(low<high){
	mid=(low+high)/2;
	if(key==arr[mid]){
	cout<<mid;
	break;}
	else if(key>arr[mid])
	low=mid+1;
	else
	high=mid-1;}
	return 0;
	
}
