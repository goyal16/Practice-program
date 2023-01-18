#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	cout<<"ASCII value of "<<ch<<" is: "<<int(ch);
	char ch2;
	cout<<"\nEnter a character: ";
	cin>>ch2;
	if(ch2>='a'&&ch2<='z')
	cout<<"\nLowecase";
	else if(ch2>='A'&&ch2<='Z')
	cout<<"\nUppercase";
	else if(ch2>=0&&ch2<=9) //If the ASCII value of the character is between 48 and 57, print "Number"
	cout<<"\nNumber";
	else
	cout<<"\nSymbol";
	return 0;
}
