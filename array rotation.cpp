#include<iostream>
using namespace std;

int **rotatet(int **arr, int r, int c)
{
	int **rr= new int *[r];
	for(int i=0; i<r; i++)
	{
		rr[i]= new int [c];
	}	
	
	//transpose
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			rr[j][i]=arr[i][j];
		}
	}
	
	//rotation(reverse)
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c/2; j++)
		{
			int temp=rr[i][j];
			rr[i][j]=rr[i][c-1-j];
			rr[i][c-1-j]=temp;
		}
	}
	return rr;
}
int main()
{
	
//2D Dynamic Array Rotation
//Write a function that takes a dynamically allocated 2D array and rotates it 90 degrees clockwise. Return a new dynamically allocated array.
	
	int r=3,c=3;
	int **arr= new int *[r];
	
	for(int i=0; i<r; i++)
	{
		arr[i]= new int [c];
	}
	
	cout<<"input elements \n";
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"the matrix is: \n";
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	int **nn=rotatet(arr, r, c);
	cout<<"the changed matrix is: \n";
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<nn[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}

