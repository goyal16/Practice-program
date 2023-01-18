#include<iostream>
using namespace std;
void ari_op(int a,int b)
{
	int c=a+b;
	int d=a*b;
	int e=a/b;
	int f=a%b;
	cout<<"addition, multiplication, division, remainder on "<<a<<" and "<<b<<endl;
	cout<<c<<" "<<d<<" "<<e<<" "<<f;
}
int main()
{
  int x,y;
  cout<<"Enter two numbers: ";
  cin>>x>>y;
  ari_op(x,y);
  return 0;	
}
