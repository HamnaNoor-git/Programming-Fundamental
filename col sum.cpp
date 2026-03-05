#include<iostream>
using namespace std;

int *fsum(int **arr, int *r, int *c)
{
	int *csum =new int[*c];
	for(int i=0; i<*c; i++)
	{	csum[i]=0;
		for(int j=0; j<*r; j++)
		{
			csum[i]+= (*(*(arr+j)+i));
		}
	}
	return csum;
	
}
int main()
{
//	Sum of Columns in 2D Array
//Dynamically allocate a 2D array. Write a function that takes a pointer to the 2D array and its size and returns a dynamically allocated array of column sums.

	int row=3,col=3;
	int **arr=new int*[row];
	
	for(int i=0; i<row; i++)
	{
		arr[i]= new int[col];
	}
	arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3;
    arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6;
    arr[2][0] = 7; arr[2][1] = 8; arr[2][2] = 9;
    
    int *arr2=fsum(arr,&row,&col);
    for(int i=0; i<col; i++)
    cout<<arr2[i]<<" ";
	return 0;
}
