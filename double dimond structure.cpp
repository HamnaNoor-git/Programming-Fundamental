
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l,m;
	cout<<endl<<"Enter a number to print double dimond structure: ";
	cin>>n;
	//first upper dimond
	for(i=1;i<=(n/2);i++)
	{
		for(j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		for(l=i-1; l<=(n/2) && l>0 && l<=i;l--)
		{
			cout <<"  ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		cout<<endl;
	}
	//lower V structure for upper dimond
	for(i=1;i<=(n/2);i++)
	{
		for(m=(n/2);m>0;m-- )
		{
			cout<<" ";
		}
		for(l=i-1; l<=(n/2) && l>0 && l<=i;l--)
		{
			cout <<" ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		
		
		for(j=n-i-(n/2); j>0 ;j--)
		{
			cout<<"  ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		cout<<endl;
	}
	
	//second lower dimond
	for(i=2;i<=(n/2);i++)
	{
		for(j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		for(l=i-1; l<=(n/2) && l>0 && l<=i;l--)
		{
			cout <<"  ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		cout<<endl;
	}
	
	//lower V structure for lower dimond
	for(i=1;i<=(n/2);i++)
	{
		for(m=(n/2);m>0;m-- )
		{
			cout<<" ";
		}
		for(l=i-1; l<=(n/2) && l>0 && l<=i;l--)
		{
			cout <<" ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		
		
		for(j=n-i-(n/2); j>0 ;j--)
		{
			cout<<"  ";
		}
		for(k=1;k<=1;k++)
		{
			cout<<"x";
		}
		cout<<endl;
	}
	return 0;
}
