#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double dollars,franc,deuts,yen;
	cout<<"Enter the amount in dollars : ";
	cin>>dollars;
	cout<<"Amount in British pound : "<<dollars/1.487<<endl;
	cout<<"Amount in French Franc pound : "<<(dollars/1.487)*0.172<<endl;
	cout<<"Amount in Greman deutschemark : "<<(dollars/1.487)*0.584<<endl;
	cout<<"Amount in Japanese : "<<(dollars/1.487)*0.00955<<endl;
	system("PAUSE");
	return 0;
}
