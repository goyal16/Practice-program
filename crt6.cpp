#include"iostream"
using namespace std;
class MyClass{
	public:
		int muNum;
		string myString;
};
int main()
{
	MyClass myObj;
	cout<<"enter num and string";
	cin>>myObj.muNum>>myObj.myString;
//	myObj.muNum=15;
//	myObj.myString="Some text";
	cout<<myObj.muNum<<"\n";
	cout<<myObj.myString;
	return 0;
}
