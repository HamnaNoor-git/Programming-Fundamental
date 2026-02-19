
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Enter a odd number to generated upper and lower triangle: ";
	cin >>n;
	if(n%2!=0)
	{
	//above upper triangle
	for(i=n/2 + 1;i>=1;i--) //No. of rows                  
	{
		for(j=n-i; j>0; j--) //spacing
		{
			cout<<" ";
		}
		for(k=1; k<=2*i-1; k++) //odd * in a column 
		{
			cout<<"*";
		}
		cout<<endl;
	}
    //lower upward triangle
	for(i=2;i<=n/2+1;i++)
	{
		for(j=n-i; j>0; j--) //spacing
		{
			cout<<" ";
		}
		for(k=1; k<=(2*i-1);k++) //odd * in a column
		{
			cout<<"*";
		}
		cout<<endl;
	}
    }
    
    else
	{
		cout << "Odd number is required for printing!!!";
	} 
	return 0;
}
