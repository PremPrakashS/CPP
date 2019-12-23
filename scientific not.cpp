// Program to convert a number to scientific notation
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double d;
	int exp= 0;
	cout<<"Enter a number: ";
	cin>>d;
	while(!(d<10))
	{
		d=d/10;
		++exp;
	}
	while(!(d>0))
	{
		d=d*10;
		--exp;
	}
	cout<<d<<'*'<<10<<'^'<<exp<<endl;
	system("PAUSE");
}
