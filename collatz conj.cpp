#include<iostream>
// program to implement collatz conjucture...
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a natural Number: "; //to take the user input
	A:
	cin>>num;
	if(!(num>0))			// checking if user input is valid?
	{
		cout<<"Entered number is not a natural number: ";
		goto A;
	}
	while(num!=1)				// checking if the series has reached 421
	{
		if(num%2==0)
		{
			cout<<num<<'/'<<2<<'=';
			num=num/2;
			cout<<num<<endl;
		}
		else
		{
			cout<<num<<'*'<<3<<'+'<<1<<'=';
			num=num*3+1;
			cout<<num<<endl;
		}
		
	}
	system("PAUSE");  //to pause the screen
	return 0;
}
