#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f=7.3764F;
	long l=6785L;
	char ch='1';
	cout<<setw(20)<<static_cast<char>(ch*2);
	cout<<endl<<l<<endl<<f;
	return 0;
}
