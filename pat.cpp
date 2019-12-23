#include<iostream>
#include"header.h"
using namespace std;
int main()
{
	const int N=10;
	for(int i=0;i<N;i++)
		printRow(i,N);
}

void printRow(const int row, const int n)  // implementation
{
	for(int j=0;j<2*n;j++)
		if((j<n-row)||(j>n+row))
			cout<<" ";
		else
			cout<<"#";
	cout<<endl;
}
