#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int n=10;
	for(int i=0;i<10;++i)
	{
			for(int j=0;j<2*n;++j)		// more efficient than the below one
			{
				if((j<n-i)||(j>n+i))
					cout<<" ";
				else
					cout<<"*";
			}
			/*for(int k=1;k<=n-i;++k)
			{
				cout<<" ";
			}
			for(int k=1;k<=i;++k)
			{
				cout<<"*";
			}
			for(int k=1;k<i;++k)
			{
				cout<<"*";
			}*/
			cout<<endl;
	}
	getch();
	return 0;
}
