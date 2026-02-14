
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cout<<endl<< "Enter a number of rows to print pattern: ";
	cin >>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(l=n-i; l>0; l--)
		{
			cout<<"  ";
		}
		for(k=i; k>=1; k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
